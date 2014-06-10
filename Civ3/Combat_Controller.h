#pragma once
#include "Base.h"

#include "Unit.h"

#pragma pack(push, 1)
struct class_Combat_Controller
{
  class_Unit *Attack_Unit;
  class_Unit *Defence_Unit;
  int V02;
  int Attack_Direction;
  int V04;
  int Attack_X;
  int Attack_Y;
  int Defence_X;
  int Defence_Y;
};
#pragma pack(pop)
