#pragma once

struct class_Base_vtable;

#pragma pack(push, 1)
struct class_Base
{
  class_Base_vtable *vtable;
  int field_4;
  int ClassName;
  int DataLength;
  int field_10;
  void *pStart;
  void *pEnd;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct class_Base_vtable
{
  int m00;
  int m01;
  int (__thiscall *m02_Save_Data)(class_Base *, void *);
  int (__thiscall *m03_Read_Data)(class_Base *, void *);
};
#pragma pack(pop)