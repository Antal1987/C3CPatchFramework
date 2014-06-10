#include "StdAfx.h"
#include "CPatchFramework.h"

void CPatchFramework::PreInit()
{
	memset(m_szFileName, 0x00, 255);
	Read_Parameters();
	Log.WriteLine(std::string("Patch framework is started"));
}

CPatchFramework::~CPatchFramework()
{
	Log.WriteLine(std::string("Patch framework is finished"));
}

void CPatchFramework::Init()
{
}

int CPatchFramework::CorrectScienceAgeBulbs(class_Leader * Civ, int Total_Bulbs)
{
	float * p_Science_Age_Ratio = (float *)0x0066905C;
	int D_Bulbs = (int)((float)Total_Bulbs * (*p_Science_Age_Ratio - 1.00));
	Civ->Research_Bulbs += D_Bulbs;
	return Civ->Research_Bulbs;
}

typedef char * (class_BIC::*BIC_Find_Resource)(char *, char);

char * CPatchFramework::Find_Resource(char * Resource_Name)
{
	memset(m_szFileName, 0x00, 255);
	memcpy(m_szFileName, Resource_Name, strlen(Resource_Name));
	BIC_Find_Resource p_Find_Resource = NULL;	
	*(int *)(void *)&p_Find_Resource = 0x005982A0;
	class_BIC * BIC = D.Get_BIC();
	return (BIC->* p_Find_Resource)(m_szFileName, 0);
}
void CPatchFramework::Log_Unit_State(class_Unit * Unit, int State)
{
	if(!_b_Log) return;
	if(Unit->Body.UnitState == State)
		return;
	Unit_Log.Set_State(Unit, State);
}
void CPatchFramework::Log_Unit_Action(class_Unit * Unit, int Action)
{
	if(!_b_Log) return;
	log_string_format(&this->Log, "Unit #%04d at 0x%08X (Civ: %02d; Location: [%03d, %03d]; Type: %03d) action: %02d", 
		Unit->Body.ID, (int)(void *)Unit, Unit->Body.CivID, 
		Unit->Body.X, Unit->Body.Y, Unit->Body.UnitTypeID, Action);
}

void CPatchFramework::Log_Unit_Action_1(class_Unit * Unit, int Action, int Param1)
{
	if(!_b_Log) return;
	Unit_Log.ActionMethod(Unit, Param1, Action);
}

void CPatchFramework::Log_City_Action(class_City * City, int Action)
{
	if(!_b_Log) return;
	log_string_format(&this->Log, "City #%04d (%s) at 0x%08X (Civ: %02d; Location: [%03d, %03d]; Status: %03d) action: %02d", 
		City->Body.ID, City->Body.CityName, (int)(void *)City, City->Body.CivID, 
		City->Body.X, City->Body.Y, City->Body.Status, Action);
}

void CPatchFramework::Log_City_Action_1(class_City * City, int Action, int Param1)
{
	if(!_b_Log) return;
	log_string_format(&this->Log, "City #%04d (%s) at 0x%08X (Civ: %02d; Location: [%03d, %03d]; Status: %03d) action: %02d; param1: %d", 
		City->Body.ID, City->Body.CityName, (int)(void *)City, City->Body.CivID, 
		City->Body.X, City->Body.Y, City->Body.Status, Action, Param1);
}

void CPatchFramework::Log_Civ_Action(class_Leader * Civ, int Action)
{
	if(!_b_Log) return;
	log_string_format(&this->Log, "Civ #%02d (Race: #%02d) at 0x%08X (Status: %d) action: %02d",
		Civ->ID, Civ->RaceID, (int)(void *)Civ, Civ->Status, Action);
}
void CPatchFramework::Log_Civ_Action_1(class_Leader * Civ, int Action, int Param1)
{
	if(!_b_Log) return;
	log_string_format(&this->Log, "Civ #%02d (Race: #%02d) at 0x%08X (Status: %d) action: %02d; param1: %d",
		Civ->ID, Civ->RaceID, (int)(void *)Civ, Civ->Status, Action, Param1);
}

void CPatchFramework::Process_Unit_AI_Strategies(class_Unit * Unit, int AI_Strategies)
{
	for(int i=0;i<Unit_AI_Type_Count;i++)
	{
		if(!( (AI_Strategies >> i) & 1) ) continue;
		Log_Unit_Action_1(Unit, i + 3, 0);
		if(i == UnitTypeAIValues::UTAIV_Flag_Unit)
		{
			F.Unit.f52(Unit, -1);
            F.Unit.Set_Unit_State(Unit, 1);
		}
		else
			F.Unit.AI_Method(Unit, i);
		return;
	}
	F.Unit.Skip_Turn(Unit);
}

bool CPatchFramework::Process_Unit_AI_Strategies(class_Unit * Unit)
{
	if(!F.Unit.f51(Unit))
	{
		class_Leader * _Unit_Civ = D.Get_Civ(Unit->Body.CivID);
		if ( (1 << _Unit_Civ->ID) & D.Get_Game()->Civ_Flags_2 || !F.Unit.Check_Sacrifice(Unit, 0) )
		{
			if(Unit->Body.CivID)
			{
				int _AI_Strategy = D.Get_BIC()->UnitTypes[Unit->Body.UnitTypeID].AI_Strategy;
				Process_Unit_AI_Strategies(Unit, _AI_Strategy);
			}
			else
			{
				F.Unit.f53(Unit);
			}
		}
		else
		{
			if ( !F.Unit.Check_Sacrifice(Unit, 0) )
				F.Unit.Skip_Turn(Unit);
			if ( F.Common.Get_City_by_XY(Unit->Body.X, Unit->Body.Y) )
				F.Unit.Sacrifice(Unit);
			else
				F.Unit.f55(Unit, 0x1D);
		}
	}
	int Health = F.Unit.Get_Default_Hit_Points(Unit) - Unit->Body.Damage;
	return Health < 0 || Health <= 9999 && !Health;
}

CFileLogger * CPatchFramework::Get_Log()
{
	return &Log;
}

Game_Data * CPatchFramework::Get_Data()
{
	return &D;
}

void CPatchFramework::Read_Parameters()
{
	_b_Log = Ini.ReadBoolean("main", "log", false);
	Log.Set_Log_Time(Ini.ReadBoolean("main", "log_time", false));
}