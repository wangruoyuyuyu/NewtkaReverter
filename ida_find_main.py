# -*- coding: utf-8 -*-
"""
nuitka_main_finder.py — IDA script: locate Nuitka-compiled __main__ module,
export its pseudocode and deserialized constant-blob data.

How it works (reverse-engineered from Nuitka onefile DLLs, Python 3.14 build):
  1. Find the ".bytecode" C-string in .rdata — it doubles as the head of the
     serialized blob table:  [name\0][u32 skip] ... repeated, terminated by an
     empty name / zero skip. The per-module blob payload is
     [u16 entry_count][entries...] and lives at name_end+4, size = skip.
  2. Locate the module's constants array: the blob loader is called as
     loader(tstate, &CONSTS_ARRAY, "__main__"). We find code refs to the
     "__main__" literal, decompile the callers and regex out &CONSTS_ARRAY.
  3. Data refs to CONSTS_ARRAY (excluding the loader/init wrappers) give the
     compiled module function — for a Nuitka build the user's main.py code IS
     that C function. Decompile it with Hex-Rays and export.
  4. Decode the blob entries (type codes from the runtime deserializer switch)
     and export both decoded values and raw bytes.

Usage in IDA:  File > Script file...  (needs Hex-Rays for step 2/3;
steps 1 and 4 work without any decompiler if you set MODULE name manually).

Tested against: Nuitka 2.x onefile, CPython 3.14, x64 MSVC target.
"""

import os
import re
import struct

import idaapi
import ida_bytes
import ida_funcs
import ida_kernwin
import ida_name
import ida_ua
import idautils
import idc

# --------------------------------------------------------------------------
# Pure parsing logic (no IDA deps) — kept separate so it can be unit-tested.
# --------------------------------------------------------------------------

def parse_blob_table(read, table_ea, max_entries=4096):
    """Walk the Nuitka blob table.

    `read(ea, n)` returns n bytes. Returns OrderedDict name -> (data_ea, size).
    Entry layout: [name\0][u32 skip]; payload of `skip` bytes follows; next
    entry name sits at data_ea + skip.

    NOTE: an EMPTY name is a legal entry (anon blob); the terminator is
    skip == 0 (validated against test.dll).
    """
    entries = {}
    pos = table_ea
    for _ in range(max_entries):
        raw = read(pos, 512)
        if not raw:
            break
        z = raw.find(b"\x00")
        if z < 0:
            break
        name = raw[:z].decode("utf-8", "replace")
        skip = struct.unpack_from("<I", raw, z + 1)[0]
        data_ea = pos + z + 1 + 4
        if name not in entries:  # keep first occurrence
            entries[name] = (data_ea, skip)
        if skip == 0:
            break
        pos = data_ea + skip
    return entries


def _read_cstr(read, ea, limit=4096):
    raw = read(ea, limit)
    z = raw.find(b"\x00")
    if z < 0:
        return None, ea + limit
    return raw[:z], ea + z + 1


def _read_varint(read, ea):
    """Nuitka stream varint: 7 bits per byte, high bit = continue."""
    value = 0
    shift = 0
    for _ in range(10):
        b = read(ea, 1)[0]
        ea += 1
        value |= (b & 0x7F) << shift
        shift += 7
        if not b & 0x80:
            break
    return value, ea


