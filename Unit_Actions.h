#pragma once

#include <string>

enum Unit_Action_Types
{
	Unit_Action_Create = 0,
	Unit_Action_Delete = 1,
	Unit_Action_Move = 2,
	Unit_Action_AI_Offence = 3,
	Unit_Action_AI_Defence = 4,
	Unit_Action_AI_Artillery = 5,
	Unit_Action_AI_Explore = 6,
	Unit_Action_AI_Army = 7,
	Unit_Action_AI_Cruise_Missile = 8,
	Unit_Action_AI_Air_Bombard = 9,
	Unit_Action_AI_Air_Defence = 10,
	Unit_Action_AI_Naval_Power = 11,
	Unit_Action_AI_Air_Transport = 12,
	Unit_Action_AI_Naval_Transport = 13,
	Unit_Action_AI_Naval_Carrier = 14,
	Unit_Action_AI_Terraform = 15,
	Unit_Action_AI_Settle = 16,
	Unit_Action_AI_Leader = 17,
	Unit_Action_AI_Tactical_Nuke = 18,
	Unit_Action_AI_ICBM = 19,
	Unit_Action_AI_Naval_Missile_Transport = 20,
	Unit_Action_AI_Flag_Unit = 21,
	Unit_Action_AI_King = 22,
	Unit_Action_Skip_Turn = 23,
	Unit_Action_Attack = 24,
	Unit_Action_Unit_Loses = 25,
	Unit_Action_Unit_Wins = 26
};

const int Unit_Actions_Count = 27;
static std::string Unit_Actions[Unit_Actions_Count] = {"Create", "Delete", "Move", 
"AI_Offence","AI_Defence","AI_Artillery","AI_Explore",
"AI_Army","AI_Cruise_Missile","AI_Air_Bombard","AI_Air_Defence",
"AI_Naval_Power","AI_Air_Transport","AI_Naval_Transport","AI_Naval_Carrier",
"AI_Terraform","AI_Settle","AI_Leader","AI_Tactical_Nuke",
"AI_ICBM","AI_Naval_Missile_Transport","AI_Flag_Unit","AI_King",
"Skip_Turn", "Attack", "Unit_Wins", "Unit_Loses"};

const int Unit_State_Count = 35;
static std::string Unit_States[Unit_State_Count] = 
{"Normal","Fortifying","Build_Mines","Irrigate","Build_Forest","Build_Road",
"Build_Railroad","Plant_Forest","Clean_Forest", "Clear_Jungle", "Clear_Pollution","Build_Airfield","Build_Radar_Tower",
"Build_Outpost","Build_Barricade","Intercept","Go_To","Road_To_Tile","Railroad_To_Tile",
"Build_Colony","Auto_Irrigate","Build_Trade_Routes","Auto_Clear_Forest","Auto_Clear_Swamp","Auto_Clear_Pollution",
"Auto_Save_City_Tiles","Explore","State_27","State_28","State_29","State_30",
"Auto_Bombard","Auto_Air_Bombard","State_33","State_34"};