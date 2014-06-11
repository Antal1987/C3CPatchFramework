#include "StdAfx.h"
#include "Unit_Action_Logger.h"

Unit_Action_Logger::Unit_Action_Logger(CFileLogger * Log, Game_Data * Data)//CPatchFramework * Parent)
{
	_Log = Log;
	_D = Data;
	Init_Methods();
}

void Unit_Action_Logger::Create(class_Unit * Unit, int Param1)
{
	log_string_format(_Log, "[Create Unit]\tUnit #%d (%s) created for Civ #%d (%s) at [%d, %d]", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(), 
		Unit->Body.X, Unit->Body.Y);
}
void Unit_Action_Logger::Delete(class_Unit * Unit, int CivID)
{
	if(CivID > 0)
		log_string_format(_Log, "[Delete Unit]\tUnit #%d (%s) of Civ #%d (%s) destroyed by Civ #%d (%s) at [%d, %d]", 
			Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
			Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(),
			CivID, _D->Get_Civ_Name(CivID).c_str(),
			Unit->Body.X, Unit->Body.Y);
	else
		log_string_format(_Log, "[Delete Unit]\tUnit #%d (%s) of Civ #%d (%s) deleted at [%d, %d]", 
			Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
			Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(),
			Unit->Body.X, Unit->Body.Y);
}
void Unit_Action_Logger::Move(class_Unit * Unit, int Direction)
{
	int TX, TY;
	_D->Get_Unit_Direction_Coordinates(Unit, Direction, &TX, &TY);
	log_string_format(_Log, "[Move Unit]\tUnit #%d (%s) of Civ #%d (%s) moving from [%d, %d] to [%d, %d]", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(),
		Unit->Body.X, Unit->Body.Y, TX, TY);
}
void Unit_Action_Logger::Skip_Turn(class_Unit * Unit, int Param1)
{
	log_string_format(_Log, "[Unit Skip Turn]\tUnit #%d (%s) of Civ #%d (%s) skipped turn", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str());
}
void Unit_Action_Logger::Attack(class_Unit * Unit, int Direction)
{
	int TX, TY;
	_D->Get_Unit_Direction_Coordinates(Unit, Direction, &TX, &TY);
	log_string_format(_Log, "[Unit Attack Tile]\tUnit #%d (%s) of Civ #%d (%s) attacking tile from [%d, %d] to [%d, %d]", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(),
		Unit->Body.X, Unit->Body.Y, TX, TY);
}

// Unit wins the combat while attacking => attacking unit wins
void Unit_Action_Logger::Unit_Wins(class_Unit * Unit, int Param1)
{
	class_Unit * TargetUnit = (class_Unit *)Param1;
	log_string_format(_Log, "[Unit Wins]\tUnit #%d (%s) of Civ #%d (%s) at [%d, %d] defeated Unit #%d (%s) of Civ #%d (%s) at [%d, %d]", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(), 
		Unit->Body.X, Unit->Body.Y,
		TargetUnit->Body.ID, _D->Get_Unit_Name(TargetUnit).c_str(), 
		TargetUnit->Body.CivID, _D->Get_Civ_Name(TargetUnit->Body.CivID).c_str(), 
		TargetUnit->Body.X, TargetUnit->Body.Y);
}

// Unit wins the combat while defending => attacking unit loses
void Unit_Action_Logger::Unit_Loses(class_Unit * Unit, int Param1)
{
	class_Unit * TargetUnit = (class_Unit *)Param1;
	log_string_format(_Log, "[Unit Loses]\tUnit #%d (%s) of Civ #%d (%s) at [%d, %d] was defeated by Unit #%d (%s) of Civ #%d (%s) at [%d, %d]", 
		TargetUnit->Body.ID, _D->Get_Unit_Name(TargetUnit).c_str(), 
		TargetUnit->Body.CivID, _D->Get_Civ_Name(TargetUnit->Body.CivID).c_str(), 
		TargetUnit->Body.X, TargetUnit->Body.Y,
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(), 
		Unit->Body.X, Unit->Body.Y);
}

void Unit_Action_Logger::AI(class_Unit * Unit, int Action)
{
	log_string_format(_Log, "[Unit AI]\tUnit #%d (%s) of Civ #%d (%s) at [%d, %d]; Action: %s", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(), 
		Unit->Body.X, Unit->Body.Y, Unit_Actions[Action].c_str());
}

void Unit_Action_Logger::ActionMethod(class_Unit * Unit, int Param1, int Action)
{
	if(Action < 0 && Action >= Unit_Actions_Count) return;
	Unit_Log_Method M = _Methods[Action];
	if(Action >= Unit_Action_Types::Unit_Action_AI_Offence && Action <= Unit_Action_Types::Unit_Action_AI_King)
	{
		(this->* M)(Unit, Action);
		return;
	}
	(this->* M)(Unit, Param1);
}

std::string Unit_Action_Logger::Get_State_Name(int State)
{
	if(State < 0 || State > Unit_State_Count)
		return "NONE";
	return Unit_States[State];
}

void Unit_Action_Logger::Set_State(class_Unit * Unit, int State)
{
	log_string_format(_Log, "[Unit State]\tUnit #%d (%s) of Civ #%d (%s) at [%d, %d] changed state from %d (%s) to %d (%s)", 
		Unit->Body.ID, _D->Get_Unit_Name(Unit).c_str(), 
		Unit->Body.CivID, _D->Get_Civ_Name(Unit->Body.CivID).c_str(), 
		Unit->Body.X, Unit->Body.Y, 
		Unit->Body.UnitState, Get_State_Name(Unit->Body.UnitState).c_str(),
		State, Get_State_Name(State).c_str());
}

void Unit_Action_Logger::Init_Methods()
{
	
	_Methods[Unit_Action_Create] = &Unit_Action_Logger::Create;
	_Methods[Unit_Action_Delete] = &Unit_Action_Logger::Delete;
	_Methods[Unit_Action_Move] = &Unit_Action_Logger::Move;
	_Methods[Unit_Action_Skip_Turn] = &Unit_Action_Logger::Skip_Turn;
	_Methods[Unit_Action_Attack] = &Unit_Action_Logger::Attack;
	_Methods[Unit_Action_Unit_Wins] = &Unit_Action_Logger::Unit_Wins;
	_Methods[Unit_Action_Unit_Loses] = &Unit_Action_Logger::Unit_Loses;
	for(int i=Unit_Action_AI_Offence;i<=Unit_Action_AI_King;i++)
		_Methods[i] = &Unit_Action_Logger::AI;	
}