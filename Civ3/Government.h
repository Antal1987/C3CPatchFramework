#pragma once
#include "Base.h"

/*   12 */
#pragma pack(push, 1)
struct struct_RulerTitle
{
  char Male[32];
  char Female[32];
};
#pragma pack(pop)

/*   11 */
#pragma pack(push, 1)
struct class_Government
{
  int vtable;
  int field_4;
  int field_8;
  int b_Default_Type;
  int b_Transition_Type;
  int b_Requires_Maintenance;
  int b_Flag1;
  int b_Standard_Tile_Penalty;
  int b_Standard_Trade_Bonus;
  int b_Xenophobic;
  int b_Force_Resettlement;
  struct_String64 Name;
  char Civilipedia_Entry[32];
  struct_RulerTitle RulerTitles[4];
  int CurruptionAndWaste;
  int ImmuneTo;
  int Diplomats_Experience;
  int Spies_Experience;
  void *PropagandaData;
  int HurryProduction;
  int AssimilationChange;
  int DratfLimit;
  int Military_Police_Limit;
  int field_1B0;
  int Ruler_Titles_Count;
  int RequireID;
  int RateCap;
  int WorkRate;
  int field_1C4;
  int field_1C8;
  int field_1CC;
  int All_Units_Free;
  int City_Class_Free_Units[3];
  int Unit_Support_Cost;
  int Last;
};
#pragma pack(pop)