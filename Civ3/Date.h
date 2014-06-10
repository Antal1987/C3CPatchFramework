#pragma once
#include "Base.h"

/*  104 */
#pragma pack(push, 1)
struct class_Date
{
  class_Base Base;
  struct_String16 Text;
  int field_2D[12];
  int BaseTimeUnit;
  int Month;
  int Week;
  int Year;
  int field_6C;
};
#pragma pack(pop)