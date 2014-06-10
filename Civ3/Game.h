#pragma once
#include "Base.h"
#include "Date.h"
#include "Default_Game_Settings.h"
#include "Tile_Units.h"
#include "Base_List.h"
#include "Tile_Objects.h"
#include "Unit.h"
#include "City.h"

#pragma pack(push, 1)
struct class_Game
{
  class_Base Base;
  int field_1C[3];
  int RenderFlags;
  int Difficulty_Level;
  int field_30;
  int Units_Count;
  int Cities_Count;
  int field_3C;
  int field_40;
  int Global_Warming_Level;
  int field_48;
  int field_4C;
  int field_50;
  int Current_Turn;
  int field_58;
  int Random;
  int field_60;
  int Civ_Flags_2;
  int Civ_Flags_1;
  int field_6C;
  int field_70;
  int field_74;
  int field_78;
  int field_7C;
  int field_80;
  int field_84[48];
  int Value1;
  int field_148[72];
  int Game_Limit_Points;
  int Game_Limit_Turns;
  int field_270[50];
  int field_338;
  int field_33C;
  int Game_Limit_Destroyed_Cities;
  int Game_Limit_City_Culture;
  int Game_Limit_Civ_Culture;
  int Game_Limit_Population;
  int Game_Limit_Territory;
  int Game_Limit_Wonders;
  int Game_Limit_Destroyed_Units;
  int Game_Limit_Advances;
  int Game_Limit_Captured_Cities;
  int Game_Limit_Victory_Point_Price;
  int Game_Limit_Princess_Price;
  int Game_Limit_Princess_Ransom;
  int Default_Date_1;
  int field_374[27];
  int PLGI[10];
  class_Date Date_2;
  class_Date Date_3;
  int Game_Aggression;
  int field_4EC;
  int City_Stat_Int_Array_1;
  int ResearchedAdvances;
  int Wonders;
  int Wonder_Flags;
  int Improvement_Types_Data_1;
  int Improvement_Types_Data_2;
  int Unit_Types_Data_1;
  int Unit_Types_Data_2;
  int field_510;
  int field_514;
  struct_Default_Game_Settings Default_Settings;
  class_TileUnits Tile_Units;
  class_Base_List Tile_Victory_Points;
  class_Base_List Tile_Outposts;
  class_Base_List Tile_Radar_Towers;
  class_Base_List Tile_Airfields;
  class_Base_List Tile_Colonies;
  class_Base_List Cities;
  class_Base_List Units;

  class_Airfield * Get_Airfield(int ID)
  {
	  return (class_Airfield *)(this->Tile_Airfields.Get_Item(ID));
  }
  class_Outpost * Get_Outpost(int ID)
  {
	  return (class_Outpost *)(this->Tile_Outposts.Get_Item(ID));
  }
  class_Radar_Tower * Get_Radar_Tower(int ID)
  {
	  return (class_Radar_Tower *)(this->Tile_Radar_Towers.Get_Item(ID));
  }
  class_Colony * Get_Colony(int ID)
  {
	  return (class_Colony *)(this->Tile_Colonies.Get_Item(ID));
  }
  class_Victory_Point * Get_Victory_Point(int ID)
  {
	  return (class_Victory_Point *)(this->Tile_Victory_Points.Get_Item(ID));
  }
  class_Unit * Get_Unit(int ID)
  {
	  return (class_Unit *)(this->Units.Get_Item(ID));
  }
  class_City * Get_City(int ID)
  {
	  return (class_City *)(this->Cities.Get_Item(ID));
  }
};
#pragma pack(pop)
