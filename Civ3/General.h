#pragma once
#include "Base.h"

#include "Cultural_Levels.h"

/*   72 */
#pragma pack(push, 1)
struct class_General
{
  int vtable;
  int V1;
  struct_String32 CityTypeNames[3];
  int *SpaceshipPartsNeeded;
  int BarbarianAdvUnitID;
  int BarbarianBasicUnitID;
  int BarbarianSeaUnitID;
  int ArmySupportCities;
  int TurnPenalty_Hurry;
  int TurnPenalty_Draft;
  int ShieldCostPerGold;
  int DefenceBonus_Fortress;
  int HappyCitizensAffect;
  int V2;
  int V3;
  int ForestValueInShields;
  int ShieldValueInGold;
  int CitizenValueInShields;
  int Default_Difficulty;
  int BattleCreatedUnitID;
  int BuildArmyUnitID;
  int DefenceBonus_Building;
  int DefenceBonus_Citizen;
  int DefaultMoneyResource;
  int InterceptChance_Air;
  int InterceptChance_Stealth;
  int SpaceshipParts_Count;
  int StartingTreasury;
  int V4;
  int FoodPerCitizen;
  int DefenceBonus_River;
  int ChanceOfRioting;
  int DefaultUnit_Scout;
  int DefaultUnit_Captured;
  int RoadsMovementRate;
  int DefaultUnit_Start1;
  int DefaultUnit_Start2;
  int LoveKing_Min_Poppulation;
  int DefenceBonus_Cities[3];
  int MaximumSize_Town;
  int MaximumSize_City;
  int V5;
  int DefenceBonus_Fortification;
  struct_Cultural_Levels CulturalLevels;
  int BorderFactor;
  int FutureTechCost;
  int GoldenAgeTurns;
  int ResearchTime_Max;
  int ResearchTime_Min;
  int FlagUnitID;
  int FoodUpdateCost;
};
#pragma pack(pop)