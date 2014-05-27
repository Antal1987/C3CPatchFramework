#pragma once
#include "Common.h"

struct class_Unit_Body;

#pragma pack(push, 1)
struct class_Unit
{
  struct_Unit_vtable *vtable;
  int field_4;
  char str_UNIT[4];
  int field_C[4];
  class_Unit_Body Body;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct class_Unit_Body
{
  int vtable;
  int ID;
  int X;
  int Y;
  int PrevMoveX;
  int PrevMoveY;
  int CivID;
  int RaceID;
  int field_20;
  int UnitTypeID;
  int Combat_Experience;
  int Status;
  int Damage;
  int Moves;
  int Job_Value;
  int Job_ID;
  __int16 Active;
  __int16 field_42;
  int Container_Unit;
  int UnitState;
  int field_4C[3];
  struct_String64 Custom_Name;
  int field_98[69];
  int Auto_CityID;
  int field_1B0[10];
  int field_1D8;
  class_IDLS IDLS;
  int field_210[12];
  tagRECT Rect;
  int field_250[4];
  int Animation[98];
};
#pragma pack(pop)

