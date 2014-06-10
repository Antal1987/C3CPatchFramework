#pragma once
#include "Civ3/City.h"

typedef class_City * (* Get_City_XY_Method)(int, int);
typedef void (* Std_Void_3_Method)(int, int, int);

class Common_Functions
{
public:
	static const int f_Get_City_by_XY_Address = 0x0056D230;
	static const int f_Get_Point_Neighbour_Address = 0x005E6D80;

	class_City * Get_City_by_XY(int X, int Y);
	void Get_Point_Neighbour(int N_Index, int * p_X, int * p_Y);

	Common_Functions(void);
	~Common_Functions(void) {}

private:
	Get_City_XY_Method _Get_City_by_XY;
	Std_Void_3_Method _Get_Point_Neighbour;
};
