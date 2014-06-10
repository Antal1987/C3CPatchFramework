#pragma once
#include "Base.h"

/*  290 */
#pragma pack(push, 1)
struct struct_Difficulty_Level
{
  int V;
  struct_String64 Name;
  int Content_Citizens;
  int Transition_Time;
  int Defencive_Land_Units;
  int Offencive_Type_Units;
  int Start_Units_1;
  int Start_Units_2;
  int Additional_Free_Support;
  int Bonus_For_Each_City;
  int Attack_Bonus;
  int Cost_Factor;
  int Optimal_Cities;
  int AI_Trade_Rate;
  int Corruption_Level;
  int Quelled_Citizens;
};
#pragma pack(pop)