#pragma once
#include "Base.h"

/*   69 */
#pragma pack(push, 1)
struct struct_Worker_Job
{
  int V;
  struct_String32 Name;
  struct_String32 Civilopedia_Entry;
  int TurnToComplete;
  int RequireID;
  int Resource1ID;
  int Resource2ID;
  struct_String32 Order;
};
#pragma pack(pop)