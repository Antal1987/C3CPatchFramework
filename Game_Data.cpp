#include "stdafx.h"
#include "Game_Data.h"

class_BIC * Game_Data::Get_BIC(){return (class_BIC *)(0x009C34C8);}	
class_Map * Game_Data::Get_Map(){return (class_Map *)(0x009C732C);}
class_Map_Renderer * Game_Data::Get_Map_Renderer(){return (class_Map_Renderer *)(0x009C7560);}
class_Leader * Game_Data::Get_Civ(int CivID){return (class_Leader *)(0x00A52E58 + CivID * 0x20E4);}
class_Game * Game_Data::Get_Game(){return (class_Game *)(0x00A52618);}
class_Race * Game_Data::Get_Races() { return Get_BIC()->Races; }
class_Race * Game_Data::Get_Race(int RaceID) 
{
	if(RaceID < 0 || RaceID >= Get_BIC()->RacesCount)
		return NULL;
	class_Race * Races = Get_Races();
	return &(Races[RaceID]); 
}
class_Base_List * Game_Data::Get_Cities() { return &Get_Game()->Cities; }
class_City * Game_Data::Get_City(int CityID) 
{ 
	class_Base * City = Get_Cities()->Get_Item(CityID); 
	return (class_City *)City;
}
class_Base_List * Game_Data::Get_Units() { return &Get_Game()->Units; }

class_Unit * Game_Data::Get_Unit(int UnitID)
{
	return (class_Unit *)Get_Units()->Get_Item(UnitID);
}
struct_UnitType * Game_Data::Get_Unit_Type(int UnitID)
{
	return Get_Unit_Type_Object(Get_Unit(UnitID)->Body.UnitTypeID);
}
struct_UnitType * Game_Data::Get_Unit_Type_Object(int Unit_TypeID)
{
	class_BIC * BIC = Get_BIC();
	if(Unit_TypeID < 0 || Unit_TypeID >= BIC->UnitTypeCount)
		return NULL;
	return &(BIC->UnitTypes[Unit_TypeID]);
}

std::string Game_Data::Get_Unit_Name(class_Unit * Unit)
{
	struct_UnitType * UT = Get_Unit_Type(Unit->Body.ID);
	std::string UTName = (UT == NULL) ? "NONE" : UT->Name;
	if(Unit->Body.Custom_Name.S[0])
		return std::string(Unit->Body.Custom_Name.S) + " (" + UTName + ")";
	return UTName;
}

std::string Game_Data::Get_Civ_Name(int CivID)
{
	return Get_Civ_Name(Get_Civ(CivID));
}
std::string Game_Data::Get_Civ_Name(class_Leader * Civ)
{
	class_Race * Race = Get_Race(Civ->RaceID);
	return (Race == NULL) ? "NONE" : Race->CountryName;
}

class_City * Game_Data::Get_Civ_Capital(class_Leader * Civ)
{
	return Get_City(Civ->CapitalID);
}

bool Game_Data::WrapX() { return Get_Map()->Flags & 1; }
bool Game_Data::WrapY() { return Get_Map()->Flags & 2; }
void Game_Data::Correct_Coordinates(int * p_X, int * p_Y)
{
	if(WrapX())
	{
		if(*p_X < 0) *p_X += Get_Map()->Width;
		if(*p_X >= Get_Map()->Width) *p_X -= Get_Map()->Width;
	}
	if(WrapY())
	{
		if(*p_Y < 0) *p_Y += Get_Map()->Height;
		if(*p_Y >= Get_Map()->Height) *p_Y -= Get_Map()->Height;
	}
}

void Game_Data::Get_Direction_Coordinates(int X, int Y, int Direction, int * p_X, int * p_Y)
{
	F->Common.Get_Point_Neighbour(Direction, p_X, p_Y);
	*p_X += X;
	*p_Y += Y;
	Correct_Coordinates(p_X, p_Y);
}

void Game_Data::Get_Unit_Direction_Coordinates(class_Unit * Unit, int Direction, int * p_X, int * p_Y)
{
	Get_Direction_Coordinates(Unit->Body.X, Unit->Body.Y, Direction, p_X, p_Y);
}