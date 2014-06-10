#pragma once
#include "Tools/FileLogger.h"
#include "Unit_Actions.h"
#include "Civ3/Unit.h"
#include "Game_Data.h"

class Unit_Action_Logger;
typedef void (Unit_Action_Logger::*Unit_Log_Method)(class_Unit *, int);

class Unit_Action_Logger
{
public:
	Unit_Action_Logger(CFileLogger * Log, Game_Data * Data);//CPatchFramework * Parent);
	~Unit_Action_Logger(void) {}

	void Create(class_Unit * Unit, int Param1);
	void Delete(class_Unit * Unit, int CivID);
	void Move(class_Unit * Unit, int Direction);
	void Skip_Turn(class_Unit * Unit, int Param1);
	void Attack(class_Unit * Unit, int Direction);
	void Unit_Wins(class_Unit * Unit, int Param1);
	void Unit_Loses(class_Unit * Unit, int Param1);

	void AI(class_Unit * Unit, int Action);
	void ActionMethod(class_Unit * Unit, int Param1, int Action);
	void Set_State(class_Unit * Unit, int State);
	std::string Get_State_Name(int State);
private:
	//CPatchFramework * _PF;
	CFileLogger * _Log;
	Game_Data * _D;
	Unit_Log_Method _Methods[Unit_Actions_Count];

	void Init_Methods();
};
