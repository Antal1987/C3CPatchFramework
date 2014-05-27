#pragma once
#include "IPatchFramework.h"

class CPatchFramework :
	public IPatchFramework
{
public:
	CPatchFramework(){};
	virtual ~CPatchFramework(){}
	virtual void Init(){}
	virtual int CorrectScienceAgeBulbs(class_Leader * Civ, int Total_Bulbs);
};
