"""Parse Nuitka-reverter artifacts: constants txt, blob bin, pseudocode .c exports."""
from __future__ import annotations

import ast
import os
import re
import struct
from dataclasses import dataclass, field


# ---------------------------------------------------------------- constants txt
CONST_LINE = re.compile(
    r"^\[(\d+)\]\s+(\w+)\s+\((0x[0-9A-Fa-f]+)\)\s*=\s*(.*)$"
)


@dataclass
class Constant:
    index: int
    symbol: str          # qword_1826CB270
    address: int         # 0x1826CB270
    value: object = None # decoded python value or raw string
    raw: str = ""        # raw right-hand text
    kind: str = "raw"    # python type name or 'raw'

    @property
    def slot(self) -> int:  # index in constants array == (addr-base)/8
        return self.index


def _decode_rhs(rhs: str):
    rhs = rhs.strip()
    try:
        v = ast.literal_eval(rhs)
        return v, type(v).__name__
    except Exception:
        return rhs, "raw"


def parse_constants_txt(path: str) -> list[Constant]:
    out: list[Constant] = []
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        for line in f:
            m = CONST_LINE.match(line.strip())
            if not m:
                continue
            idx, sym, addr, rhs = m.groups()
            v, kind = _decode_rhs(rhs)
            out.append(Constant(int(idx), sym, int(addr, 16), v, rhs, kind))
    return out


# unknown markers like ('unknown_0x77', None) -> special dict marker
UNKNOWN_RE = re.compile(r"unknown_0x([0-9A-Fa-f]+)")


def describe_value(v, depth: int = 0) -> str:
    """Human readable repr with nested expansion."""
    pad = "  " * depth
    if isinstance(v, str):
        r = repr(v)
        return r if len(r) <= 160 else r[:160] + "...(截断)"
    if isinstance(v, tuple):
        if not v:
            return "()"
        # check unknown marker tuple
        if len(v) == 2 and isinstance(v[0], str) and v[0].startswith("unknown_0x") and v[1] is None:
            return f"<特殊常量 {v[0]}>"
        inner = ",\n".join(pad + "  " + describe_value(x, depth + 1) for x in v)
        return "(\n" + inner + "\n" + pad + ")"
    return repr(v)


def full_repr(v) -> str:
    return describe_value(v)


# ---------------------------------------------------------------- blob decoder
# Serialized blob format (Nuitka constants): payload = [u16 count][entries...]
# Type codes documented in skill nuitka-reversing.

class BlobReader:
    def __init__(self, data: bytes):
        self.d = data
        self.p = 0

    def u8(self):
        v = self.d[self.p]; self.p += 1; return v

    def u16(self):
        v = struct.unpack_from("<H", self.d, self.p)[0]; self.p += 2; return v

    def u32(self):
        v = struct.unpack_from("<I", self.d, self.p)[0]; self.p += 4; return v

    def f64(self):
        v = struct.unpack_from("<d", self.d, self.p)[0]; self.p += 8; return v

    def varint(self):
        shift = 0; val = 0
        while True:
            b = self.u8()
            val |= (b & 0x7F) << shift
            if not (b & 0x80):
                return val
            shift += 7

    def cstr(self):
        end = self.d.index(b"\0", self.p)
        s = self.d[self.p:end].decode("utf-8", "replace")
        self.p = end + 1
        return s

    def take(self, n):
        v = self.d[self.p:self.p + n]; self.p += n; return v


def decode_blob(data: bytes) -> list:
    """Decode a module blob payload -> list of decoded constants (best effort)."""
    r = BlobReader(data)
    count = r.u16()
    out = []
    for _ in range(count):
        try:
            out.append(_read_value(r))
        except Exception as e:
            out.append(f"<解码错误: {e}>")
            break
    return out


def _read_value(r: BlobReader):
    t = chr(r.u8())
    if t in "uac":
        return r.cstr()
    if t in "Nn":
        return None
    if t == "T":
        return tuple(_read_value(r) for _ in range(r.u8()))
    if t == "t":
        return tuple(_read_value(r) for _ in range(r.varint()))
    if t in "lq":
        v = r.varint()
        # signed zigzag-ish: nuitka stores signed varint
        return v if v < (1 << 62) else v - (1 << 63) * 0  # keep unsigned; sign handled loosely
    if t == "f":
        return r.f64()
    if t == "j":
        re_ = r.f64(); im = r.f64(); return complex(re_, im)
    if t in "BC":
        return r.take(r.varint())
    if t == "s":
        return r.take(r.u32())
    if t == "X":
        return f"<raw {r.varint()} bytes>"
    if t == "O":
        return f"<builtin {r.cstr()!r}>"
    if t == ":":
        return slice(*(_read_value(r) for _ in range(3)))
    if t == ";":
        return f"<attr {_read_value(r)!r}.{_read_value(r)!r}>"
    if t == "A":
        return f"<GenericAlias {_read_value(r)!r}[{_read_value(r)!r}]>"
    if t == "Z":
        return f"<special 0x{r.u8():02x}>"
    if t == ".":
        raise ValueError("stream END marker")
    return f"<未知类型码 {t!r}>"