def decode_blob(read, data_ea, size, max_items=100000):
    """Decode the entries of one module blob -> list of Python values.

    Type codes observed in the runtime deserializer switch
    (sub_18001C860-equivalent):
      u / a / c : null-terminated string (unicode / ascii / const)
      N / n     : None
      T         : tuple, u8 count          t: tuple, varint count
      l / q     : varint integer
      f         : float64 (8 bytes)        j: complex (16 bytes)
      d         : runtime constant idx (1 byte)
      B / C     : bytes, varint length     s: bytes, u32 length
      X         : raw data, varint length (skipped)
      O         : builtin object by null-terminated name
      :         : slice(start, stop, step) — 3 sub-entries
      ;         : 3 sub-entries (setattr-like)
      A         : GenericAlias — 2 sub-entries
      Z         : special constant, 1 byte selector
      .         : end marker
    """
    end_ea = data_ea + size
    count = struct.unpack_from("<H", read(data_ea, 2), 0)[0]
    pos = data_ea + 2
    values = []

    def decode_one(pos, depth=0):
        t = chr(read(pos, 1)[0])
        pos += 1
        if depth > 64:
            return ("depth_limit", None), pos
        if t in "uac":
            s, pos = _read_cstr(read, pos)
            return ("str", s.decode("utf-8", "replace")), pos
        if t in "Nn":
            return None, pos
        if t == "T":
            n = read(pos, 1)[0]
            pos += 1
            items = []
            for _ in range(n):
                v, pos = decode_one(pos, depth + 1)
                items.append(v)
            return tuple(items), pos
        if t == "t":
            n, pos = _read_varint(read, pos)
            items = []
            for _ in range(n):
                v, pos = decode_one(pos, depth + 1)
                items.append(v)
            return tuple(items), pos
        if t in "lq":
            v, pos = _read_varint(read, pos)
            return v, pos
        if t == "f":
            return struct.unpack("<d", read(pos, 8))[0], pos + 8
        if t == "j":
            re_, im = struct.unpack("<dd", read(pos, 16))
            return complex(re_, im), pos + 16
        if t == "d":
            return ("runtime", read(pos, 1)[0]), pos + 1
        if t in "BC":
            n, pos = _read_varint(read, pos)
            return bytes(read(pos, n)), pos + n
        if t == "s":
            n = struct.unpack("<I", read(pos, 4))[0]
            pos += 4
            return bytes(read(pos, n)), pos + n
        if t == "X":
            n, pos = _read_varint(read, pos)
            return ("raw", bytes(read(pos, min(n, 64)))), pos + n
        if t == "O":
            s, pos = _read_cstr(read, pos)
            return ("builtin", s.decode("utf-8", "replace")), pos
        if t == ":":
            items = []
            for _ in range(3):
                v, pos = decode_one(pos, depth + 1)
                items.append(v)
            return ("slice", tuple(items)), pos
        if t == ";":
            items = []
            for _ in range(3):
                v, pos = decode_one(pos, depth + 1)
                items.append(v)
            return ("attr", tuple(items)), pos
        if t == "A":
            items = []
            for _ in range(2):
                v, pos = decode_one(pos, depth + 1)
                items.append(v)
            return ("GenericAlias", tuple(items)), pos
        if t == "Z":
            return ("special", read(pos, 1)[0]), pos + 1
        if t == ".":
            return END_MARKER, pos
        return ("unknown_0x%02X" % ord(t), None), pos  # cannot resync safely

    END_MARKER = object()
    for _ in range(min(count, max_items)):
        if pos >= end_ea:
            break
        v, pos = decode_one(pos)
        if v is END_MARKER:
            break
        values.append(v)
    return count, values


# --------------------------------------------------------------------------
# IDA glue
# --------------------------------------------------------------------------

OUTPUT_DIR = idc.ARGV[1] if len(idc.ARGV) > 1 else None
MODULE_NAME = idc.ARGV[2] if len(idc.ARGV) > 2 else "__main__"


def read_mem(ea, n):
    return ida_bytes.get_bytes(ea, n) or b"\x00" * n


def find_cstring(s):
    """Find a C string in the binary, return list of eas."""
    eas = []
    pat = s.encode() + b"\x00"
    # strategy 1: version-tolerant sliding-window binary search
    try:
        for seg in idautils.Segments():
            seg_end = idc.get_segm_end(seg)
            win = 0x100000
            ea = seg
            while ea < seg_end and len(eas) <= 64:
                n = min(win, seg_end - ea)
                chunk = read_mem(ea, n) if ida_bytes.is_loaded(ea) else None
                if not chunk:
                    break
                idx = chunk.find(pat)
                if idx >= 0:
                    hit = ea + idx
                    if hit not in eas:
                        eas.append(hit)
                    ea = hit + 1  # continue scanning for more hits
                else:
                    ea += max(1, n - len(pat) + 1)  # slide window, keep overlap
    except Exception as e:
        print("binsearch fallback failed: %r" % e)
    # strategy 2: strings list
    if not eas:
        for se in idautils.Strings():
            if str(se) == s:
                eas.append(se.ea)
    return eas


