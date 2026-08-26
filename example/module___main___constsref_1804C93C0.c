// sub_1804C93C0 @ 0x1804C93C0 (pseudocode)

__int64 __fastcall sub_1804C93C0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64); // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  int *v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int *v19; // rax
  int *v20; // rbx
  __int64 v21; // rsi
  int v22; // ecx
  char v23; // bl
  int v24; // ecx
  bool v25; // zf
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // [rsp+78h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = *a2;
  v46 = 0;
  v5 = sub_1800045B0(a1, v3);
  if ( v5 )
  {
    v8 = 0;
    v9 = sub_1817A4AA0(a1, 0);
    while ( 1 )
    {
      v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 224LL);
      if ( !v10 )
        break;
      v11 = v10(v5);
      v12 = v11;
      if ( !v11 )
        goto LABEL_40;
      v13 = v8;
      v14 = (int *)v8;
      v15 = v8;
      v8 = v11;
      if ( v13 )
      {
        if ( *v14 >= 0 )
        {
          v16 = *v14 - 1;
          *v14 = v16;
          if ( !v16 )
            (*(void (**)(void))(*(_QWORD *)(v15 + 8) + 48LL))();
        }
      }
      v17 = v12;
      if ( *(int *)(*(_QWORD *)(v12 + 8) + 168LL) < 0 )
        goto LABEL_23;
      v18 = sub_1817A0EF0(a1, v12, qword_1826CB270);
      if ( v18 == -1 )
        goto LABEL_51;
      v17 = v12;
      if ( v18 )
      {
        v19 = (int *)sub_1817A3670(a1, v12, qword_1826CB270);
        v20 = v19;
        if ( !v19 )
          goto LABEL_51;
        if ( !v2 )
        {
          v28 = *v19;
          if ( v28 >= 0 )
          {
            v29 = v28 - 1;
            *v20 = v29;
            if ( !v29 )
              (*(void (__fastcall **)(int *))(*((_QWORD *)v20 + 1) + 48LL))(v20);
          }
          sub_1817A0840(a1, &v46, qword_1826CB278);
          sub_180003BE0(a1, v46);
          v6 = v46;
          goto LABEL_52;
        }
        v21 = sub_18179C5C0(a1, v19, v2);
        if ( *v20 >= 0 )
        {
          v22 = *v20 - 1;
          *v20 = v22;
          if ( !v22 )
            (*(void (__fastcall **)(int *))(*((_QWORD *)v20 + 1) + 48LL))(v20);
        }
        if ( !v21 )
          goto LABEL_51;
        v23 = sub_1817A2FD0(a1, v9, v21);
        if ( *(int *)v21 >= 0 )
        {
          v24 = *(_DWORD *)v21 - 1;
          *(_DWORD *)v21 = v24;
          if ( !v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v21 + 8) + 48LL))(v21);
        }
        v25 = v23 == 0;
      }
      else
      {
LABEL_23:
        v25 = (unsigned __int8)sub_1817A2D00(v9, v17, v15) == 0;
      }
      if ( v25 || (a1[3] & 6) != 0 && (int)Py_MakePendingCalls() < 0 && a1[14] )
        goto LABEL_51;
      if ( (a1[3] & 1) != 0 )
      {
        PyEval_SaveThread();
        PyEval_AcquireThread(a1);
      }
      if ( a1[18] )
      {
        v26 = a1[14];
        a1[18] = 0;
        a1[14] = sub_1817A5780(a1);
        if ( v26 )
        {
          if ( *(int *)v26 >= 0 )
          {
            v27 = *(_DWORD *)v26 - 1;
            *(_DWORD *)v26 = v27;
            if ( !v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v26 + 8) + 48LL))(v26);
          }
        }
        goto LABEL_51;
      }
    }
    sub_1817B0800("'%s' object is not an iterator", (const char *)v5);
LABEL_40:
    v30 = a1[14];
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 8);
      v32 = PyExc_StopIteration;
      if ( (*(_DWORD *)(v31 + 168) & 0x40000000) == 0 )
        v31 = a1[14];
      if ( v31 != PyExc_StopIteration
        && (*(int *)(*(_QWORD *)(v31 + 8) + 168LL) >= 0
         || (*(_DWORD *)(v31 + 168) & 0x40000000) == 0
         || (unsigned __int8)sub_1817A98C0(v31, PyExc_StopIteration) != 1) )
      {
LABEL_51:
        v6 = a1[14];
        a1[14] = 0;
LABEL_52:
        v7 = a1 + 14;
        v46 = 0;
        if ( v9 )
        {
          if ( *(int *)v9 >= 0 )
          {
            v35 = *(_DWORD *)v9 - 1;
            *(_DWORD *)v9 = v35;
            if ( !v35 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 48LL))(v9);
          }
        }
        if ( *(int *)v5 >= 0 )
        {
          v36 = *(_DWORD *)v5 - 1;
          *(_DWORD *)v5 = v36;
          if ( !v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 48LL))(v5);
        }
        if ( v8 )
        {
          if ( *(int *)v8 >= 0 )
          {
            v37 = *(_DWORD *)v8 - 1;
            *(_DWORD *)v8 = v37;
            if ( !v37 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 48LL))(v8);
          }
        }
        goto LABEL_63;
      }
      a1[14] = 0;
      if ( *(int *)v30 >= 0 )
      {
        v33 = *(_DWORD *)v30 - 1;
        *(_DWORD *)v30 = v33;
        if ( !v33 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v30 + 8) + 48LL))(v30, v32);
      }
    }
    v34 = PySequence_Tuple(v9);
    if ( !v34 )
      goto LABEL_51;
    if ( *(int *)v9 >= 0 )
    {
      v42 = *(_DWORD *)v9 - 1;
      *(_DWORD *)v9 = v42;
      if ( !v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 48LL))(v9);
    }
    if ( *(int *)v5 >= 0 )
    {
      v43 = *(_DWORD *)v5 - 1;
      *(_DWORD *)v5 = v43;
      if ( !v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 48LL))(v5);
    }
    if ( v8 )
    {
      if ( *(int *)v8 >= 0 )
      {
        v44 = *(_DWORD *)v8 - 1;
        *(_DWORD *)v8 = v44;
        if ( !v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 48LL))(v8);
      }
    }
    if ( *(int *)v2 >= 0 )
    {
      v45 = *(_DWORD *)v2 - 1;
      *(_DWORD *)v2 = v45;
      if ( !v45 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 48LL))(v2);
    }
    return v34;
  }
  else
  {
    v6 = a1[14];
    v7 = a1 + 14;
    *v7 = 0;
LABEL_63:
    v46 = v6;
    if ( *(int *)v2 >= 0 )
    {
      v38 = *(_DWORD *)v2 - 1;
      *(_DWORD *)v2 = v38;
      if ( !v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 48LL))(v2);
      v6 = v46;
    }
    v39 = *v7;
    *v7 = v6;
    if ( v39 && *(int *)v39 >= 0 )
    {
      v40 = *(_DWORD *)v39 - 1;
      *(_DWORD *)v39 = v40;
      if ( !v40 )
        (*(void (**)(void))(*(_QWORD *)(v39 + 8) + 48LL))();
    }
    return 0;
  }
}

