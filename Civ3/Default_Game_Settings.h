#pragma once

/*  218 */
#pragma pack(push, 1)
struct struct_Default_Game_Limits
{
  int Turns_Limit;
  int Points_Limit;
  int Destroyed_Cities_Limit;
  int City_Culture_Limit;
  int Civ_Culture_Limit;
  int Population_Limit;
  int Territory_Limit;
  int Wonders_Limit;
  int Destroyed_Units_Limit;
  int Advances_Limit;
  int Captured_Cities_Limit;
  int Victory_Point_Price;
  int Princess_Price;
  int Princess_Ransom;
};
#pragma pack(pop)

/*  242 */
#pragma pack(push, 1)
struct struct_Default_Game_Settings
{
  int Top_Menu;
  int Preferences;
  int Difficulty;
  int Rules;
  int Factions[31];
  struct_Default_Game_Limits Game_Limits;
  int Aggression;
  int Main_Volume;
  int Sound_Volume;
  int Music_Volume;
  int Clean_Map;
  int Governor_Common;
  int Governor_Prod_Never;
  int Governor_Prod_Often;
  char Custom_Leader_Name[32];
  char Custom_Leader_Title[24];
  char Custom_Formal_Name[40];
  char Custom_Noun[40];
  char Custom_Adjective[40];
  int Custom_Gender;
  int Unknown_Value;
  int World_Aridity;
  int Barbarian_Activity;
  int World_Landmass;
  int World_Ocean_Coverage;
  int World_Temperature;
  int World_Age;
  int World_Size;
  int World_Seed;
  char World_Seed_Name[12];
  int Actual_Word_Aridity;
  int Actual_Barbarian_Activity;
  int Actual_World_Landmass;
  int Actual_World_Ocean_Coverage;
  int Actual_World_Temperature;
  int Actual_World_Age;
  int Actual_World_Size;
  int Actual_Civ_Array[31];
  int Seafaring;
};
#pragma pack(pop)