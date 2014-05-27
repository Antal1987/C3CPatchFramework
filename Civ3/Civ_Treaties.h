#pragma once

struct class_Civ_Treaty;

#pragma pack(push, 1)
struct class_Civ_Treaties
{
  int vtable;
  int Count;
  class_Civ_Treaty *First;
  class_Civ_Treaty *Last;
};
#pragma pack(pop)

/*  289 */
#pragma pack(push, 1)
struct class_Civ_Treaty
{
  int vtable;
  int field_4;
  int field_8;
  int field_C;
  class_Civ_Treaty *Next;
  class_Civ_Treaty *Prev;
};
#pragma pack(pop)