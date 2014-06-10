#pragma once
#include "Base.h"

/*   30 */
#pragma pack(push, 1)
struct class_Advance
{
  int field_0;
  char Name[32];
  char Civilopedia_Entry[32];
  int Cost;
  int Era;
  int Civ_Entry_Index;
  int X;
  int Y;
  int Reqs[4];
  int Flags;
  int Flavours;
  int field_70;
};
#pragma pack(pop)