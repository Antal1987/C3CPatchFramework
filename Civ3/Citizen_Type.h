#pragma once
#include "Base.h"

/*   78 */
#pragma pack(push, 1)
struct struct_Citizen_Type
{
  int V1;
  int V2;
  struct_String32 Name;
  struct_String32 CivilopediaEntry;
  struct_String32 PluralName;
  int RequireID;
  int Luxury;
  int Research;
  int Tax;
  int Corruption;
  int Construction;
};
#pragma pack(pop)
