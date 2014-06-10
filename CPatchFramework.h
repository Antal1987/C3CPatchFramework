#pragma once
#include "IPatchFramework.h"
#include <string>
#include "Tools/IniReader.h"
#include "Tools/FileLogger.h"
#include "Parameters.h"
#include "Unit_Actions.h"
#include "Civ3_Functions.h"
#include "Game_Data.h"
#include "Unit_Action_Logger.h"

class CPatchFramework :
	public IPatchFramework
{
public:
	CPatchFramework(): Ini(std::string(Ini_Name)), Log(std::string(Log_Name)), F(), D(&F), Unit_Log(&Log, &D) { PreInit(); };
	virtual ~CPatchFramework();		// 0x00
	virtual void Init();			// 0x04
	virtual int CorrectScienceAgeBulbs(class_Leader * Civ, int Total_Bulbs);	//0x08
	virtual char * Find_Resource(char * Resource_Name);							//0x0C
	virtual void Log_Unit_State(class_Unit * Unit, int State);					//0x10
	virtual void Log_Unit_Action(class_Unit * Unit, int Action);				//0x14
	virtual bool Process_Unit_AI_Strategies(class_Unit * Unit);					//0x18
	virtual void Log_Unit_Action_1(class_Unit * Unit, int Action, int Param1);	//0x1C
	virtual void Log_City_Action(class_City * City, int Action);				//0x20
	virtual void Log_City_Action_1(class_City * City, int Action, int Param1);	//0x24
	virtual void Log_Civ_Action(class_Leader * Civ, int Action);				//0x28
	virtual void Log_Civ_Action_1(class_Leader * Civ, int Action, int Param1);	//0x2C

	CFileLogger * Get_Log();
	Game_Data * Get_Data();

private:
	char m_szFileName[255];
	CIniReader Ini;
	CFileLogger Log;
	Civ3_Functions F;
	Game_Data D;
	Unit_Action_Logger Unit_Log;
	bool _b_Log;

	void PreInit();
	void Process_Unit_AI_Strategies(class_Unit * Unit, int AI_Strategies);
	void Read_Parameters();
};
