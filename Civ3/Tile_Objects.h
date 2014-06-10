#pragma once
#include "Base.h"

/*  134 */
#pragma pack(push, 1)
struct class_Tile_Building_Body
{
  int vtable;
  int ID;
  int X;
  int Y;
  int OwnerID;
};
#pragma pack(pop)

/*  135 */
#pragma pack(push, 1)
struct class_Tile_Building
{
  class_Base Base;
  class_Tile_Building_Body Body;
};
#pragma pack(pop)

/*  124 */
#pragma pack(push, 1)
struct class_Airfield
{
  class_Tile_Building Base;
  int Used;
};
#pragma pack(pop)

/*  127 */
#pragma pack(push, 1)
struct class_Colony
{
  class_Tile_Building Base;
};
#pragma pack(pop)

/*  129 */
#pragma pack(push, 1)
struct class_Radar_Tower
{
  class_Tile_Building Base;
};
#pragma pack(pop)

/*  131 */
#pragma pack(push, 1)
struct class_Outpost
{
  class_Tile_Building Base;
};
#pragma pack(pop)

/*  132 */
#pragma pack(push, 1)
struct class_Victory_Point_Body
{
  int vtable;
  int field_4;
  int field_8;
  int field_C;
  int field_10;
};
#pragma pack(pop)

/*  133 */
#pragma pack(push, 1)
struct class_Victory_Point
{
  class_Base Base;
  class_Victory_Point_Body Body;
};
#pragma pack(pop)