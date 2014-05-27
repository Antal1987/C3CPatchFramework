#pragma once

struct struct_Hash_Table_vtable;
struct struct_Hash_Table_Item;

#pragma pack(push, 1)
struct class_Hash_Table
{
  struct_Hash_Table_vtable *vtable;
  struct_Hash_Table_Item *Items;
  int Key_Count;
  int Capacity;
  int Hash_Bits;
};
#pragma pack(pop)

/*  232 */
#pragma pack(push, 1)
struct struct_Hash_Table_vtable
{
  int m00;
  int m01_Init_Items;
  int m02_Enlarge_Items;
  int m03;
  int m04_Is_Capacity_Low;
  int m05;
  int (__thiscall *m06_Get_Key_Index)(class_Hash_Table *, int);
};
#pragma pack(pop)

/*  233 */
#pragma pack(push, 1)
struct struct_Hash_Table_Item
{
  int Key;
  int Value;
};
#pragma pack(pop)
