#pragma once
#include "Base.h"

/*  138 */
#pragma pack(push, 1)
struct struct_Tile_Type_Flags
{
  char Allow_Cities;
  char Allow_Colonies;
  char Impassable;
  char Impassable_By_Wheeled_Units;
  char Allow_Airfields;
  char Allow_Forts;
  char Allow_Outposts;
  char Allow_Radar_Towers;
};
#pragma pack(pop)

/*   68 */
#pragma pack(push, 1)
struct struct_Tile_Type
{
  int V0;
  int field_4;
  int Ptr1;
  struct_String32 Name;
  struct_String32 Civilopedia_Entry;
  int IrrigationBonus;
  int MiningBonus;
  int RoadsBonus;
  int DefenceBonus;
  int MoveCost;
  int field_60;
  int FoodBase;
  int ProductionBase;
  int TradeBase;
  int WorkerJobID;
  int PollutionsEffect;
  struct_Tile_Type_Flags Flags;
  int field_80;
  int field_84;
  int LM_FoodBase;
  int LM_ProductionBase;
  int LM_TradeBase;
  int LM_IrrigationBonus;
  int LM_MiningBonus;
  int LM_Roads_Bonus;
  int LM_MoveCost;
  int LM_DefenceBonus;
  struct_String32 LM_Name;
  struct_String32 LM_Entry;
  int field_E8;
  int field_EC;
};
#pragma pack(pop)