#pragma once
#include "Base.h"

/*   66 */
#pragma pack(push, 1)
struct struct_Resource_Type
{
  int ID;
  char Name[24];
  char Civilopedia_Entry[32];
  int Class;
  int AppearanceRatio;
  int DisappearanceProbability;
  int IconID;
  int RequireID;
  int Food;
  int Shield;
  int Commerce;
};
#pragma pack(pop)