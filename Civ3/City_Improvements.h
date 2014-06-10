#pragma once
#include "Base.h"


/*   49 */
#pragma pack(push, 1)
struct class_City_Improvements
{
  class_Base Base;
  char Improvements[32];
  int Count;
  int Aligned_Capacity;
};
#pragma pack(pop)