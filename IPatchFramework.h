#pragma once

#include "Leader.h"
//#include "City.h"
//#include "Unit.h"

class IPatchFramework
{
public:
	virtual ~IPatchFramework(){};
	virtual void Init() = 0;
	virtual int CorrectScienceAgeBulbs(class_Leader * Civ, int Total_Bulbs) = 0;
};
