#pragma once
#include <string>
#include "Civ3/BIC.h"
#include "Civ3/Map.h"
#include "Civ3/Map_Renderer.h"
#include "Civ3/Leader.h"
#include "Civ3/Game.h"
#include "Civ3/Race.h"
#include "Civ3/City.h"
#include "Civ3/Unit.h"
#include "Civ3_Functions.h"

class Game_Data
{
public:
	Game_Data(Civ3_Functions * Functions) : F(Functions) {}
	~Game_Data(){}

	class_BIC * Get_BIC();
	class_Map * Get_Map();
	class_Map_Renderer * Get_Map_Renderer();
	class_Leader * Get_Civ(int CivID);
	class_Game * Get_Game();
	class_Race * Get_Races();
	class_Race * Get_Race(int RaceID);
	class_Base_List * Get_Cities();
	class_City * Get_City(int CityID);
	class_Base_List * Get_Units();
	class_Unit * Get_Unit(int UnitID);
	struct_UnitType * Get_Unit_Type(int UnitID);
	struct_UnitType * Get_Unit_Type_Object(int Unit_TypeID);

	std::string Get_Unit_Name(class_Unit * Unit);
	std::string Get_Civ_Name(int CivID);
	std::string Get_Civ_Name(class_Leader * Civ);
	class_City * Get_Civ_Capital(class_Leader * Civ);
	bool WrapX();
	bool WrapY();
	void Correct_Coordinates(int * p_X, int * p_Y);
	void Get_Direction_Coordinates(int X, int Y, int Direction, int * p_X, int * p_Y);
	void Get_Unit_Direction_Coordinates(class_Unit * Unit, int Direction, int * p_X, int * p_Y);
private:
	Civ3_Functions * F;
};