def seg_of(ea):
    for seg in idautils.Segments():
        if seg <= ea < idc.get_segm_end(seg):
            return idc.get_segm_name(seg), seg, idc.get_segm_end(seg)
    return None, None, None


def is_data_global(ea):
    name, s, e = seg_of(ea)
    return name in (".data", ".bss", ".rdata") if name else False


def find_lea_targets(f):
    """All `lea reg, [target]` instruction addresses + targets in a function."""
    out = []
    ea = f.start_ea
    while ea < f.end_ea:
        mnem = idc.print_insn_mnem(ea)
        if mnem == "lea":
            for op in (0, 1):
                if idc.get_operand_type(ea, op) in (idc.o_mem, 2, 5, 6, 7):
                    tgt = idc.get_operand_value(ea, op)
                    if tgt and tgt != idaapi.BADADDR:
                        out.append((ea, tgt))
                    break
        ea = idc.next_head(ea, f.end_ea)
    return out


def decompile_func(ea):
    try:
        import ida_hexrays
        cf = ida_hexrays.decompile(ea)
        return str(cf) if cf else None
    except Exception as e:
        print("decompile 0x%X failed: %r" % (ea, e))
        return None


def disasm_func(f):
    lines = []
    ea = f.start_ea
    while ea < f.end_ea and ea != idaapi.BADADDR:
        lines.append("  %08X  %s" % (ea, idc.generate_disasm_line(ea, 0)))
        ea = idc.next_head(ea, f.end_ea)
    return "\n".join(lines)


def export_func(fea, out, tag, log):
    """Decompile (or disassemble) one function and write it to disk."""
    fname = idc.get_func_name(fea)
    txt = decompile_func(fea)
    if txt is not None:
        body = txt
        how = "pseudocode"
    else:
        f = ida_funcs.get_func(fea)
        body = "; Hex-Rays unavailable/failed; disassembly:\n" + disasm_func(f)
        how = "disassembly"
    fn = "module_%s_%s_%X.c" % (MODULE_NAME, tag, fea)
    with open(os.path.join(out, fn), "w", encoding="utf-8") as fh:
        fh.write("// %s @ 0x%X (%s)\n\n%s\n" % (fname, fea, how, body))
    log("Exported %s -> %s" % (how, fn))


def global_name(ea):
    """Best name for a global: existing IDA name, else qword_<ea> style."""
    n = idc.get_name(ea, ida_name.GN_VISIBLE)
    if n:
        return n
    return "qword_%X" % ea
 

