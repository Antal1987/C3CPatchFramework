#include "StdAfx.h"
#include "CPatchFramework.h"

int CPatchFramework::CorrectScienceAgeBulbs(class_Leader * Civ, int Total_Bulbs)
{
	float * p_Science_Age_Ratio = (float *)0x0066905C;
	int D_Bulbs = (int)((float)Total_Bulbs * (*p_Science_Age_Ratio - 1.00));
	Civ->Research_Bulbs += D_Bulbs;
	return Civ->Research_Bulbs;
}