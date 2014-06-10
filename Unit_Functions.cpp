#include "StdAfx.h"
#include "Unit_Functions.h"

Unit_Functions::Unit_Functions()
{
	*(int *)(void *)&_Check_Sacrifice = Check_Sacrifice_Address;
	*(int *)(void *)&_f51 = f51_Address;
	*(int *)(void *)&_f52 = f52_Address;
	*(int *)(void *)&_f53 = f53_Address;
	*(int *)(void *)&_f55 = f55_Address;
	*(int *)(void *)&_Set_Unit_State = Set_Unit_State_Address;
	*(int *)(void *)&_Sacrifice = Sacrifice_Address;
	*(int *)(void *)&_Get_Default_Hit_Points = Get_Default_Hit_Points_Address;
	for(int i=0;i<Unit_AI_Type_Count;i++)
		*(int *)(void *)&_AI_Methods[i] = Unit_AI_Function[i];
}

bool Unit_Functions::Check_Sacrifice(class_Unit * Unit, int V)
{
	return (Unit->* _Check_Sacrifice)(V);
}
bool Unit_Functions::f51(class_Unit * Unit)
{
	return (Unit->* _f51)();
}
void Unit_Functions::f52(class_Unit * Unit, int V)
{
	(Unit->* _f52)(V);
}
void Unit_Functions::Set_Unit_State(class_Unit * Unit, int Unit_State)
{
	(Unit->* _Set_Unit_State)(Unit_State);
}
void Unit_Functions::Skip_Turn(class_Unit * Unit)
{
	(Unit->* _Skip_Turn)();
}
void Unit_Functions::f53(class_Unit * Unit)
{
	(Unit->* _f53)();
}
void Unit_Functions::Sacrifice(class_Unit * Unit)
{
	(Unit->* _Sacrifice)();
}
void Unit_Functions::f55(class_Unit * Unit, int V)
{
	(Unit->* _f55)(V);
}

void Unit_Functions::AI_Method(class_Unit * Unit, int AI_Type)
{
	if(AI_Type < 0 || AI_Type >= Unit_AI_Type_Count || AI_Type == UnitTypeAIValues::UTAIV_Flag_Unit)
		return;
	(Unit->* _AI_Methods[AI_Type])();
}
int Unit_Functions::Get_Default_Hit_Points(class_Unit * Unit)
{
	return (Unit->* _Get_Default_Hit_Points)();
}