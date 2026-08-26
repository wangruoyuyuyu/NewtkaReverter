// sub_1817C8690 @ 0x1817C8690 (pseudocode)

// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn sub_1817C8690(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  const WCHAR *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  char *v10; // rdi
  size_t v11; // rbx
  const wchar_t *v12; // rax
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int32 v15; // ebx
  __int128 v16; // xmm6
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 AttrString; // r14
  __int64 v29; // rbx
  __int64 v30; // rax
  int *v31; // rdi
  __int64 v32; // rax
  int *v33; // rbx
  int v34; // ecx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rdi
  __int64 Object; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned int v45; // eax
  const char *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rax
  unsigned int v59; // eax
  _BYTE v60[32]; // [rsp+30h] [rbp-D0h] BYREF
  __m256i v61; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v62[16]; // [rsp+70h] [rbp-90h] BYREF
  int v63; // [rsp+80h] [rbp-80h]
  int v64; // [rsp+178h] [rbp+78h]
  _BYTE v65[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v66[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v67; // [rsp+1B8h] [rbp+B8h]
  _BYTE v68[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v69[16]; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE v70[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  _BYTE v71[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v72[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v73[64]; // [rsp+200h] [rbp+100h] BYREF
  __m256i v74; // [rsp+240h] [rbp+140h] BYREF

  signal(11, Function);
  qword_18277F910 = sub_1817C3130("PATH");
  sub_1817C7E70("PATH", "/");
  v4 = sub_1817C3130("PYTHONHOME");
  LOBYTE(v5) = 1;
  qword_18277F918 = v4;
  v6 = sub_1817C2DE0(v5);
  sub_1817C7E70("PYTHONHOME", v6);
  v7 = (const WCHAR *)sub_1817C2FE0();
  SetDllDirectoryW(v7);
  v8 = (_QWORD *)PyImport_FrozenModules;
  if ( PyImport_FrozenModules )
  {
    if ( *PyImport_FrozenModules )
    {
      do
        v8 += 3;
      while ( *v8 );
    }
    v9 = ((__int64)v8 - PyImport_FrozenModules) / 24;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  v10 = (char *)malloc(24LL * ((int)v9 + 154));
  v11 = 24LL * (int)v9;
  memcpy(v10, PyImport_FrozenModules, v11);
  sub_180003A80(&v10[v11]);
  PyImport_FrozenModules = v10;
  qword_18277F908 = PyImport_FrozenModules;
  Py_DebugFlag = 0;
  Py_InspectFlag = 0;
  Py_InteractiveFlag = 0;
  Py_OptimizeFlag = 0;
  Py_DontWriteBytecodeFlag = 0;
  Py_NoUserSiteDirectory = 1;
  Py_IgnoreEnvironmentFlag = 0;
  Py_VerboseFlag = 0;
  Py_BytesWarningFlag = 0;
  Py_UTF8Mode = 0;
  Py_FrozenFlag = 1;
  Py_NoSiteFlag = 1;
  v12 = (const wchar_t *)sub_1817C3130("NUITKA_ORIGINAL_ARGV0");
  if ( v12 )
  {
    qword_18277F930 = (__int64)wcsdup(v12);
    sub_1817C81A0("NUITKA_ORIGINAL_ARGV0");
  }
  qword_18277F930 = *a2;
  qword_18277F8F8 = (__int64)a2;
  Py_SetProgramName();
  dword_18277F900 = a1;
  sub_1817C9150(a1, a2);
  sub_1817C47A0();
  PyConfig_InitCompatConfig(v62);
  v13 = PyConfig_SetArgv(v60, v62, dword_18277F900, qword_18277F8F8);
  v14 = *(_OWORD *)(v13 + 4);
  v15 = *(_DWORD *)v13;
  v16 = *(_OWORD *)(v13 + 16);
  v74.m256i_i32[0] = *(_DWORD *)v13;
  *(_OWORD *)((char *)v61.m256i_i64 + 4) = v14;
  *(_OWORD *)((char *)v74.m256i_i64 + 4) = v14;
  *(_OWORD *)&v61.m256i_u64[2] = v16;
  *(_OWORD *)&v74.m256i_u64[2] = v16;
  if ( (unsigned int)PyStatus_Exception(&v74) )
  {
    v74.m256i_i32[0] = v15;
    *(_OWORD *)((char *)v74.m256i_i64 + 4) = *(_OWORD *)((char *)v61.m256i_i64 + 4);
    *(_OWORD *)&v74.m256i_u64[2] = v16;
    Py_ExitStatusException(&v74);
    __debugbreak();
  }
  LOBYTE(v17) = 1;
  v18 = sub_1817C2DE0(v17);
  PyConfig_SetString(v60, v62, v69, *(_QWORD *)qword_18277F8F8);
  PyConfig_SetString(v60, v62, v70, v18);
  PyConfig_SetString(v60, v62, v72, v18);
  PyConfig_SetString(v60, v62, v71, v18);
  PyConfig_SetString(v60, v62, v73, v18);
  PyConfig_SetString(v60, v62, v65, v18);
  PyConfig_SetString(v60, v62, v66, v18);
  PyWideStringList_Append(v60, v68, v18);
  v67 = 1;
  v64 = 0;
  v63 = 1;
  v19 = Py_InitializeFromConfig(v60, v62);
  if ( *(_DWORD *)v19 )
  {
    v20 = *(_OWORD *)(v19 + 4);
    v74.m256i_i32[0] = *(_DWORD *)v19;
    v21 = *(_OWORD *)(v19 + 16);
    *(_OWORD *)((char *)v74.m256i_i64 + 4) = v20;
    *(_OWORD *)&v74.m256i_u64[2] = v21;
    Py_ExitStatusException(&v74);
    __debugbreak();
  }
  v22 = PyThreadState_Get();
  Py_NoSiteFlag = 1;
  PySys_SetArgv(a1, qword_18277F8F8);
  sub_1817BE520(v22);
  sub_180001000(v22);
  sub_1804931C0(v22);
  sub_1817BE920();
  sub_1817BEE80();
  sub_1817BEF80();
  sub_1817BEF30();
  sub_1817BF2A0();
  sub_1817BEED0();
  sub_1817BF6A0();
  sub_1817BF790();
  sub_1817C6E90();
  sub_1817C6E70();
  v23 = PyUnicode_FromString("NUL:");
  if ( *(int *)v23 >= 0 )
  {
    v24 = *(_DWORD *)v23 - 1;
    *(_DWORD *)v23 = v24;
    if ( !v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v23 + 8) + 48LL))(v23);
  }
  sub_1817C32A0();
  sub_1817C7AE0(v22);
  PyImport_FrozenModules = qword_18277F908;
  sub_180003B10(v22);
  sub_1817C6C20(v22);
  sub_1817C8030(v22, "PATH", qword_18277F910);
  sub_1817C8030(v22, "PYTHONHOME", qword_18277F918);
  if ( byte_18277F904 )
  {
    sub_1817C83D0(v22, "__parents_main__", 0);
    v26 = sub_1817C84A0(v22);
    Py_Exit(v26);
    __debugbreak();
  }
  if ( byte_18277F905 )
  {
    LOBYTE(v25) = 1;
    v27 = sub_1817C83D0(v22, "multiprocessing.forkserver", v25);
    AttrString = PyObject_GetAttrString(v27, "main");
    v29 = sub_1817A4AA0(v22, 1);
    v30 = PyUnicode_FromString("__main__");
    sub_180947130(v29, 0, v30);
    v74.m256i_i64[0] = sub_1817A8E20((unsigned int)dword_1826A4A88);
    v74.m256i_i64[1] = sub_1817A8E20((unsigned int)dword_1826A4A8C);
    v74.m256i_i64[2] = v29;
    if ( dword_1826A4A90 == -1 )
    {
      sub_181794590(v22, AttrString, &v74);
    }
    else
    {
      v31 = (int *)sub_1817A4CD0(v22, 1);
      v32 = PyUnicode_FromString("authkey_r");
      sub_180947140(v31, 0, v32);
      v61.m256i_i64[0] = sub_1817A8E20((unsigned int)dword_1826A4A90);
      v33 = (int *)sub_181794F60(v22, AttrString, (unsigned int)&v74, (unsigned int)&v61, (__int64)v31);
      if ( *v31 >= 0 )
      {
        v34 = *v31 - 1;
        *v31 = v34;
        if ( !v34 )
        {
          v35 = sub_180947180(v31);
          (*(void (**)(void))(v35 + 48))();
        }
      }
      if ( v33 && *v33 >= 0 )
      {
        v36 = *v33 - 1;
        *v33 = v36;
        if ( !v36 )
        {
          v37 = sub_180947180(v33);
          (*(void (**)(void))(v37 + 48))();
        }
      }
    }
    v38 = sub_1817C84A0(v22);
    Py_Exit(v38);
    __debugbreak();
  }
  if ( byte_18277F906 )
  {
    LOBYTE(v25) = 1;
    v39 = sub_1817C83D0(v22, "joblib.externals.loky.backend.popen_loky_win32", v25);
    Object = PySys_GetObject("argv");
    v41 = PyList_Size(Object);
    PyList_SetSlice(Object, 1, v41 - 2, qword_1826A4B60);
    v42 = PyObject_GetAttrString(v39, "main");
    v43 = v42;
    if ( dword_18277F928 )
    {
      v74.m256i_i64[0] = (__int64)"pipe_handle";
      v74.m256i_i64[1] = (__int64)"parent_pid";
      v61.m256i_i64[0] = sub_1817A8E20((unsigned int)dword_18277F928);
      v61.m256i_i64[1] = sub_1817A8E20((unsigned int)dword_18277F92C);
      v44 = sub_1817A3B10(&v74, &v61, 2);
      sub_1817C8290(v22, v43, v44);
    }
    else
    {
      sub_1817928F0(v22, v42);
    }
    v45 = sub_1817C84A0(v22);
    Py_Exit(v45);
    __debugbreak();
  }
  if ( dword_1826A4A94 != -1 )
  {
    v46 = "multiprocessing.resource_tracker";
    LOBYTE(v25) = 1;
    if ( qword_18277F920 )
      v46 = (const char *)qword_18277F920;
    v47 = sub_1817C83D0(v22, v46, v25);
    v48 = PyObject_GetAttrString(v47, "main");
    v49 = sub_1817A8E20((unsigned int)dword_1826A4A94);
    sub_18179C5C0(v22, v48, v49);
    v50 = sub_1817C84A0(v22);
    Py_Exit(v50);
    __debugbreak();
  }
  if ( dword_1826A4A98 != -1 )
  {
    LOBYTE(v25) = 1;
    v51 = sub_1817C83D0(v22, "joblib.externals.loky.backend.resource_tracker", v25);
    v52 = PyObject_GetAttrString(v51, "main");
    v53 = sub_1817A8E20((unsigned int)dword_1826A4A98);
    sub_18179C5C0(v22, v52, v53);
    v54 = sub_1817C84A0(v22);
    Py_Exit(v54);
    __debugbreak();
  }
  if ( byte_18277F907 )
  {
    v55 = sub_1817C83D0(v22, "anyio.to_process", 0);
    v56 = PyObject_GetAttrString(v55, "process_worker");
    sub_1817928F0(v22, v56);
    v57 = sub_1817C84A0(v22);
    Py_Exit(v57);
    __debugbreak();
  }
  v58 = sub_1817C8670();
  PyDict_DelItemString(v58, "__main__");
  sub_1817C8390(v22);
  sub_1817C83D0(v22, "__main__", 0);
  v59 = sub_1817C84A0(v22);
  Py_Exit(v59);
  JUMPOUT(0x1817C8F02LL);
}

