#pragma once
#include "Base.h"

/*   19 */
#pragma pack(push, 1)
struct class_Tile_Body
{
  class_Base Base;
  int Fog_Of_War;
  int FOWStatus;
  int V3;
  int Visibility;
  int CircuitFlags;
  __int16 CityAreaID;
  __int16 Values[32];
  char Visibile_Overlays[32];
  __int16 field_92;
  int field_D0_Visibility;
  int field_D4;
  void *field_D8;
};
#pragma pack(pop)

/*   17 */
#pragma pack(push, 1)
struct class_Tile
{
  void *vtable;
  char River_Code;
  char Territory_OwnerID;
  __int16 field_6;
  int ResourceType;
  int TileUnitID;
  __int16 SquareParts;
  __int16 VictoryPoint;
  int field_14;
  __int16 Barbarian_TribeID;
  __int16 CityID;
  __int16 Tile_BuildingID;
  __int16 ContinentID;
  int field_20;
  int Ruins;
  int Overlays;
  int SquareType;
  int Terrain_Overlays;
  int field_34;
  int field_38;
  class_Tile_Body Body;
};
#pragma pack(pop)
