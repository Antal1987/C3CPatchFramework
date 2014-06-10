#pragma once
#include "Base.h"

/*   22 */
#pragma pack(push, 1)
struct struct_RaceEraAnimations
{
  char ForwardFilename[260];
  char ReverseFilename[260];
};
#pragma pack(pop)

/*   21 */
#pragma pack(push, 1)
struct class_Race
{
  void *vtable;
  int field_4[4];
  struct_String24 *CityNames;
  struct_String32 *MilitaryLeaders;
  char LeaderName[32];
  char Title[24];
  char Civilopedia_Entry[32];
  char AdjectiveName[40];
  char CountryName[40];
  char SingularName[40];
  struct_RaceEraAnimations EraAnimations[4];
  int CultureGroupID;
  int LeaderGender;
  int CivGender;
  int AggressionLevel;
  int ID;
  int ShunnedGovernment;
  int FavoriteGovernment;
  int CityNamesCount;
  int MilitaryLeadersCount;
  int DefaultColor;
  int AlternateColor;
  int StartupAdvances[4];
  int Bonuses;
  int GovernorSettings;
  int BuildNever;
  int BuildOften;
  int Plurality;
  int LeaderUnitID;
  int Flavours;
  int field_964;
  int DiplomacyTextIndex;
  int ScientificLeadersCount;
  int ScientificLeaders;
};
#pragma pack(pop)