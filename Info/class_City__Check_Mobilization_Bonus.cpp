bool __thiscall class_City::Check_Mobilization_Bonus(class_City *this)
{
  int _Order_Type; // eax@2
  int _Order_ID; // ecx@2
  int _Unit_TypeID; // esi@3
  int v4; // eax@3
  struct_UnitType *v5; // ecx@3
  struct_UnitType *v6; // ecx@6
  bool result; // al@10

  if ( Civilizations[this->Body.CivID].Mobilization_Level == 1 )
  {
    _Order_Type = this->Body.Order_Type;
    _Order_ID = this->Body.Order_ID;
    result = _Order_Type == COT_Unit
          && 
          (
			(_Unit_TypeID = _Order_ID,
               v4 = BIC_Data.UnitTypes[_Order_ID].Transport_Capacity,
               v5 = &BIC_Data.UnitTypes[_Order_ID],
               v4 <= 0)
           || struct_Unit_Type::Check_Ability(v5, UTA_Transports_Only_Aircraft)
           || struct_Unit_Type::Check_Ability(&BIC_Data.UnitTypes[_Unit_TypeID], UTA_Transports_Only_Tacticle_Missiles)
			)
          && (
          (v6 = &BIC_Data.UnitTypes[_Unit_TypeID], BIC_Data.UnitTypes[_Unit_TypeID].Attack > 0)
           || v6->Defence > 0
           || v6->Bombard_Strength > 0
           || struct_Unit_Type::Check_Ability(v6, UTA_Nuclear_Weapon)
           );
  }
  else
  {
    result = 0;
  }
  return result;
}
