#!/usr/bin/env python3
"""NewtkaReverter 常量浏览器 — Nuitka 逆向结果 PySide6 GUI 查看器.

用法:
    python app.py [example目录]     # 默认: ../example
"""
from __future__ import annotations

import os
import sys

from PySide6.QtCore import Qt
from PySide6.QtGui import QFont, QKeyEvent
from PySide6.QtWidgets import (
    QApplication, QSplitter, QTabWidget, QTableWidget, QTableWidgetItem,
    QTextEdit, QTreeWidget, QTreeWidgetItem, QVBoxLayout, QWidget, QLabel,
    QLineEdit, QHBoxLayout, QMessageBox, QAbstractItemView, QPlainTextEdit,
    QComboBox, QFileDialog, QPushButton, QStatusBar,
)

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import core


class PlainText(QPlainTextEdit):
    """Code view with monospace font and Ctrl+F-free simple search."""
    def __init__(self):
        super().__init__()
        f = QFont("Consolas"); f.setStyleHint(QFont.Monospace)
        self.setFont(f)
        self.setLineWrapMode(QPlainTextEdit.NoWrap)
        self.setReadOnly(True)


class ConstantsTab(QWidget):
    def __init__(self, consts: list[core.Constant], refs: dict):
        super().__init__()
        self.consts = consts
        self.refs = refs
        self.addr2const = {c.address: c for c in consts}

        lay = QVBoxLayout(self)
        top = QHBoxLayout()
        top.addWidget(QLabel("搜索 (地址/符号/值):"))
        self.search = QLineEdit()
        self.search.setPlaceholderText("例如 1826CB310 或 setStyleSheet 或 280")
        self.search.textChanged.connect(self.filter)
        top.addWidget(self.search)
        self.count_lbl = QLabel()
        top.addWidget(self.count_lbl)
        lay.addLayout(top)

        self.table = QTableWidget(0, 6)
        self.table.setHorizontalHeaderLabels(
            ["Index", "地址", "符号", "类型", "值", "引用次数"])
        self.table.horizontalHeader().setStretchLastSection(False)
        self.table.setColumnWidth(0, 60); self.table.setColumnWidth(1, 110)
        self.table.setColumnWidth(2, 150); self.table.setColumnWidth(3, 80)
        self.table.setColumnWidth(4, 520); self.table.setColumnWidth(5, 80)
        self.table.setSelectionBehavior(QAbstractItemView.SelectRows)
        self.table.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.table.verticalHeader().setVisible(False)
        lay.addWidget(self.table)

        self.detail = PlainText()
        self.detail.setMaximumHeight(180)
        lay.addWidget(QLabel("详情 (值 / 伪代码引用位置):"))
        lay.addWidget(self.detail)

        self.table.itemSelectionChanged.connect(self.show_detail)
        self.populate()

    def populate(self, needle: str = ""):
        nd = needle.strip().lower()
        self.table.setRowCount(0)
        for c in self.consts:
            vr = core.full_repr(c.value)
            row_vals = [str(c.index), hex(c.address), c.symbol, c.kind,
                        vr.replace("\n", " "), str(len(self.refs.get(c.address, [])))]
            if nd:
                joined = " ".join(row_vals).lower()
                if nd not in joined:
                    continue
            r = self.table.rowCount()
            self.table.insertRow(r)
            for i, v in enumerate(row_vals):
                it = QTableWidgetItem(v)
                if i == 1:
                    it.setData(Qt.UserRole, c)
                self.table.setItem(r, i, it)
        self.count_lbl.setText(f"{self.table.rowCount()} 项")

    def filter(self, text):
        self.populate(text)

    def show_detail(self):
        items = self.table.selectedItems()
        if not items:
            return
        c = self.table.item(items[0].row(), 1).data(Qt.UserRole)
        txt = [f"[{c.index}] {c.symbol} @ {hex(c.address)}",
               f"类型: {c.kind}",
               f"原始: {c.raw}",
               "值:", core.full_repr(c.value), ""]
        rlist = self.refs.get(c.address, [])
        txt.append(f"引用 ({len(rlist)} 处):")
        for fn, ln in rlist[:60]:
            txt.append(f"  {fn}:{ln}")
        if len(rlist) > 60:
            txt.append(f"  … 共 {len(rlist)} 处")
        self.detail.setPlainText("\n".join(txt))


class BlobTab(QWidget):
    def __init__(self, blob_path: str):
        super().__init__()
        lay = QVBoxLayout(self)
        lay.addWidget(QLabel(
            f"__main___blob.bin 直接解码（.bytecode 常量区格式，尽力解析）: {blob_path}"))
        self.tree = QTreeWidget()
        self.tree.setHeaderLabels(["#", "解码值", "类型"])
        self.tree.setColumnWidth(0, 60); self.tree.setColumnWidth(1, 800)
        lay.addWidget(self.tree)
        if blob_path and os.path.exists(blob_path):
            data = open(blob_path, "rb").read()
            try:
                vals = core.decode_blob(data)
            except Exception as e:
                vals = [f"<解码失败: {e}>"]
            for i, v in enumerate(vals):
                def tostr(x):
                    if isinstance(x, bytes):
                        try:
                            return "bytes: " + x.decode("utf-8", "replace")
                        except Exception:
                            return repr(x)
                    if isinstance(x, tuple):
                        return "(" + ", ".join(tostr(y) for y in x) + ")"
                    return repr(x)
                it = QTreeWidgetItem([str(i), tostr(v), type(v).__name__])
                # nested tuples as children
                if isinstance(v, tuple):
                    for j, x in enumerate(v):
                        child = QTreeWidgetItem([f"[{j}]", tostr(x), type(x).__name__])
                        it.addChild(child)
                self.tree.addTopLevelItem(it)


