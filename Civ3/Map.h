#pragma once
#include "Base.h"

#include "World_Features.h"
#include "Map_Worker_Job_Info.h"
#include "Tile.h"
#include "Continent.h"
#include "Map_Renderer.h"

/*   18 */
#pragma pack(push, 1)
struct class_Map
{
  void *vtable;
  struct_World_Features World;
  int TileCount;
  struct_Map_Worker_Job_Info WorkerJobs[13];
  class_Tile **Tiles;
  int *ResourceCounts;
  int field_150;
  int Height;
  int Civ_Distance;
  int Civ_Count;
  int TileCount_Stat;
  int field_164;
  int Width;
  int Starting_Locations[32];
  int Seed;
  int Flags;
  class_Base Body;
  int field_210;
  class_Continent *Continents;
  int field_218;
  int field_21C;
  int field_220;
  int field_224;
  int field_228;
  int field_22C;
  int Continent_Count;
  class_Map_Renderer Renderer;
};
#pragma pack(pop)
