# NewtkaReverter Viewer

Nuitka 逆向结果浏览器的 PySide6 GUI 前端。A PySide6 GUI for browsing Nuitka reverse-engineering artifacts.

## 用法 / Usage

```
cd viewer
python app.py            # 默认加载 ../example
python app.py <dir>      # 指定目录
```

依赖: `pip install PySide6`（Python 3.11+）。

## 功能 / Features

- **概要报告**: nuitka_main_report.txt 摘要（blob 条目统计、加载器地址、常量数组基址）。
- **常量表**: 解析 `__main___constants.txt` 的 288 个常量，显示数据类型 / 值 / 符号 / 地址，
  并扫描全部伪代码文件统计每个常量的引用次数与位置；支持按地址、符号、值搜索。
- **Blob 解码**: 直接按 `.bytecode` 序列化格式解码 `__main___blob.bin`（独立验证常量表内容），嵌套 tuple 展开为树。
- **伪代码**: 将 IDA 导出的 C 伪代码翻译为 Python 风格伪代码 ——
  `if/else/while/return` 语句语法转换，`qword_1826CBxxx` 常量引用行尾注解为 `[常量表下标] 值`，
  变量声明翻译为初始化语句。

## 原理 / How it works

Nuitka 把用户模块的常量序列化进 `.bytecode` blob（入口名 `__main__`），由加载器函数
（`sub_1817C4800(tstate, &qword_1826CB270, "__main__")`）在运行时反序列化到 `qword_1826CB270` 数组；
模块逻辑本身编译为原生 C。本工具展示的常量即该数组的静态解码结果；"引用"列指示
伪代码中以 `qword_<addr>` 形式引用该槽位的次数（地址 = 基址 0x1826CB270 + 8×index）。

## 文件 / Files

- `core.py` — 解析层: 常量 txt 解析、blob 格式解码器、伪代码翻译器、引用扫描。
- `app.py` — PySide6 GUI（四个标签页）。