class PseudoTab(QWidget):
    def __init__(self, cfiles: list, consts: list):
        super().__init__()
        self.cfiles = cfiles
        self.consts = consts
        lay = QVBoxLayout(self)
        top = QHBoxLayout()
        top.addWidget(QLabel("伪代码文件:"))
        self.combo = QComboBox()
        top.addWidget(self.combo, 1)
        self.btn_regen = QPushButton("重新生成伪代码")
        self.btn_regen.clicked.connect(self.reload)
        top.addWidget(self.btn_regen)
        lay.addLayout(top)

        self.view = PlainText()
        lay.addWidget(self.view, 1)
        self.legend = QLabel(
            "说明: if/else/while/return 翻译为 Python 语法; "
            "qword_1826CBxxx 注解为 [常量表下标] 及其值; "
            "其余 C 调用保留原样。")
        self.legend.setWordWrap(True)
        lay.addWidget(self.legend)

        self.combo.currentIndexChanged.connect(self.show_file)
        self.reload()

    def reload(self):
        cmap = {c.address: c for c in self.consts}
        self.combo.blockSignals(True)
        self.combo.clear()
        self.files = []
        for p in self.cfiles:
            raw = open(p, "r", encoding="utf-8", errors="replace").read()
            name = os.path.basename(p)
            orig, pseudo = core.to_pseudo(raw, cmap)
            self.files.append((name, orig, pseudo))
            self.combo.addItem(name)
        self.combo.blockSignals(False)
        if self.files:
            self.show_file(0)

    def show_file(self, idx):
        if not (0 <= idx < len(self.files)):
            return
        name, orig, pseudo = self.files[idx]
        # render pseudo with indent tracking
        out = []
        depth = 0
        for o, p in zip(orig, pseudo):
            s = o.strip()
            if s == "{":
                depth += 1
                continue
            if s == "}":
                depth -= 1
                continue
            if p:
                out.append("    " * max(depth - 1, 0) + p)
        self.view.setPlainText("\n".join(out))


class SummaryTab(QWidget):
    def __init__(self, consts, cfiles, report_path):
        super().__init__()
        view = PlainText()
        lay = QVBoxLayout(self)
        lay.addWidget(view)
        if report_path and os.path.exists(report_path):
            txt = open(report_path, "r", encoding="utf-8", errors="replace").read()
            # trim huge entry list: keep head + tail
            lines = txt.splitlines()
            head = lines[:10]
            tail = lines[-25:]
            view.setPlainText("\n".join(head) +
                              f"\n… (省略 {len(lines) - 35} 行模块列表) …\n" +
                              "\n".join(tail))
        else:
            view.setPlainText("未找到 nuitka_main_report.txt")


class MainWindow(QWidget):
    def __init__(self, example_dir: str):
        super().__init__()
        self.setWindowTitle(f"NewtkaReverter 浏览器 — {example_dir}")
        self.resize(1500, 900)

        blob, ctxt, cfiles, report = core.discover(example_dir)

        consts = core.parse_constants_txt(ctxt) if os.path.exists(ctxt) else []

        # pseudocode files for refs
        pf_raw = []
        for p in cfiles:
            pf_raw.append((os.path.basename(p),
                           open(p, "r", encoding="utf-8", errors="replace").read().splitlines()))

        refs = {}
        for name, lines in pf_raw:
            for i, ln in enumerate(lines, 1):
                import re
                for m in core.QWORD_RE.finditer(ln):
                    if m.group(1) == "qword":
                        refs.setdefault(int(m.group(2), 16), []).append((name, i))

        tabs = QTabWidget()
        tabs.addTab(SummaryTab(consts, cfiles, report), "概要报告")
        tabs.addTab(ConstantsTab(consts, refs), f"常量表 ({len(consts)})")
        tabs.addTab(BlobTab(blob), "Blob 解码")
        tabs.addTab(PseudoTab(cfiles, consts), f"伪代码 ({len(cfiles)} 文件)")

        lay = QVBoxLayout(self)
        lay.addWidget(tabs)
        st = QStatusBar()
        st.showMessage(f"常量 {len(consts)} 项 | 伪代码文件 {len(cfiles)} | blob: "
                       f"{os.path.basename(blob) if blob else '-'}")
        lay.addWidget(st)


def main():
    default = os.path.normpath(os.path.join(os.path.dirname(
        os.path.abspath(__file__)), "..", "example"))
    example_dir = ''#sys.argv[1] if len(sys.argv) > 1 else default
    app = QApplication(sys.argv)
    if not os.path.isdir(example_dir):
        d = QFileDialog.getExistingDirectory(None, "选择 逆向结果 目录")
        if os.path.exists(d):
            example_dir = d
        else:
            QMessageBox.critical(None, "错误", "找不到 逆向结果 目录")
            return 1
    w = MainWindow(example_dir)
    w.show()
    return app.exec()


if __name__ == "__main__":
    sys.exit(main())
