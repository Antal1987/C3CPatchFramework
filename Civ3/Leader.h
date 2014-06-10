#pragma once
#include "Common.h"
#include "Civ_Treaties.h"
#include "Culture.h"
#include "Espionage.h"
#include "Hash_Table.h"
//#include "Game_Data.h"
//#include "City.h"

#pragma pack(push, 1)
struct class_Leader_Data_10
{
  int vtable;
  int field_4;
  int field_8;
  int field_C;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct class_Leader
{
public:
  void *vtable;
  int field_4[6];
  int ID;
  int RaceID;
  int field_24[2];
  int CapitalID;
  int field_30;
  int field_34;
  int field_38;
  int Golden_Age_End;
  int Status;
  int Gold_Decrement;
  int Gold_Encoded;
  int field_4C[21];
  int GovenmentType;
  int Mobilization_Level;
  int Tiles_Discovered;
  int field_AC[14];
  int field_E4;
  int field_E8[3];
  int Era;
  int Research_Bulbs;
  int Current_Research_ID;
  int Current_Research_Turns;
  int Future_Techs_Count;
  __int16 AI_Strategy_Unit_Counts[20];
  int field_130[22];
  int Armies_Count;
  int Unit_Count;
  int Military_Units_Count;
  int Cities_Count;
  int field_198;
  int field_19C;
  int field_1A0;
  int Tax_Luxury;
  int Tax_Cash;
  int Tax_Science;
  int field_1B0[736];
  char At_War[32];
  char field_D50[32];
  char field_D70[32];
  int field_D90[72];
  int Contacts[32];
  int Relation_Treaties[32];
  int Military_Allies[32];
  int Trade_Embargos[32];
  int field_10B0[18];
  int Color_Table_ID;
  int field_10FC;
  int field_1100[7];
  int field_111C[36];
  int field_11AC[8];
  int field_11CC;
  int field_11D0[252];
  int field_15C0;
  int field_15C4;
  int field_15C8;
  int field_15CC;
  int Science_Age_Status;
  int Science_Age_End;
  int field_15D8;
  __int16 *Improvement_Counts;
  int field_15E0;
  int Improvements_Counts;
  int *Small_Wonders;
  int field_15EC;
  __int16 *Units_Counts;
  int field_15F4;
  int field_15F8;
  __int16 *Spaceship_Parts_Count;
  int *ContinentStat4;
  int ContinentStat3;
  int *ContinentCities;
  int ContinentStat2;
  int *ContinentStat1;
  byte *Available_Resources;
  byte *Available_Resources_Counts;
  class_Civ_Treaties Treaties[32];
  class_Culture Culture;
  class_Espionage Espionage_1;
  class_Espionage Espionage_2;
  int field_18C0[260];
  class_Leader_Data_10 Data_10_Array2[32];
  class_Leader_Data_10 Data_10_Array3[32];
  class_Hash_Table Auto_Improvements;

  //char * Get_Name(Game_Data * Data) { return Data->Get_Race(this->ID)->CountryName; }
  //class_City * Get_Capital(Game_Data * Data) { return Data->Get_City(this->CapitalID); }
};
#pragma pack(pop)
