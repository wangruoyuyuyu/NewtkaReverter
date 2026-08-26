// sub_180001000 @ 0x180001000 (pseudocode)

void __fastcall sub_180001000(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int (__fastcall *v4)(__int64); // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !qword_1826A4B48 )
  {
    qword_1826A4B48 = PyCapsule_New(27, "sentinel", 0);
    v2 = qword_1826A4B48;
    v3 = *(_QWORD *)(qword_1826A4B48 + 8);
    if ( (*(_DWORD *)(v3 + 168) & 0x4000) != 0 )
    {
      v4 = *(unsigned int (__fastcall **)(__int64))(v3 + 328);
      if ( !v4 || v4(qword_1826A4B48) )
      {
        v5 = *(_QWORD *)(v2 - 16);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v2 - 8);
          *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL) ^= (v5
                                                    ^ *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL))
                                                   & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCuLL) + 8) ^= (*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCuLL) + 8)
                                                          ^ v6)
                                                         & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)(v2 - 8) &= 1uLL;
          *(_QWORD *)(v2 - 16) = 0;
        }
      }
    }
    *(_DWORD *)v2 = -1073741824;
    *(_WORD *)(v2 + 6) = 1;
    qword_1826A4B40 = PySys_GetObject("version_info");
    sub_1817C4800(a1, &qword_1826A4B60, &unk_18264CB96);
    v7 = sub_1817C3780(qword_1826A4ED0);
    PySys_SetObject("executable", v7);
    PyStructSequence_InitType(&unk_1826A4EE0, off_182694100);
    qword_1826A4B50 = PyStructSequence_New(&unk_1826A4EE0);
    v8 = sub_1817A8E20(4);
    PyStructSequence_SetItem(qword_1826A4B50, 0, v8);
    v9 = sub_1817A8E20(1);
    PyStructSequence_SetItem(qword_1826A4B50, 1, v9);
    v10 = sub_1817A8E20(3);
    PyStructSequence_SetItem(qword_1826A4B50, 2, v10);
    v11 = PyUnicode_FromString("release");
    PyStructSequence_SetItem(qword_1826A4B50, 3, v11);
    v12 = sub_1817C2F60(0);
    PyStructSequence_SetItem(qword_1826A4B50, 4, v12);
    PyStructSequence_SetItem(qword_1826A4B50, 5, Py_TrueStruct);
    PyStructSequence_SetItem(qword_1826A4B50, 6, Py_TrueStruct);
    PyStructSequence_SetItem(qword_1826A4B50, 7, Py_FalseStruct);
    PyStructSequence_SetItem(qword_1826A4B50, 8, Py_FalseStruct);
    PyStructSequence_SetItem(qword_1826A4B50, 9, Py_FalseStruct);
    PyStructSequence_SetItem(qword_1826A4B50, 10, Py_FalseStruct);
    PyStructSequence_SetItem(qword_1826A4B50, 11, Py_FalseStruct);
    v13 = PyUnicode_FromString("__main__");
    PyStructSequence_SetItem(qword_1826A4B50, 12, v13);
    v14 = sub_1817C8F30();
    PyStructSequence_SetItem(qword_1826A4B50, 13, v14);
    PyStructSequence_SetItem(qword_1826A4B50, 14, Py_NoneStruct);
    qword_1826A5008 = 0;
    qword_1826A5018 = 0;
    sub_1817C7A60(a1, qword_1826A4B60);
  }
}

