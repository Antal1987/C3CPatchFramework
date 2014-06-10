#pragma once
#include "Base.h"

#include "City_Buildings_Info.h"
#include "City_Population.h"
#include "Citizens.h"
#include "City_Improvements.h"
#include "Date.h"
#include "CTPG.h"

/*  298 */
#pragma pack(push, 1)
struct struct_City_Order
{
  int OrderID;
  int OrderType;
};
#pragma pack(pop)

/*   33 */
#pragma pack(push, 1)
struct class_City_Body
{
  void *Body_vtable;
  int ID;
  __int16 X;
  __int16 Y;
  char CivID;
  char field_D;
  char field_E;
  char field_F;
  int Improvements_Maintenance;
  int Status;
  int Common_Policy;
  int Production_Policy;
  int Production_Policy_Often;
  int StoredFood;
  int StoredProduction;
  int Improvements_Pollution;
  int Order_ID;
  int Order_Type;
  int field_38[6];
  int DraftCount;
  int field_70[11];
  int Available_Resources;
  int field_84;
  int field_A4;
  class_Buildings_Info Buildings;
  class_Citizens Citizens;
  int field_F4[9];
  class_Population Population;
  int CultureIncome;
  int Total_Cultures[32];
  int field_1A4;
  int Rioting_Change_Value;
  int Tiles_Food;
  int Tiles_Production;
  int Tiles_Commerce;
  int field_1B8;
  int field_1BC;
  int field_1C0;
  char CityName[20];
  int field_1D8;
  int Order_Queue_Count;
  struct_City_Order Orders_Queue[9];
  int FoodRequired;
  int ProductionLoss;
  int Corruption;
  int FoodIncome;
  int ProductionIncome;
  int CashIncome;
  int Luxury;
  int Science;
  int AddCash;
  int AddLuxury;
  int AddScience;
  int AddTaxes;
  class_City_Improvements Improvements_1;
  class_City_Improvements Improvements_2;
  class_Date Found_Date;
  int field_350;
  int field_354;
  int Improvement_Count;
  int field_35C;
  int *Unit_Produce_Times;
  int field_364;
  int field_368;
  class_CTPG CTPG;
  int Current_Improvement_Shields;
  int struct_198;
  int field_3A4[96];
  int Last;
};
#pragma pack(pop)

/*    7 */
#pragma pack(push, 1)
struct class_City
{
  class_Base Base;
  class_City_Body Body;
};
#pragma pack(pop)