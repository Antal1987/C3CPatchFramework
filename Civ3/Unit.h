#pragma once
#include "Base.h"

/*  273 */
#pragma pack(push, 1)
struct class_IDLS
{
  class_Base Base;
  int field_1C;
  int field_20;
  int field_24;
  int field_28;
  int field_2C;
  int field_30;
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

#pragma pack(push, 1)
struct class_Unit
{
  class_Base Base;
  class_Unit_Body Body;
};
#pragma pack(pop)

enum UnitTypeAIValues
{
  UTAIV_Offence = 0x0,
  UTAIV_Defence = 0x1,
  UTAIV_Artillery = 0x2,
  UTAIV_Explore = 0x3,
  UTAIV_Army = 0x4,
  UTAIV_Cruise_Missile = 0x5,
  UTAIV_Air_Bombard = 0x6,
  UTAIV_Air_Defence = 0x7,
  UTAIV_Naval_Power = 0x8,
  UTAIV_Air_Transport = 0x9,
  UTAIV_Naval_Transport = 0xA,
  UTAIV_Naval_Carrier = 0xB,
  UTAIV_Terraform = 0xC,
  UTAIV_Settle = 0xD,
  UTAIV_Leader = 0xE,
  UTAIV_Tactical_Nuke = 0xF,
  UTAIV_ICBM = 0x10,
  UTAIV_Naval_Missile_Transport = 0x11,
  UTAIV_Flag_Unit = 0x12,
  UTAIV_King = 0x13,
};
