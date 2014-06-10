#pragma once
#include "Base.h"

/*  103 */
#pragma pack(push, 1)
struct struct_Buildings_Info_Item
{
  int Year;
  int CivID;
  int Culture;
};
#pragma pack(pop)

/*   47 */
#pragma pack(push, 1)
struct class_Buildings_Info
{
  class_Base Base;
  struct_Buildings_Info_Item *Items;
  int Count;
  int field_24;
  int field_28;
  int field_2C;
  int field_30;
};
#pragma pack(pop)