# ---------------------------------------------------------------- pseudocode
QWORD_RE = re.compile(r"\b(qword|dword|byte|unk)_([0-9A-Fa-f]{8,})\b")
SUB_RE = re.compile(r"\bsub_([0-9A-Fa-f]+)\b")


@dataclass
class PseudoFile:
    path: str
    name: str
    raw: str = ""
    lines: list = field(default_factory=list)   # original code lines
    pseudo: list = field(default_factory=list)  # generated pseudo lines (same length, ""=skipped)


def to_pseudo(raw: str, consts: dict) -> tuple[list, list]:
    """Convert C pseudocode to python-like pseudo lines.

    consts: address-int -> Constant (for annotation)
    Returns (original_lines, pseudo_lines).
    """
    orig = raw.splitlines()
    pseudo: list[str] = []
    for ln in orig:
        s = ln.strip()
        if not s or s.startswith("//"):
            pseudo.append("")
            continue
        body = s.split("//")[0].strip()
        comment = s.split("//", 1)[1].strip() if "//" in s else ""
        tag = ""  # annotation appended
        py = ""
        if body == "{":
            py = ""  # indent handled by consumer via depth counting
        elif body == "}":
            py = ""
        elif body.startswith("else if") and body.endswith(")"):
            py = "elif " + body[body.find("(") + 1:-1].rstrip() + ":"
        elif body == "else":
            py = "else:"
        elif body.startswith("if") and body.endswith(")"):
            py = "if " + body[body.find("(") + 1:-1].rstrip() + ":"
        elif re.fullmatch(r"while\s*\(.+\)", body):
            cond = body[body.find("(") + 1:-1]
            py = "while " + ("True" if cond.strip() in ("1", "1LL") else cond) + ":"
        elif body.startswith("return "):
            py = "return " + body[7:].rstrip(";")
        elif body == "return;":
            py = "return"
        elif re.match(r"^(unsigned |const |struct |__int64|int|void|bool|char|_QWORD|_DWORD|_BYTE|size_t|unsigned int)"
                      r"(\s+\w+)+\s*(=[^;]*)?;$", body):
            # variable declaration -> init
            m = re.match(r"^.*?\s(\w+)(\s*=[^;]*)?;$", body)
            if m:
                name, init = m.group(1), (m.group(2) or "").lstrip("=").strip()
                py = f"{name} = {init or 'None'}"
            else:
                py = body.rstrip(";")
        elif body.startswith("goto "):
            py = "# goto " + body[5:].rstrip(";")
        elif re.match(r"^LABEL_\d+:$", body):
            py = "# " + body
        elif body.endswith(";"):
            py = body.rstrip(";")
        else:
            py = body
        # annotate qword consts
        ann = []
        for m in QWORD_RE.finditer(body):
            kind, hexa = m.group(1), m.group(2)
            addr = int(hexa, 16)
            if addr in consts:
                v = consts[addr]
                vr = describe_value(v.value)
                ann.append(f"{kind}_{hexa} = [{v.index}] {vr}")
        if ann:
            tag = "  # " + " | ".join(ann[:3]) + (" …" if len(ann) > 3 else "")
        elif comment:
            tag = "  # " + comment
        pseudo.append((py + tag) if py else (tag.lstrip() if tag else ""))
    return orig, pseudo


def scan_refs(files: list) -> dict:
    """addr -> list of (fname, lineno) referencing qword_xxx."""
    refs: dict[int, list] = {}
    for pf in files:
        for i, ln in enumerate(pf.lines, 1):
            for m in QWORD_RE.finditer(ln):
                if m.group(1) == "qword":
                    refs.setdefault(int(m.group(2), 16), []).append((pf.name, i))
    return refs


def discover(example_dir: str):
    """Find all artifacts in example dir."""
    blob = os.path.join(example_dir, "__main___blob.bin")
    ctxt = os.path.join(example_dir, "__main___constants.txt")
    cfiles = sorted(
        os.path.join(example_dir, f) for f in os.listdir(example_dir)
        if re.match(r"module___main___.*\.c$", f)
    )
    report = os.path.join(example_dir, "nuitka_main_report.txt")
    return blob, ctxt, cfiles, report
