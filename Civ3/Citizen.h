#pragma once
#include "Base.h"

#pragma pack(push, 1)
struct class_Citizen
{
  class_Base Base;
  int Body;
  char Status;
  char field_21;
  __int16 Tile_Index2;
  int field_24[65];
  int Mood;
  int Gender;
  int Turn_Of_Create;
  int CityID;
  int ID;
  int WorkerType;
  int RaceID;
  int field_144;
  int Turn_1;
};
#pragma pack(pop)
