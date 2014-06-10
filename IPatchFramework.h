#pragma once

#include "Civ3/BIC.h"
#include "Civ3/Leader.h"
//#include "City.h"
#include "Civ3/Unit.h"
#include "Civ3/Game.h"

class IPatchFramework
{
public:
	virtual ~IPatchFramework(){};
	virtual void Init() = 0;
	virtual int CorrectScienceAgeBulbs(class_Leader * Civ, int Total_Bulbs) = 0;
	virtual char * Find_Resource(char * Resource_Name) = 0;
	virtual void Log_Unit_State(class_Unit * Unit, int State) = 0;
	virtual void Log_Unit_Action(class_Unit * Unit, int Action) = 0;
	virtual bool Process_Unit_AI_Strategies(class_Unit * Unit) = 0;
	virtual void Log_Unit_Action_1(class_Unit * Unit, int Action, int Param1) = 0;
	virtual void Log_City_Action(class_City * City, int Action) = 0;
	virtual void Log_City_Action_1(class_City * City, int Action, int Param1) = 0;
	virtual void Log_Civ_Action(class_Leader * Civ, int Action) = 0;
	virtual void Log_Civ_Action_1(class_Leader * Civ, int Action, int Param1) = 0;
};
