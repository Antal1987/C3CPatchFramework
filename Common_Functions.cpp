#include "StdAfx.h"
#include "Common_Functions.h"

Common_Functions::Common_Functions(void)
{
	*(int *)(void *)&_Get_City_by_XY = f_Get_City_by_XY_Address;
	*(int *)(void *)&_Get_Point_Neighbour = f_Get_Point_Neighbour_Address;
}

class_City * Common_Functions::Get_City_by_XY(int X, int Y)
{
	return this->_Get_City_by_XY(X, Y);
}

void Common_Functions::Get_Point_Neighbour(int N_Index, int * p_X, int * p_Y)
{
	this->_Get_Point_Neighbour(N_Index, (int)p_X, (int)p_Y);
}