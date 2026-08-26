// sub_1804931C0 @ 0x1804931C0 (pseudocode)

__int64 __fastcall sub_1804931C0(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1826CB268 )
  {
    result = sub_1817C4800(a1, &qword_1826CB270, "__main__");
    byte_1826CB268 = 1;
  }
  return result;
}

