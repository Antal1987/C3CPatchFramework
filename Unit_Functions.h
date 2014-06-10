#pragma once

#include "Civ3/Unit.h"
#include "Civ3/City.h"

const int Unit_AI_Type_Count = 20;

typedef void (class_Unit::*Unit_Void_Method)(void);
typedef void (class_Unit::*Unit_Void_Method2)(int);
typedef bool (class_Unit::*Unit_Bool_Method)(void);
typedef bool (class_Unit::*Unit_Bool_Method2)(int);
typedef int (class_Unit::*Unit_Int_Method)(void);

static int Unit_AI_Function[Unit_AI_Type_Count] = {
	0x00450830,	0x00452590,	0x004551C0,	0x00455710,
	0x00455850,	0x00456760,	0x004568C0,	0x00457A60,
	0x004581A0,	0x00459D60,	0x0045A1F0,	0x0045C010,
	0x0045C7D0,	0x0045F6B0,	0x0045FF50,	0x0046146F,
	0x004605C0,	0x004606A0,	0x0,	0x00460F60,
};

class Unit_Functions
{
public:
	static const int Check_Sacrifice_Address = 0x005C3000;
	static const int f51_Address = 0x0044E960;
	static const int f52_Address = 0x005B2C20;
	static const int Set_Unit_State_Address = 0x005B2D50;
	static const int Skip_Turn_Address = 0x005BE7F0;
	static const int f53_Address = 0x0044FB60;
	//static const int f_Get_City_by_XY_Address = 0x0056D230;
	static const int Sacrifice_Address = 0x005C2B90;
	static const int f55_Address = 0x00466AE0;
	static const int Get_Default_Hit_Points_Address = 0x005BE2C0;

	Unit_Functions();
	~Unit_Functions() {}
	bool Check_Sacrifice(class_Unit * Unit, int V);
	bool f51(class_Unit * Unit);
	void f52(class_Unit * Unit, int V);
	void Set_Unit_State(class_Unit * Unit, int Unit_State);
	void Skip_Turn(class_Unit * Unit);
	void f53(class_Unit * Unit);
	void Sacrifice(class_Unit * Unit);
	void f55(class_Unit * Unit, int V);
	void AI_Method(class_Unit * Unit, int AI_Type);
	int Get_Default_Hit_Points(class_Unit * Unit);

private:
	Unit_Bool_Method2 _Check_Sacrifice;
	Unit_Bool_Method _f51;
	Unit_Void_Method2 _f52;
	Unit_Void_Method2 _Set_Unit_State;
	Unit_Void_Method _Skip_Turn;
	Unit_Void_Method _f53;
	Unit_Void_Method _Sacrifice;
	Unit_Void_Method2 _f55;
	Unit_Void_Method _AI_Methods[Unit_AI_Type_Count];
	Unit_Int_Method _Get_Default_Hit_Points;
};