def main():
    out = OUTPUT_DIR or os.path.dirname(idc.get_idb_path())
    os.makedirs(out, exist_ok=True)
    report = []

    def log(s):
        print(s)
        report.append(s)

    log("=== Nuitka main finder ===")
    log("Output dir: %s" % out)

    # ---- 1. blob table ----------------------------------------------------
    bcs = find_cstring(".bytecode")
    log('".bytecode" strings at: %s' % ", ".join(hex(e) for e in bcs))
    table = None
    for ea in bcs:
        t = parse_blob_table(read_mem, ea)
        if any(k == MODULE_NAME for k in t) or len(t) > 1:
            table = t
            log("Blob table head at 0x%X, %d entries" % (ea, len(t)))
            break
    if table is None:
        log("ERROR: blob table not found")
        return

    for name, (dea, sz) in table.items():
        log("  entry %-24r data=0x%X size=%d" % (name, dea, sz))

    if MODULE_NAME not in table:
        log("ERROR: module %r not in blob table" % MODULE_NAME)
        return
    blob_ea, blob_size = table[MODULE_NAME]
    raw = read_mem(blob_ea, blob_size)
    with open(os.path.join(out, "%s_blob.bin" % MODULE_NAME), "wb") as f:
        f.write(raw)
    log("Blob dumped: %s_blob.bin (%d bytes)" % (MODULE_NAME, blob_size))

    # ---- 2. decode blob ---------------------------------------------------
    consts_ea = None
    try:
        cnt, values = decode_blob(read_mem, blob_ea, blob_size)
    except Exception as e:
        log("ERROR: blob decode failed: %r" % e)
        cnt, values = -1, []

    # ---- 3. locate the module's constants array ---------------------------
    # The blob loader is:  loader(tstate, &CONSTS_ARRAY, "module_name")
    # Find refs to the module-name string; in the referencing functions,
    # either regex the Hex-Rays output for &CONSTS_ARRAY, or (no decompiler)
    # scan for `lea reg, [target]` where target is an unkn. data global that
    # sits in the 4th-arg position near the string ref.
    mcs = find_cstring(MODULE_NAME)
    log('%r strings at: %s' % (MODULE_NAME, ", ".join(hex(e) for e in mcs)))
    loader_calls = []   # (func_ea, consts_ea)
    exported_funcs = set()

    for sea in mcs:
        for ref in idautils.DataRefsTo(sea):
            f = ida_funcs.get_func(ref)
            if not f:
                continue
            txt = decompile_func(f.start_ea)
            found_here = []
            if txt:
                for m in re.finditer(
                        r'\b\w+\(\s*[^,]+,\s*&(\w+)\s*,\s*"%s"\s*\)' %
                        re.escape(MODULE_NAME), txt):
                    ea = idc.get_name_ea_simple(m.group(1))
                    if ea != idaapi.BADADDR and is_data_global(ea):
                        found_here.append(ea)
            else:
                # no Hex-Rays: take every data-global lea target in the func
                for _iea, tgt in find_lea_targets(f):
                    if is_data_global(tgt) and tgt != sea:
                        found_here.append(tgt)
            for ea in found_here:
                loader_calls.append((f.start_ea, ea))
                log("loader in %s (0x%X) -> consts array %s @ 0x%X" %
                    (idc.get_func_name(f.start_ea), f.start_ea,
                     global_name(ea), ea))

    if loader_calls:
        # every referencing function is part of the module init chain — export all
        consts_ea = loader_calls[0][1]
    else:
        log("WARNING: loader call not found; falling back to exported "
            "functions only")

    # ---- 4. decode with qword mapping & write constants file --------------
    lines = []
    if consts_ea is not None:
        base = consts_ea
        lines.append("constants array base: %s @ 0x%X" %
                     (global_name(base), base))
        lines.append("layout: array[i] is a pointer-sized slot at base + 8*i")
        lines.append("")
    lines.append("entry count = %d" % cnt)
    for i, v in enumerate(values):
        if consts_ea is not None:
            slot = consts_ea + 8 * i
            lines.append("[%d] %s (0x%X) = %r" %
                         (i, global_name(slot), slot, v))
        else:
            lines.append("[%d] %r" % (i, v))
    dec = "\n".join(lines)
    with open(os.path.join(out, "%s_constants.txt" % MODULE_NAME), "w",
              encoding="utf-8") as f:
        f.write(dec + "\n")
    log("Constants decoded -> %s_constants.txt" % MODULE_NAME)
    print(dec)

    # ---- 5. export the compiled module functions --------------------------
    # The compiled module function itself references the module-name string
    # (e.g. sub_180001880 for __main__) and/or the consts array. Export every
    # function that references either, except pure runtime helpers already
    # exported via the loader chain.
    targets = {}
    for fea, _cea in loader_calls:
        targets[fea] = "loader"
    for sea in mcs:
        for ref in idautils.DataRefsTo(sea):
            f = ida_funcs.get_func(ref)
            if f:
                targets.setdefault(f.start_ea, "nameref")
    if consts_ea is not None:
        for ref in idautils.DataRefsTo(consts_ea):
            f = ida_funcs.get_func(ref)
            if f:
                targets.setdefault(f.start_ea, "constsref")

    log("Functions to export (%d):" % len(targets))
    for fea, why in sorted(targets.items()):
        log("  %s (0x%X) [%s]" % (idc.get_func_name(fea), fea, why))
    for fea, why in sorted(targets.items()):
        if fea in exported_funcs:
            continue
        export_func(fea, out, why, log)
        exported_funcs.add(fea)

    if not targets:
        log("ERROR: no functions found referencing module name/constants; "
            "cannot export pseudocode")

    with open(os.path.join(out, "nuitka_main_report.txt"), "w",
              encoding="utf-8") as f:
        f.write("\n".join(report) + "\n")
    log("Report -> nuitka_main_report.txt")
    log("=== done ===")


main()
