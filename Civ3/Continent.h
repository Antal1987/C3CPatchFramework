#pragma once
#include "Base.h"

/*   46 */
#pragma pack(push, 1)
struct class_Continent_Body
{
  int vtable;
  int V1;
  int TileCount;
};
#pragma pack(pop)

/*   45 */
#pragma pack(push, 1)
struct class_Continent
{
  class_Base Base;
  class_Continent_Body Body;
};
#pragma pack(pop)
