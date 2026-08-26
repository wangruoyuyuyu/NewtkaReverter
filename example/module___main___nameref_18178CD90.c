// sub_18178CD90 @ 0x18178CD90 (pseudocode)

__int64 *__fastcall sub_18178CD90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // rcx
  const char **v8; // rax
  __int64 v9; // rbx
  const char *v10; // r12
  int v11; // eax
  const char *v12; // rdi
  size_t v13; // rsi
  const char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int (*v20)(void); // r8
  __int64 v21; // rax
  __int64 (**v22)(void); // rdx
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  if ( !(unsigned int)PyArg_ParseTupleAndKeywords(a2, a3, "O:iter_modules", &off_1826A45B8, &v29) )
    return 0;
  v30 = PyThreadState_Get();
  v5 = *(_QWORD *)(v30 + 16);
  v6 = *(__int64 **)(v5 + 11264);
  if ( v6 )
  {
    v7 = *v6;
    --*(_QWORD *)(v5 + 11272);
    *(_QWORD *)(v5 + 11264) = v7;
    *v6 = 1;
    *(_DWORD *)v6 = 1;
  }
  else
  {
    v6 = (__int64 *)sub_1817A74A0(PyList_Type);
  }
  v6[3] = 0;
  v6[2] = 0;
  v6[4] = 0;
  sub_180004850(v6);
  v8 = *(const char ***)(a1 + 16);
  v9 = qword_18277F860;
  if ( v8 )
    v10 = *v8;
  else
    v10 = (const char *)&unk_18264CB96;
  if ( *(_QWORD *)qword_18277F860 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 24);
      if ( (v11 & 0x10) != 0 )
        *(_DWORD *)(v9 + 24) = v11 - 16;
      v12 = *(const char **)v9;
      v13 = strlen(v10);
      if ( strncmp(v10, *(const char **)v9, (unsigned int)v13)
        || !strcmp(v12, "__main__")
        || v12[v13] != 46
        || strchr(&v12[v13 + 1], 46) )
      {
        goto LABEL_39;
      }
      if ( *(_QWORD *)(a1 + 16) )
        v14 = (const char *)(*(_QWORD *)v9 + strlen(v10) + 1);
      else
        v14 = *(const char **)v9;
      v15 = PyUnicode_FromString(v14);
      v16 = v29;
      v17 = v15;
      if ( v29 == Py_TrueStruct )
        goto LABEL_32;
      if ( v29 != Py_FalseStruct && v29 != Py_NoneStruct[0] )
      {
        v18 = *(_QWORD **)(v29 + 8);
        v19 = v18[12];
        if ( v19 && (v20 = *(int (**)(void))(v19 + 72)) != 0 )
        {
          v21 = v20();
        }
        else
        {
          v22 = (__int64 (**)(void))v18[14];
          if ( !v22 || !*v22 )
          {
            v22 = (__int64 (**)(void))v18[13];
            if ( !v22 || !*v22 )
              goto LABEL_32;
          }
          v21 = (*v22)();
        }
        if ( v21 )
          break;
      }
LABEL_35:
      v25 = sub_1817A4CD0(v30, 2);
      v26 = v25;
      *(_QWORD *)(v25 + 32) = v17;
      v27 = Py_FalseStruct;
      if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
        v27 = Py_TrueStruct;
      *(_QWORD *)(v25 + 40) = v27;
      v28 = v6[2];
      if ( (unsigned __int8)sub_1817A3580(v6, v28 + 1) )
        *(_QWORD *)(v6[3] + 8 * v28) = v26;
LABEL_39:
      v9 += 32;
      if ( !*(_QWORD *)v9 )
        return v6;
    }
    v16 = v29;
LABEL_32:
    v23 = v17;
    v17 = PyUnicode_Concat(v16, v17);
    if ( *(int *)v23 >= 0 )
    {
      v24 = *(_DWORD *)v23 - 1;
      *(_DWORD *)v23 = v24;
      if ( !v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v23 + 8) + 48LL))(v23);
    }
    goto LABEL_35;
  }
  return v6;
}

