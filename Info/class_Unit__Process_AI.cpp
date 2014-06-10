bool __thiscall class_Unit::Process_AI(class_Unit *this)
{
  class_Unit *_this; // esi@1
  int _Unit_TypeID; // ecx@11
  char _AI_Strategy; // al@11
  struct_UnitType *_Unit_Type; // ecx@11
  unsigned int _AI_Strategy2; // eax@13
  int v6; // eax@52

  _this = this;
  if ( !class_Unit::f51(this) )
  {
    if ( (1 << Civilizations[_this->Body.CivID].ID) & Global_Civ_Flags2 || !class_Unit::Check_Sacrifice(_this, 0) )
    {
      if ( _this->Body.CivID )
      {
        _Unit_TypeID = _this->Body.UnitTypeID;
        _AI_Strategy = LOBYTE(BIC_Data.UnitTypes[_Unit_TypeID].AI_Strategy);
        _Unit_Type = &BIC_Data.UnitTypes[_Unit_TypeID];
        if ( _AI_Strategy & UTAI_Offence )
        {
          class_Unit::AI_Offence(_this);
        }
        else
        {
          _AI_Strategy2 = _Unit_Type->AI_Strategy;
          if ( (_Unit_Type->AI_Strategy >> UTAIV_Defence) & 1 )
          {
            class_Unit::AI_Defence(_this);
          }
          else
          {
            if ( (_AI_Strategy2 >> UTAIV_Artillery) & 1 )
            {
              class_Unit::AI_Artillery(_this);
            }
            else
            {
              if ( (_AI_Strategy2 >> UTAIV_Explore) & 1 )
              {
                class_Unit::AI_Explore(_this);
              }
              else
              {
                if ( (_AI_Strategy2 >> UTAIV_Army) & 1 )
                {
                  class_Unit::AI_Army(_this);
                }
                else
                {
                  if ( (_AI_Strategy2 >> UTAIV_Cruise_Missile) & 1 )
                  {
                    class_Unit::AI_Cruise_Missile(_this);
                  }
                  else
                  {
                    if ( (_AI_Strategy2 >> UTAIV_Air_Bombard) & 1 )
                    {
                      class_Unit::AI_Air_Bombard(_this);
                    }
                    else
                    {
                      if ( (_AI_Strategy2 >> UTAIV_Air_Defence) & 1 )
                      {
                        class_Unit::AI_Air_Defence(_this);
                      }
                      else
                      {
                        if ( BYTE1(_AI_Strategy2) & 1 )// its 8 = UTAIV_Naval_Power
                        {
                          class_Unit::AI_Naval_Power(_this);
                        }
                        else
                        {
                          if ( (_AI_Strategy2 >> UTAIV_Air_Transport) & 1 )
                          {
                            class_Unit::AI_Air_Transport(_this);
                          }
                          else
                          {
                            if ( (_AI_Strategy2 >> UTAIV_Naval_Transport) & 1 )
                            {
                              class_Unit::AI_Naval_Transport(_this);
                            }
                            else
                            {
                              if ( (_AI_Strategy2 >> UTAIV_Naval_Carrier) & 1 )
                              {
                                class_Unit::AI_Naval_Carrier(_this);
                              }
                              else
                              {
                                if ( (_AI_Strategy2 >> UTAIV_Terraform) & 1 )
                                {
                                  class_Unit::AI_Terraform(_this);
                                }
                                else
                                {
                                  if ( (_AI_Strategy2 >> UTAIV_Settle) & 1 )
                                  {
                                    class_Unit::AI_Settle(_this);
                                  }
                                  else
                                  {
                                    if ( (_AI_Strategy2 >> UTAIV_Leader) & 1 )
                                    {
                                      class_Unit::AI_Leader(_this);
                                    }
                                    else
                                    {
                                      if ( (_AI_Strategy2 >> UTAIV_Tactical_Nuke) & 1 )
                                      {
                                        class_Unit::AI_Tactical_Nuke(_this);
                                      }
                                      else
                                      {
                                        if ( BYTE2(_Unit_Type->AI_Strategy) & 1 )// 0x10 = UTAIV_ICBM
                                        {
                                          class_Unit::AI_ICBM(_this);
                                        }
                                        else
                                        {
                                          if ( (_AI_Strategy2 >> UTAIV_Naval_Missile_Transport) & 1 )
                                          {
                                            class_Unit::AI_Naval_Missile_Transport(_this);
                                          }
                                          else
                                          {
                                            if ( (_AI_Strategy2 >> UTAIV_Flag_Unit) & 1 )
                                            {
                                              class_Unit::f52_Process_field_1A8_and_IDLS(_this, -1);
                                              class_Unit::Set_Unit_State(_this, 1);
                                            }
                                            else
                                            {
                                              if ( (_AI_Strategy2 >> UTAIV_King) & 1 )
                                                class_Unit::AI_King(_this);
                                              else
                                                class_Unit::Skip_Turn(_this);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        class_Unit::f53(_this);
      }
    }
    else
    {
      if ( !class_Unit::Check_Sacrifice(_this, 0) )
        class_Unit::Skip_Turn(_this);
      if ( f_Get_City_by_XY(_this->Body.X, _this->Body.Y) )
        class_Unit::Sacrifice(_this);
      else
        class_Unit::f55_Set_Unit_State(_this, UnitState_1D);
    }
  }
  v6 = class_Unit::Get_Default_Hit_Points(_this) - _this->Body.Damage;
  return v6 < 0 || v6 <= 9999 && !v6;
}
