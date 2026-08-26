# NewtkaReverter

Nuitka `--onefile` 打包 EXE 的逆向工具链 / Reverse-engineering toolkit for Nuitka-compiled onefile executables.

针对 Nuitka 2.x + CPython 3.14 (x64, MSVC) 打包的 `--onefile` 程序, 完成从 EXE 解包、
DLL 内常量/伪代码提取, 到 GUI 浏览的全流程。

## 工具链 / Pipeline

```
Nuitka onefile EXE
   │  ① NewtkaReverter.exe          (zstd 解压 + 归档提取)
   ▼
main.dll + 依赖文件
   │  ② IDA 打开 main.dll
   │  ③ 运行 ida_find_main.py       (blob 解析 + 函数定位 + 导出)
   ▼
输出目录 (blob/常量表/伪代码)
   │  ④ viewer/app.exe              (GUI 浏览)
   ▼
常量表、blob 树、Python 风格伪代码、引用统计
```

## 使用流程 / Usage

### ① 解包

```bat
NewtkaReverter.exe <input.exe> <output_dir>
```

- 在 EXE 内定位 `KAY` 标记 + zstd 流 (在 `.rdata` 段内)
- 解压自定义归档: `[UTF-16LE 文件名\0][u64 大小][数据]` 重复
- 第一个文件即 `main.dll` (编译后的用户程序), 其余为 python3xx.dll / .pyd 等依赖

### ② IDA 分析

用 IDA (含 Hex-Rays) 打开解出的 `main.dll`, 等待自动分析完成。

### ③ 运行 IDA 脚本

IDA 菜单 `File > Script file...` 选择 `ida_find_main.py`:

```python
# 可选参数 (via idc.ARGV, 或直接改脚本头部):
#   OUTPUT_DIR  — 输出目录, 默认 IDB 同目录
#   MODULE_NAME — 目标模块名, 默认 "__main__"
```

脚本执行步骤:

1. 定位 `.bytecode` C 字符串 = blob 表头, 遍历 `[name\0][u32 skip]` 条目
   (终止符是 `skip==0`; 空名字是合法的匿名 blob)
2. 解码目标模块的 blob (`[u16 count][entries...]`, 类型码见脚本注释)
3. 在引用 `"__main__"` 字符串的函数里, 用正则从 Hex-Rays 输出提取
   `loader(tstate, &CONSTS_ARRAY, "__main__")` 的常量数组基址;
   无反编译器时回退为扫描 `lea` 指令目标
4. 生成常量表 (每个常量标注 `qword_XXX` 槽位: 基址 + 8×index)
5. 导出所有引用模块名/常量数组的函数的伪代码

输出文件:

| 文件 | 内容 |
|------|------|
| `__main___blob.bin` | 原始 blob 字节 |
| `__main___constants.txt` | 解码后常量 + `qword_XXX` 槽位映射 |
| `module___main___loader_*.c` | blob 加载器函数伪代码 |
| `module___main___constsref_*.c` | 引用常量数组的模块函数伪代码 (即编译后的用户代码) |
| `nuitka_main_report.txt` | 全程日志 (blob 条目、函数列表、失败原因) |

### ④ GUI 查看

```bat
viewer\app.exe <输出目录>      (或: cd viewer && python app.py <dir>)
```

四个标签页: **概要报告** / **常量表** (类型·值·符号·地址·引用统计) /
**Blob 解码** (独立解码验证) / **伪代码** (C 转 Python 风格 + 常量行尾注解)。

依赖: PySide6 (`pip install PySide6`, Python 3.11+)。

## 原理 / How it works

Nuitka onefile 的 EXE 结构:

```
PE 头 + .text (onefile 引导程序, ~140KB)
     + .rdata [ KAY 标记 | zstd 压缩的自定义归档 (~39MB) ]
```

引导程序解压归档到 `%TEMP%\onefile_{PID}_{TIME}_{RANDOM}`, 然后以
`CREATE_SUSPENDED` 重启自身; 子进程检测 `NUITKA_ONEFILE_PARENT` 环境变量,
加载 `main.dll` 并调用其唯一导出 `run_code(argc, argv, dll_path)`。

`main.dll` 内部:

- **用户代码** (如 `__main__`) — Nuitka 把 Python 直接编译为 C 函数
  (例如 `print("Hello world!", end="!\n")` 编译为对 `PyDict_GetItemString(builtins,
  "print")` 的调用链), 函数通过引用 `"__main__"` 字符串和常量数组被定位。
- **常量** — 序列化进 `.bytecode` blob 表, 运行时由加载器
  `loader(tstate, &qword_XXX, "__main__")` 反序列化到 8 字节槽位数组,
  编译后的 C 代码按 `基址 + 8×index` 取用。
- **标准库** — 153 个模块以标准 Python marshal 格式存在 X 类型 blob 条目中,
  经 `PyMarshal_ReadObjectFromString` 加载, 由 `PyEval_EvalFrameDefault` 执行。

## 构建 / Build

```bash
# NewtkaReverter.exe (需要 zstd 开发包, 见 zstd_extracted/)
clang++ -std=c++17 -O2 -D_CRT_SECURE_NO_WARNINGS \
    -I zstd_extracted/zstd-v1.5.7-win64/include \
    main.cpp zstd_extracted/zstd-v1.5.7-win64/dll/libzstd.dll.a \
    -o NewtkaReverter.exe
# 运行时需 libzstd.dll 在同目录 (已附带)

# viewer/app.exe
cd viewer && python -m nuitka --standalone --onefile app.py
```

## 测试样本 / Test sample

`test.py` = `print("Hello world!",end="!\n");print(input("test"))` 的双行程序,
`test.exe` 为其 Nuitka onefile 产物; `example/` 为一次完整流程的输出示例
(来自更大型的样本 main.dll)。

## 文件清单 / Files

```
NewtkaReverter.exe     解包工具 (zstd + 归档提取)
main.cpp               解包工具源码
ida_find_main.py       IDA 脚本 (blob 解析/函数定位/伪代码导出)
viewer/                GUI 查看器 (app.py + core.py, 可打包为 app.exe)
libzstd.dll            zstd 运行库
test.py / test.exe     最小测试样本
example/               完整输出示例
zstd_extracted/        zstd v1.5.7 开发包 (头文件 + 库)
```
