#pragma once

#include "Common_Functions.h"
#include "Unit_Functions.h"
#include "City_Functions.h"
#include "Leader_Functions.h"

class Civ3_Functions
{
public:
	Civ3_Functions(void): Common(), Unit(), City(), Leader() {}
	~Civ3_Functions(void) {}
	Common_Functions Common;
	Unit_Functions Unit;
	City_Functions City;
	Leader_Functions Leader;
};
