char __thiscall class_Combat_Controller::Process_Combat(class_Combat_Controller *this, class_Unit *Attack_Unit, int Attack_Direction, int a4)
{
  class_Combat_Controller *_this; // ebp@1
  int v5; // eax@4
  class_Unit *v6; // eax@6
  class_Tile *v7; // eax@9
  class_Unit *v8; // edx@9
  int v9; // esi@9
  int v10; // edi@9
  int v11; // ebx@9
  __int16 v12; // ax@9
  class_City *v13; // eax@9
  int v14; // ST18_4@11
  const char *v15; // eax@11
  unsigned int v16; // edi@12
  signed int v17; // ecx@12
  bool v18; // zf@14
  signed int v19; // ecx@15
  const void *v20; // esi@15
  unsigned int v21; // edx@15
  const CHAR *v22; // edi@15
  signed int v23; // ecx@15
  class_Unit *_Defence_Unit; // ecx@21
  class_Unit *_Defence_Unit2; // ecx@24
  int v26; // edx@25
  class_Unit *v28; // ecx@38
  int v29; // eax@40
  int v30; // esi@43
  class_Unit *v31; // esi@66
  signed int v32; // eax@66
  int v33; // eax@66
  class_Unit *v34; // esi@66
  signed int v35; // eax@66
  char v36; // bl@69
  int v37; // edi@69
  int v38; // esi@69
  class_Unit *v39; // ebx@74
  class_Unit *v40; // esi@90
  char v41; // al@109
  int v42; // eax@120
  int v43; // ecx@120
  int v44; // eax@126
  class_Unit *v45; // eax@131
  class_Tile *v46; // eax@132
  class_Unit *v47; // edx@132
  int v48; // esi@132
  int _Defence_Y; // edi@132
  int _Defence_X; // ebx@132
  __int16 v51; // ax@132
  class_City *_Defence_City; // eax@132
  class_Unit *v53; // ecx@134
  int v54; // edx@134
  char *v55; // ecx@137
  unsigned int v56; // edx@139
  const char *v57; // eax@140
  class_Unit *v58; // eax@141
  int v59; // ecx@141
  unsigned int v60; // ecx@144
  class_Tile *v61; // eax@147
  class_Unit *v62; // edx@147
  int v63; // esi@147
  int v64; // edi@147
  int v65; // ebx@147
  __int16 v66; // ax@147
  class_City *v67; // eax@147
  char *v68; // edx@149
  class_Unit *v69; // ecx@151
  int v70; // ecx@152
  char *v71; // ecx@155
  class_Unit *v72; // eax@157
  int v73; // eax@158
  const char *v74; // eax@161
  DWORD v75; // edi@171
  char v76; // al@171
  int v77; // ebx@171
  int v78; // ecx@171
  int v79; // edx@171
  signed int v80; // esi@171
  int v81; // edx@176
  int v82; // esi@177
  int v83; // edi@181
  int v84; // ecx@182
  int v85; // ecx@184
  int v86; // eax@187
  DWORD v87; // ebx@191
  int v88; // edi@191
  char v89; // al@191
  int v90; // ecx@191
  int v91; // edx@191
  signed int v92; // esi@191
  int v93; // edx@196
  int v94; // esi@197
  int v95; // edi@201
  int v96; // ecx@202
  int v97; // ecx@204
  int v98; // eax@207
  bool v99; // al@209
  class_Unit *v100; // ecx@209
  class_Tile *v101; // eax@216
  char v102; // al@216
  class_Unit *v103; // esi@220
  int v104; // eax@221
  int v105; // eax@224
  class_Tile *v106; // eax@235
  char v107; // al@235
  int v108; // eax@248
  class_Unit *v109; // eax@253
  class_Tile *v110; // eax@254
  int v111; // esi@254
  int v112; // edi@254
  int v113; // ebx@254
  __int16 v114; // ax@254
  class_City *v115; // eax@254
  char *v116; // edx@256
  class_Unit *v117; // ecx@258
  int v118; // ecx@259
  unsigned int v119; // edx@261
  const char *v120; // eax@262
  char *v121; // ecx@263
  class_Unit *v122; // eax@265
  unsigned int v123; // ecx@266
  class_Tile *v124; // eax@269
  int v125; // esi@269
  int v126; // edi@269
  int v127; // ebx@269
  __int16 v128; // ax@269
  class_City *v129; // eax@269
  class_Unit *v130; // ecx@271
  int v131; // edx@271
  char *v132; // ecx@274
  class_Unit *v133; // eax@277
  int v134; // ecx@277
  char *v135; // eax@280
  const char *v136; // eax@283
  class_Unit *v137; // eax@292
  DWORD v138; // edi@295
  char v139; // al@295
  int v140; // ebx@295
  int v141; // ecx@295
  int v142; // edx@295
  signed int v143; // esi@295
  int v144; // edx@300
  int v145; // esi@301
  int v146; // edi@305
  int v147; // ecx@306
  int v148; // ecx@308
  int v149; // eax@311
  DWORD v150; // ebx@315
  int v151; // edi@315
  char v152; // al@315
  int v153; // ecx@315
  int v154; // edx@315
  signed int v155; // esi@315
  int v156; // edx@320
  int v157; // esi@321
  int v158; // edi@325
  int v159; // ecx@326
  bool v160; // al@333
  class_Unit *v161; // ecx@333
  int v162; // eax@347
  int v163; // eax@350
  int v164; // eax@378
  signed int v165; // eax@381
  char *v166; // [sp-Ch] [bp-30Ch]@139
  char *v167; // [sp-Ch] [bp-30Ch]@261
  char *v168; // [sp-8h] [bp-308h]@139
  char *v169; // [sp-8h] [bp-308h]@144
  char *v170; // [sp-8h] [bp-308h]@261
  int v171; // [sp-8h] [bp-308h]@266
  int v172; // [sp-4h] [bp-304h]@139
  char *v173; // [sp-4h] [bp-304h]@144
  int v174; // [sp-4h] [bp-304h]@261
  char *v175; // [sp-4h] [bp-304h]@266
  int v176; // [sp+0h] [bp-300h]@0
  bool v177; // [sp+10h] [bp-2F0h]@1
  char v178; // [sp+11h] [bp-2EFh]@1
  char v179; // [sp+12h] [bp-2EEh]@1
  char v180; // [sp+13h] [bp-2EDh]@1
  class_Unit *_Unit; // [sp+14h] [bp-2ECh]@66
  class_Unit *_Target_Unit; // [sp+18h] [bp-2E8h]@66
  DWORD v183; // [sp+1Ch] [bp-2E4h]@171
  class_Unit *v184; // [sp+1Ch] [bp-2E4h]@191
  class_Unit *v185; // [sp+1Ch] [bp-2E4h]@315
  char v186; // [sp+22h] [bp-2DEh]@66
  char v187; // [sp+23h] [bp-2DDh]@1
  int v188; // [sp+24h] [bp-2DCh]@195
  int v189; // [sp+24h] [bp-2DCh]@319
  int v190; // [sp+28h] [bp-2D8h]@191
  DWORD v191; // [sp+28h] [bp-2D8h]@295
  int v192; // [sp+28h] [bp-2D8h]@315
  int a2; // [sp+2Ch] [bp-2D4h]@0
  int v194; // [sp+30h] [bp-2D0h]@66
  int v195; // [sp+34h] [bp-2CCh]@66
  int v196; // [sp+38h] [bp-2C8h]@66
  class_PCX_Image _PCX; // [sp+3Ch] [bp-2C4h]@1
  int v198; // [sp+2FCh] [bp-4h]@1

  _this = this;
  class_PCX_Image::ctor(&_PCX);
  v198 = 0;
  v179 = 0;
  v177 = 0;
  v187 = 0;
  v180 = 0;
  v178 = 0;
  if ( f_Is_Net_Game() && sub_5B2530(Attack_Unit->Body.field_210) )
  {
    if ( f_Is_Net_Game() )
    {
      v5 = sub_5B2530(Attack_Unit->Body.field_210);
      class_Combat_Controller::Init_Combat_Net(_this, Attack_Unit, v5, Attack_Direction);
    }
  }
  else
  {
    class_Combat_Controller::Init_Combat(_this, Attack_Unit, Attack_Direction, a4);
    v177 = 1;
    v187 = 1;
    if ( f_Is_Net_Game() )
    {
      v6 = _this->Defence_Unit;
      if ( v6 )
      {
        if ( v6->Body.CivID == Main_Screen_Form.Player_CivID
          && !class_Main_Screen_Form::Check_Unit_Coordinates(&Main_Screen_Form, v6, 0, 0) )
        {
          CurrentString = 0;
          v7 = class_Map::GetTile(
                 &BIC_Data.Map,
                 ((_this->Defence_Unit->Body.X >> 1) + _this->Defence_Unit->Body.Y * (BIC_Data.Map.Width >> 1)));
          v8 = _this->Defence_Unit;
          v9 = v8->Body.CivID;
          v10 = v8->Body.Y;
          v11 = v8->Body.X;
          v12 = v7->vtable->m46_Get_ContinentID(v7);
          v13 = f_Find_Nearest_City(v11, v10, v9, v12, -1, -1, 0);
          if ( v13 && dword_9C34A8 < 6 )
          {
            v14 = v13->Body.CityName;
            v15 = class_Labels_Collection::Get_Label(&Labels_Collection, Label_String_Pointers[41]);// Our units have been attacked near city
            sprintf(&CurrentString, v15, v14);
          }
          else
          {
            v16 = class_Labels_Collection::Get_Label(&Labels_Collection, Label_String_Pointers[40]);// Our units have been attacked
            v17 = -1;
            do
            {
              if ( !v17 )
                break;
              v18 = *v16++ == 0;
              --v17;
            }
            while ( !v18 );
            v19 = ~v17;
            v20 = (v16 - v19);
            v21 = v19;
            v22 = &CurrentString;
            v23 = -1;
            do
            {
              if ( !v23 )
                break;
              v18 = *v22++ == 0;
              --v23;
            }
            while ( !v18 );
            memcpy((v22 - 1), v20, v21);
          }
          class_Main_GUI::f12(
            &Main_Screen_Form.GUI,
            &CurrentString,
            _this->Attack_Unit->Body.X,
            _this->Attack_Unit->Body.Y);
          f_Play_Sound(47);
        }
      }
    }
    if ( f_Is_Net_Game() )
    {
      class_Unit::f81(_this->Attack_Unit, _this->Attack_X, _this->Attack_Y, 1, 1);
      _Defence_Unit = _this->Defence_Unit;
      if ( _Defence_Unit )
        class_Unit::f81(_Defence_Unit, _this->Defence_X, _this->Defence_Y, 1, 1);
    }
  }
  if ( f_Is_Net_Game() )
  {
    _Defence_Unit2 = _this->Defence_Unit;
    if ( _Defence_Unit2 )
    {
      v26 = _Defence_Unit2->Body.CivID;
      if ( _this->Attack_Unit->Body.CivID == v26
        || _this->Attack_Unit->Body.field_210[10] != v26
        && !class_Unit::Check_Ability(_Defence_Unit2, 17)
        && !class_Unit::Check_Ability(_this->Attack_Unit, 17) )
      {
        if ( !((1 << Civilizations[_this->Attack_Unit->Body.CivID].ID) & Global_Civ_Flags2)
          && _this->Attack_Unit->Body.CivID == _this->Defence_Unit->Body.CivID )
        {
          if ( sub_47B5D0(v176) )
            class_Net_Game_Data::Move_Unit(&Net_Game_Data, _this, _this->Attack_Unit, Attack_Direction);
        }
        class_Unit::f78(_this->Attack_Unit, 1);
LABEL_56:
        v198 = -1;
        class_PCX_Image::Dispose(&_PCX);
        return 0;
      }
    }
  }
  if ( !_this->Defence_Unit )
  {
    v198 = -1;
    class_PCX_Image::Dispose(&_PCX);
    return 1;
  }
  _this->Attack_Unit->Body.Status |= 4u;
  if ( f_Is_Net_Game() )
  {
    class_Net_Game_Data::f5(&Net_Game_Data, _this->Attack_Unit->Body.ID);
    class_Net_Game_Data::f5(&Net_Game_Data, _this->Defence_Unit->Body.ID);
  }
  v28 = _this->Defence_Unit;
  if ( v28->Body.UnitState == 1 )
  {
    a2 = 7;
  }
  else
  {
    v29 = v28->Body.UnitState;
    if ( v29 != 1 && v29 != 15 )
    {
      class_Unit::Set_Unit_State(v28, 0);
      a2 = 1;
    }
  }
  v30 = class_Unit::f80(_this->Attack_Unit, _this->Defence_Unit);
  if ( v30 && v177 && !LOBYTE(_this->Attack_Unit->Body.field_210[6]) )
  {
    if ( f_Is_Net_Game() )
    {
      class_Net_Game_Data::f6(&Net_Game_Data, *(v30 + 32), _this->Attack_Unit->Body.ID);
    }
    else
    {
      if ( BYTE2(_this->V02) )
      {
        LOBYTE(_this->Defence_Unit->Body.field_1B0[4]) = 0;
        *(v30 + 476) = 1;
        class_Main_Scree_Data_1AD4::f6(&Main_Screen_Form.Data_1AD4);
        if ( f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
          sub_5C7E90(v30, _this->V04);
        else
          Sleep(0xFAu);
        *(v30 + 476) = 0;
        LOBYTE(_this->Defence_Unit->Body.field_1B0[4]) = 1;
        class_Main_Scree_Data_1AD4::f6(&Main_Screen_Form.Data_1AD4);
      }
      sub_4A3310(v30, _this->Attack_Unit);
    }
  }
  if ( f_Is_Net_Game() && LOBYTE(_this->Attack_Unit->Body.field_210[6]) )
    goto LABEL_56;
  if ( BYTE2(_this->V02) )
  {
    if ( !f_Is_Net_Game() )
      class_Main_Scree_Form::f7(&Main_Screen_Form, _this->Defence_X, _this->Defence_Y);
    LOBYTE(Main_Screen_Form.Data_1AD4.field_18E4[13]) = 1;
    if ( class_Unit::Check_Ability(_this->Attack_Unit, 18) )
      _this->Attack_Unit->Body.Animation.struct_48.Direction = _this->Attack_Direction;
    if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
      _this->Defence_Unit->Body.Animation.struct_48.Direction = _this->V04;
    if ( f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
    {
      struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 3);
      struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 3);
    }
  }
  v31 = _this->Attack_Unit;
  v32 = class_Unit::Get_Default_Hit_Points(_this->Attack_Unit);
  v33 = f_BoundValue(v32 - v31->Body.Damage, 0, 9999);
  v34 = _this->Defence_Unit;
  v195 = v33;
  v35 = class_Unit::Get_Default_Hit_Points(_this->Defence_Unit);
  v196 = f_BoundValue(v35 - v34->Body.Damage, 0, 9999);
  _Unit = 0;
  _Target_Unit = 0;
  v186 = 0;
  v194 = -1;
  do
  {
    if ( f_Is_Net_Game() )
    {
      v178 = 1;
      class_Combat_Controller::f4(_this->Attack_Unit->Body.field_210, _this->Defence_Unit);
      class_Combat_Controller::f4(_this->Defence_Unit->Body.field_210, _this->Attack_Unit);
      class_Unit::f78(_this->Attack_Unit, 0);
      class_Unit::f78(_this->Defence_Unit, 0);
    }
    v36 = 0;
    v37 = class_Unit::f79(_this->Attack_Unit, v195, 1);
    v38 = class_Unit::f79(_this->Defence_Unit, v196, 0);
    if ( v38 != _Target_Unit )
    {
      if ( BYTE2(_this->V02) )
      {
        if ( _Unit && f_Process_2_Units(_Unit, _Target_Unit, 1) )
          struct_188_48::f1_set_field_8(&_Unit->Body.Animation.struct_48, 1);
        v39 = class_Unit::Get_Army_Container(v38);
        if ( _Target_Unit )
        {
          if ( f_Is_Net_Game() )
            v39->Body.field_1B0[1] = *(v38 + 32);
          _Target_Unit->Body.Animation.struct_48.Direction = _this->Attack_Direction;
          if ( !f_Is_Net_Game() )
            class_Main_Screen_Data_1AD4::f1(&Main_Screen_Form.Data_1AD4, 100, 0);
          if ( f_Is_Net_Game() )
            goto LABEL_83;
          goto LABEL_82;
        }
        if ( v39 )
        {
LABEL_82:
          v39->Body.field_1B0[1] = *(v38 + 32);
          goto LABEL_83;
        }
      }
LABEL_83:
      _Target_Unit = v38;
      v36 = 1;
    }
    if ( v37 == _Unit )
    {
      if ( !v36 )
        goto LABEL_105;
      goto LABEL_101;
    }
    if ( BYTE2(_this->V02) )
    {
      if ( _Target_Unit && f_Process_2_Units(_Unit, _Target_Unit, 1) && !f_Is_Net_Game() )
        struct_188_48::f1_set_field_8(&_Target_Unit->Body.Animation.struct_48, 1);
      v40 = class_Unit::Get_Army_Container(v37);
      if ( _Unit )
      {
        if ( f_Is_Net_Game() )
          v40->Body.field_1B0[1] = *(v37 + 32);
        class_Combat_Controller::f1(_this, _Unit);
        if ( !f_Is_Net_Game() )
          class_Main_Screen_Data_1AD4::f1(&Main_Screen_Form.Data_1AD4, 200, 0);
        if ( !f_Is_Net_Game() )
          v40->Body.field_1B0[1] = *(v37 + 32);
      }
      else
      {
        if ( v40 )
        {
          _Unit = v37;
          v40->Body.field_1B0[1] = *(v37 + 32);
          goto LABEL_101;
        }
      }
    }
    _Unit = v37;
LABEL_101:
    if ( BYTE2(_this->V02) && v187 )
    {
      class_Combat_Controller::f3(_this, _Unit, _Target_Unit);
      v177 = 1;
    }
    v194 = class_Unit::f28(_Unit, _Target_Unit, 0, 0);
LABEL_105:
    if ( BYTE2(_this->V02) && !f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) && !f_Is_Net_Game() )
    {
      Sleep(0xFAu);
      class_Main_Screen_Data_1AD4::f4(&Main_Screen_Form.Data_1AD4);
    }
    v18 = class_Random::Get_Random(&Random_1, 0x400u) < v194;
    v41 = BYTE2(_this->V02);
    if ( v18 )
    {
      if ( v41 && f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) && !v177 )
      {
        if ( !f_Is_Net_Game() )
          class_Main_Screen_Data_1AD4::f1(&Main_Screen_Form.Data_1AD4, 650, 0);
        v177 = 1;
      }
      _this->Attack_Unit->Body.Damage = (_this->Attack_Unit->Body.Damage + 1) & ((_this->Attack_Unit->Body.Damage + 1 < 0)
                                                                               - 1);
      v108 = class_Unit::Get_Default_Hit_Points(_this->Attack_Unit) - _this->Attack_Unit->Body.Damage;
      if ( v108 < 0 || v108 <= 9999 && !v108 )
      {
        if ( f_Is_Net_Game() )
        {
          if ( !class_Main_Screen_Form::Check_Unit_Coordinates(&Main_Screen_Form, _this->Attack_Unit, 0, 0) )
          {
            v109 = _this->Attack_Unit;
            if ( _this->Defence_Unit->Body.CivID == Main_Screen_Form.Player_CivID )
            {
              v110 = class_Map::GetTile(&BIC_Data.Map, ((v109->Body.X >> 1) + v109->Body.Y * (BIC_Data.Map.Width >> 1)));
              v111 = _this->Attack_Unit->Body.CivID;
              v112 = _this->Attack_Unit->Body.Y;
              v113 = _this->Attack_Unit->Body.X;
              v114 = v110->vtable->m46_Get_ContinentID(v110);
              v115 = f_Find_Nearest_City(v113, v112, v111, v114, -1, -1, 0);
              if ( v115 && dword_9C34A8 < 6 )
              {
                v116 = &_this->Attack_Unit->Body.Custom_Name;
                if ( !_this->Attack_Unit->Body.Custom_Name.S[0] )
                  v116 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
                v117 = _this->Defence_Unit;
                if ( v117->Body.Custom_Name.S[0] )
                  v118 = &v117->Body.Custom_Name;
                else
                  v118 = BIC_Data.UnitTypes[v117->Body.UnitTypeID].Name;
                v174 = v115->Body.CityName;
                v170 = v116;
                v167 = v118;
                v119 = Label_String_Pointers[15];// Our unit defeated target unit near city
                goto LABEL_262;
              }
              v121 = &_this->Attack_Unit->Body.Custom_Name;
              if ( !_this->Attack_Unit->Body.Custom_Name.S[0] )
                v121 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
              v122 = _this->Defence_Unit;
              if ( v122->Body.Custom_Name.S[0] )
              {
                v175 = v121;
                v171 = &v122->Body.Custom_Name;
                v123 = Label_String_Pointers[16];// Our unit defeated target unit
              }
              else
              {
                v175 = v121;
                v171 = BIC_Data.UnitTypes[v122->Body.UnitTypeID].Name;
                v123 = Label_String_Pointers[16];// Our unit defeated target unit
              }
LABEL_283:
              v136 = class_Labels_Collection::Get_Label(&Labels_Collection, v123);
              sprintf(&CurrentString, v136, v171, v175);
              goto LABEL_284;
            }
            if ( v109->Body.CivID == Main_Screen_Form.Player_CivID )
            {
              v124 = class_Map::GetTile(&BIC_Data.Map, ((v109->Body.X >> 1) + v109->Body.Y * (BIC_Data.Map.Width >> 1)));
              v125 = _this->Attack_Unit->Body.CivID;
              v126 = _this->Attack_Unit->Body.Y;
              v127 = _this->Attack_Unit->Body.X;
              v128 = v124->vtable->m46_Get_ContinentID(v124);
              v129 = f_Find_Nearest_City(v127, v126, v125, v128, -1, -1, 0);
              if ( !v129 || dword_9C34A8 >= 6 )
              {
                v133 = _this->Defence_Unit;
                v134 = &v133->Body.Custom_Name;
                if ( !v133->Body.Custom_Name.S[0] )
                  v134 = BIC_Data.UnitTypes[v133->Body.UnitTypeID].Name;
                if ( _this->Attack_Unit->Body.Custom_Name.S[0] )
                  v135 = &_this->Attack_Unit->Body.Custom_Name;
                else
                  v135 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
                v175 = v134;
                v171 = v135;
                v123 = Label_String_Pointers[18];// Out unit has been defeated by target unit
                goto LABEL_283;
              }
              v130 = _this->Defence_Unit;
              v131 = &v130->Body.Custom_Name;
              if ( !v130->Body.Custom_Name.S[0] )
                v131 = BIC_Data.UnitTypes[v130->Body.UnitTypeID].Name;
              if ( _this->Attack_Unit->Body.Custom_Name.S[0] )
                v132 = &_this->Attack_Unit->Body.Custom_Name;
              else
                v132 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
              v174 = v129->Body.CityName;
              v170 = v131;
              v167 = v132;
              v119 = Label_String_Pointers[17]; // Out unit has been defeated by target unit near city
LABEL_262:
              v120 = class_Labels_Collection::Get_Label(&Labels_Collection, v119);
              sprintf(&CurrentString, v120, v167, v170, v174);
LABEL_284:
              class_Main_GUI::f12(
                &Main_Screen_Form.GUI,
                &CurrentString,
                _this->Attack_Unit->Body.X,
                _this->Attack_Unit->Body.Y);
            }
          }
          class_Combat_Controller::f4(_this->Attack_Unit->Body.field_210, 0);
          class_Combat_Controller::f4(_this->Defence_Unit->Body.field_210, 0);
          class_Unit::f78(_this->Attack_Unit, 1);
          class_Unit::f78(_this->Defence_Unit, 1);
          struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 1);
          if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
            struct_188_48::f1_set_field_8(&_Target_Unit->Body.Animation.struct_48, 1);
        }
        v179 = 1;
        if ( BYTE2(_this->V02) && f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
        {
          struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 1);
          if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
            struct_188_48::f1_set_field_8(&_Target_Unit->Body.Animation.struct_48, 1);
          if ( f_Is_Net_Game() )
          {
            v137 = _this->Defence_Unit;
            if ( v137->Body.UnitState == 1 && BYTE1(v137->Body.Animation.field_100[4]) )
            {
              v137->Body.Animation.struct_48.Direction = 3;
              struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 7);
            }
            v138 = timeGetTime();
            v139 = 0;
            v140 = 0;
            v191 = v138;
            v141 = 0;
            v142 = dword_785188;
            v143 = 8192;
            do
            {
              if ( *v142 )
                v140 = v141 + 1;
              ++v141;
              v142 += 4;
              --v143;
            }
            while ( v143 );
            if ( _Unit )
            {
              v144 = 0;
              if ( v140 <= 0 )
              {
LABEL_311:
                v149 = _Unit->Body.ID;
                dword_757188[v144] = 6;
                dword_74F188[v144] = v149;
                dword_75F188[v144] = -1;
                byte_767188[v144] = 0;
                byte_769188[v144] = 0;
                dword_76B188[v144] = -1;
                dword_773188[v144] = -1;
                dword_77B188[v144] = -1;
                byte_783188[v144] = 0;
                dword_785188[v144] = v138;
                dword_7BD18C[v144] = -1;
              }
              else
              {
                v145 = dword_757188;
                while ( !v139 )
                {
                  if ( !byte_74D188[v144] && v138 < *(v145 + 188416) )
                  {
                    v146 = v140;
                    if ( v140 > v144 )
                    {
                      v147 = 4 * v140 + 7664008;
                      do
                      {
                        --v146;
                        *v147 = *(v147 - 4);
                        *(v147 + 32768) = *(v147 + 32764);
                        *(v147 + 65536) = *(v147 + 65532);
                        byte_767189[v146] = byte_767188[v146];
                        byte_769189[v146] = byte_769188[v146];
                        *(v147 + 147456) = *(v147 + 147452);
                        *(v147 + 180224) = *(v147 + 180220);
                        byte_783189[v146] = byte_783188[v146];
                        *(v147 + 221184) = *(v147 + 221180);
                        *(v147 + 450564) = *(v147 + 450560);
                        v147 -= 4;
                      }
                      while ( v146 > v144 );
                    }
                    v148 = _Unit->Body.ID;
                    *v145 = 6;
                    *(v145 - 32768) = v148;
                    *(v145 + 32768) = -1;
                    byte_767188[v144] = 0;
                    byte_769188[v144] = 0;
                    *(v145 + 81920) = -1;
                    *(v145 + 114688) = -1;
                    *(v145 + 147456) = -1;
                    byte_783188[v144] = 0;
                    *(v145 + 188416) = v191;
                    *(v145 + 417796) = -1;
                    v139 = 1;
                    v138 = v191;
                  }
                  ++v144;
                  v145 += 4;
                  if ( v144 >= v140 )
                  {
                    if ( v139 )
                      break;
                    goto LABEL_311;
                  }
                }
              }
            }
          }
          else
          {
            class_Main_Screen_Data_1AD4::f5(&Main_Screen_Form.Data_1AD4, _Unit, 6, 0);
          }
          if ( class_Unit::Check_Ability(_this->Attack_Unit, 18) )
          {
            if ( f_Is_Net_Game() )
            {
              v192 = _this->Defence_Unit->Body.CivID;
              v150 = timeGetTime();
              v151 = 0;
              v185 = _this->Attack_Unit;
              v152 = 0;
              v153 = 0;
              v154 = dword_785188;
              v155 = 8192;
              do
              {
                if ( *v154 )
                  v151 = v153 + 1;
                ++v153;
                v154 += 4;
                --v155;
              }
              while ( v155 );
              v189 = v151;
              if ( v185 )
              {
                v156 = 0;
                if ( v151 <= 0 )
                {
LABEL_331:
                  dword_74F188[v156] = v185->Body.ID;
                  dword_757188[v156] = 6;
                  dword_75F188[v156] = v192;
                  byte_767188[v156] = 0;
                  byte_769188[v156] = 0;
                  dword_76B188[v156] = -1;
                  dword_773188[v156] = -1;
                  dword_77B188[v156] = -1;
                  byte_783188[v156] = 0;
                  dword_785188[v156] = v150;
                  dword_7BD18C[v156] = -1;
                }
                else
                {
                  v157 = dword_757188;
                  while ( !v152 )
                  {
                    if ( !byte_74D188[v156] && v150 < *(v157 + 188416) )
                    {
                      v158 = v189;
                      if ( v189 > v156 )
                      {
                        v159 = 4 * v189 + 7664008;
                        do
                        {
                          --v158;
                          *v159 = *(v159 - 4);
                          *(v159 + 32768) = *(v159 + 32764);
                          *(v159 + 65536) = *(v159 + 65532);
                          byte_767189[v158] = byte_767188[v158];
                          byte_769189[v158] = byte_769188[v158];
                          *(v159 + 147456) = *(v159 + 147452);
                          *(v159 + 180224) = *(v159 + 180220);
                          byte_783189[v158] = byte_783188[v158];
                          *(v159 + 221184) = *(v159 + 221180);
                          *(v159 + 450564) = *(v159 + 450560);
                          v159 -= 4;
                        }
                        while ( v158 > v156 );
                      }
                      v151 = v189;
                      *(v157 - 32768) = v185->Body.ID;
                      *v157 = 6;
                      *(v157 + 32768) = v192;
                      byte_767188[v156] = 0;
                      byte_769188[v156] = 0;
                      *(v157 + 81920) = -1;
                      *(v157 + 114688) = -1;
                      *(v157 + 147456) = -1;
                      byte_783188[v156] = 0;
                      *(v157 + 188416) = v150;
                      *(v157 + 417796) = -1;
                      v152 = 1;
                    }
                    ++v156;
                    v157 += 4;
                    if ( v156 >= v151 )
                    {
                      if ( v152 )
                        break;
                      goto LABEL_331;
                    }
                  }
                }
              }
            }
            else
            {
              class_Main_Screen_Data_1AD4::f5(&Main_Screen_Form.Data_1AD4, _this->Attack_Unit, 6, 0);
            }
          }
        }
        class_Unit::Process_Combat_Victory(_Target_Unit, _Unit, 0);
        v160 = f_Is_Net_Game();
        v161 = _this->Attack_Unit;
        if ( v160 )
          class_Net_Game_Data::f7(&Net_Game_Data, v161->Body.ID, _this->Defence_Unit->Body.CivID, 0, 0, 0, 0);
        else
          class_Unit::Delete(v161, _this->Defence_Unit->Body.CivID, 0, 0, 0, 0, 0, 0);
        if ( BYTE2(_this->V02) && !f_Is_Net_Game() && f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
        {
          if ( a2 == 7 )
            _this->Defence_Unit->Body.Animation.struct_48.Direction = 3;
          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, a2);
          if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
          {
            if ( a2 == 7 )
              _Target_Unit->Body.Animation.struct_48.Direction = 3;
            struct_188_48::f1_set_field_8(&_Target_Unit->Body.Animation.struct_48, a2);
          }
        }
LABEL_369:
        v180 = 0;
LABEL_370:
        v178 = 1;
        goto LABEL_371;
      }
      if ( BYTE1(_this->V02) )
      {
        if ( _this->Attack_Unit->Body.CivID )
        {
          v162 = class_Unit::Get_Default_Hit_Points(_this->Attack_Unit) - _this->Attack_Unit->Body.Damage;
          if ( v162 >= 0 )
          {
            if ( v162 <= 9999 )
            {
              if ( v162 == 1 )
              {
                v163 = class_Unit::Get_Default_Hit_Points(_this->Defence_Unit) - _this->Defence_Unit->Body.Damage;
                if ( v163 >= 0 )
                {
                  if ( v163 > 9999 || v163 > 1 )
                  {
                    if ( class_Random::Get_Random(// Cavalry retreats
                           &Random_1,
                           BIC_Data.CombatExperience[_this->Defence_Unit->Body.Combat_Experience].Retreat_Bonus + 50) < BIC_Data.CombatExperience[_this->Attack_Unit->Body.Combat_Experience].Retreat_Bonus )
                    {
                      v179 = 1;
                      if ( BYTE2(_this->V02) || f_Is_Net_Game() )
                      {
                        if ( f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) && !f_Is_Net_Game() )
                        {
                          struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
                          if ( a2 == 7 )
                            _this->Defence_Unit->Body.Animation.struct_48.Direction = 3;
                          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, a2);
                          if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
                          {
                            if ( a2 == 7 )
                              _Target_Unit->Body.Animation.struct_48.Direction = 3;
                            struct_188_48::f1_set_field_8(&_Target_Unit->Body.Animation.struct_48, a2);
                          }
                        }
                        class_Combat_Controller::f1(_this, _Unit);
                      }
                      class_Leader::f56(
                        &Civilizations[_this->Defence_Unit->Body.CivID],
                        _this->Attack_Unit->Body.CivID,
                        1);
                      if ( f_Is_Net_Game() )
                      {
                        struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
                        struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 1);
                        if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
                          struct_188_48::f1_set_field_8(&_Target_Unit->Body.Animation.struct_48, 1);
                        class_Combat_Controller::f4(_this->Attack_Unit->Body.field_210, 0);
                        class_Combat_Controller::f4(_this->Defence_Unit->Body.field_210, 0);
                        class_Unit::f78(_this->Attack_Unit, 1);
                        class_Unit::f78(_this->Defence_Unit, 1);
                      }
                      goto LABEL_369;
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
      if ( v41 && f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) && v177 )
      {
        if ( !f_Is_Net_Game() )
          class_Main_Screen_Data_1AD4::f1(&Main_Screen_Form.Data_1AD4, 650, 0);
        v177 = 0;
      }
      _this->Defence_Unit->Body.Damage = (_this->Defence_Unit->Body.Damage + 1) & ((_this->Defence_Unit->Body.Damage + 1 < 0)
                                                                                 - 1);
      if ( !v186 )
      {
        if ( BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Bombard_Strength > 0 )
        {
          if ( BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Special_Actions & 0x10080000 )
          {
            if ( class_Unit::Get_Unit_Total_Attack(_this->Attack_Unit) <= 0
              || (v42 = _this->Defence_X, v43 = _this->Defence_Y, v42 >= 0)
              && v42 < BIC_Data.Map.Width
              && v43 >= 0
              && v43 < BIC_Data.Map.Height
              && f_Get_City_by_XY(v42, _this->Defence_Y) )
              v186 = class_Unit::f82(_this->Attack_Unit, _this->Defence_Unit);
          }
        }
      }
      v44 = class_Unit::Get_Default_Hit_Points(_this->Defence_Unit) - _this->Defence_Unit->Body.Damage;
      if ( v44 < 0 || v44 <= 9999 && !v44 )
      {
        if ( f_Is_Net_Game() )
        {
          if ( !class_Main_Screen_Form::Check_Unit_Coordinates(&Main_Screen_Form, _this->Defence_Unit, 0, 0) )
          {
            v45 = _this->Defence_Unit;
            if ( _this->Attack_Unit->Body.CivID == Main_Screen_Form.Player_CivID )
            {
              v46 = class_Map::GetTile(&BIC_Data.Map, ((v45->Body.X >> 1) + v45->Body.Y * (BIC_Data.Map.Width >> 1)));
              v47 = _this->Defence_Unit;
              v48 = v47->Body.CivID;
              _Defence_Y = v47->Body.Y;
              _Defence_X = v47->Body.X;
              v51 = v46->vtable->m46_Get_ContinentID(v46);
              _Defence_City = f_Find_Nearest_City(_Defence_X, _Defence_Y, v48, v51, -1, -1, 0);
              if ( _Defence_City && dword_9C34A8 < 6 )
              {
                v53 = _this->Defence_Unit;
                v54 = &v53->Body.Custom_Name;
                if ( !v53->Body.Custom_Name.S[0] )
                  v54 = BIC_Data.UnitTypes[v53->Body.UnitTypeID].Name;
                if ( _this->Attack_Unit->Body.Custom_Name.S[0] )
                  v55 = &_this->Attack_Unit->Body.Custom_Name;
                else
                  v55 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
                v172 = _Defence_City->Body.CityName;
                v168 = v54;
                v166 = v55;
                v56 = Label_String_Pointers[15];// Our unit defeated target unit near city
                goto LABEL_140;
              }
              v58 = _this->Defence_Unit;
              v59 = &v58->Body.Custom_Name;
              if ( !v58->Body.Custom_Name.S[0] )
                v59 = BIC_Data.UnitTypes[v58->Body.UnitTypeID].Name;
              if ( _this->Attack_Unit->Body.Custom_Name.S[0] )
              {
                v173 = v59;
                v169 = &_this->Attack_Unit->Body.Custom_Name;
                v60 = Label_String_Pointers[16];// Our unit defeated target unit
              }
              else
              {
                v173 = v59;
                v169 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
                v60 = Label_String_Pointers[16];// Our unit defeated target unit
              }
LABEL_161:
              v74 = class_Labels_Collection::Get_Label(&Labels_Collection, v60);
              sprintf(&CurrentString, v74, v169, v173);
              goto LABEL_162;
            }
            if ( v45->Body.CivID == Main_Screen_Form.Player_CivID )
            {
              v61 = class_Map::GetTile(&BIC_Data.Map, ((v45->Body.X >> 1) + v45->Body.Y * (BIC_Data.Map.Width >> 1)));
              v62 = _this->Defence_Unit;
              v63 = v62->Body.CivID;
              v64 = v62->Body.Y;
              v65 = v62->Body.X;
              v66 = v61->vtable->m46_Get_ContinentID(v61);
              v67 = f_Find_Nearest_City(v65, v64, v63, v66, -1, -1, 0);
              if ( !v67 || dword_9C34A8 >= 6 )
              {
                v71 = &_this->Attack_Unit->Body.Custom_Name;
                if ( !_this->Attack_Unit->Body.Custom_Name.S[0] )
                  v71 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
                v72 = _this->Defence_Unit;
                if ( v72->Body.Custom_Name.S[0] )
                  v73 = &v72->Body.Custom_Name;
                else
                  v73 = BIC_Data.UnitTypes[v72->Body.UnitTypeID].Name;
                v173 = v71;
                v169 = v73;
                v60 = Label_String_Pointers[18];// Out unit has been defeated by target unit
                goto LABEL_161;
              }
              v68 = &_this->Attack_Unit->Body.Custom_Name;
              if ( !_this->Attack_Unit->Body.Custom_Name.S[0] )
                v68 = BIC_Data.UnitTypes[_this->Attack_Unit->Body.UnitTypeID].Name;
              v69 = _this->Defence_Unit;
              if ( v69->Body.Custom_Name.S[0] )
                v70 = &v69->Body.Custom_Name;
              else
                v70 = BIC_Data.UnitTypes[v69->Body.UnitTypeID].Name;
              v172 = v67->Body.CityName;
              v168 = v68;
              v166 = v70;
              v56 = Label_String_Pointers[17];  // Out unit has been defeated by target unit near city
LABEL_140:
              v57 = class_Labels_Collection::Get_Label(&Labels_Collection, v56);
              sprintf(&CurrentString, v57, v166, v168, v172);
LABEL_162:
              class_Main_GUI::f12(
                &Main_Screen_Form.GUI,
                &CurrentString,
                _this->Defence_Unit->Body.X,
                _this->Defence_Unit->Body.Y);
            }
          }
          struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 1);
          if ( class_Unit::Check_Ability(_this->Attack_Unit, 18) )
            struct_188_48::f1_set_field_8(&_Unit->Body.Animation.struct_48, 1);
          class_Combat_Controller::f4(_this->Attack_Unit->Body.field_210, 0);
          class_Combat_Controller::f4(_this->Defence_Unit->Body.field_210, 0);
          class_Unit::f78(_this->Attack_Unit, 1);
          class_Unit::f78(_this->Defence_Unit, 1);
        }
        v179 = 1;
        if ( BYTE2(_this->V02) && f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
        {
          struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
          if ( class_Unit::Check_Ability(_this->Attack_Unit, 18) )
            struct_188_48::f1_set_field_8(&_Unit->Body.Animation.struct_48, 1);
          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 1);
          if ( f_Is_Net_Game() )
          {
            v75 = timeGetTime();
            v76 = 0;
            v77 = 0;
            v183 = v75;
            v78 = 0;
            v79 = dword_785188;
            v80 = 8192;
            do
            {
              if ( *v79 )
                v77 = v78 + 1;
              ++v78;
              v79 += 4;
              --v80;
            }
            while ( v80 );
            if ( _Target_Unit )
            {
              v81 = 0;
              if ( v77 <= 0 )
              {
LABEL_187:
                v86 = _Target_Unit->Body.ID;
                dword_757188[v81] = 6;
                dword_74F188[v81] = v86;
                dword_75F188[v81] = -1;
                byte_767188[v81] = 0;
                byte_769188[v81] = 0;
                dword_76B188[v81] = -1;
                dword_773188[v81] = -1;
                dword_77B188[v81] = -1;
                byte_783188[v81] = 0;
                dword_785188[v81] = v75;
                dword_7BD18C[v81] = -1;
              }
              else
              {
                v82 = dword_757188;
                while ( !v76 )
                {
                  if ( !byte_74D188[v81] && v75 < *(v82 + 188416) )
                  {
                    v83 = v77;
                    if ( v77 > v81 )
                    {
                      v84 = 4 * v77 + 7664008;
                      do
                      {
                        --v83;
                        *v84 = *(v84 - 4);
                        *(v84 + 32768) = *(v84 + 32764);
                        *(v84 + 65536) = *(v84 + 65532);
                        byte_767189[v83] = byte_767188[v83];
                        byte_769189[v83] = byte_769188[v83];
                        *(v84 + 147456) = *(v84 + 147452);
                        *(v84 + 180224) = *(v84 + 180220);
                        byte_783189[v83] = byte_783188[v83];
                        *(v84 + 221184) = *(v84 + 221180);
                        *(v84 + 450564) = *(v84 + 450560);
                        v84 -= 4;
                      }
                      while ( v83 > v81 );
                    }
                    v85 = _Target_Unit->Body.ID;
                    *v82 = 6;
                    *(v82 - 32768) = v85;
                    *(v82 + 32768) = -1;
                    byte_767188[v81] = 0;
                    byte_769188[v81] = 0;
                    *(v82 + 81920) = -1;
                    *(v82 + 114688) = -1;
                    *(v82 + 147456) = -1;
                    byte_783188[v81] = 0;
                    *(v82 + 417796) = -1;
                    *(v82 + 188416) = v183;
                    v76 = 1;
                    v75 = v183;
                  }
                  ++v81;
                  v82 += 4;
                  if ( v81 >= v77 )
                  {
                    if ( v76 )
                      break;
                    goto LABEL_187;
                  }
                }
              }
            }
          }
          else
          {
            class_Main_Screen_Data_1AD4::f5(&Main_Screen_Form.Data_1AD4, _Target_Unit, 6, 0);
          }
          if ( class_Unit::Check_Ability(_this->Defence_Unit, 18) )
          {
            if ( f_Is_Net_Game() )
            {
              v190 = _this->Attack_Unit->Body.CivID;
              v87 = timeGetTime();
              v88 = 0;
              v184 = _this->Defence_Unit;
              v89 = 0;
              v90 = 0;
              v91 = dword_785188;
              v92 = 8192;
              do
              {
                if ( *v91 )
                  v88 = v90 + 1;
                ++v90;
                v91 += 4;
                --v92;
              }
              while ( v92 );
              v188 = v88;
              if ( v184 )
              {
                v93 = 0;
                if ( v88 <= 0 )
                {
LABEL_207:
                  v98 = v184->Body.ID;
                  dword_757188[v93] = 6;
                  dword_74F188[v93] = v98;
                  dword_75F188[v93] = v190;
                  byte_767188[v93] = 0;
                  byte_769188[v93] = 0;
                  dword_76B188[v93] = -1;
                  dword_773188[v93] = -1;
                  dword_77B188[v93] = -1;
                  byte_783188[v93] = 0;
                  dword_785188[v93] = v87;
                  dword_7BD18C[v93] = -1;
                }
                else
                {
                  v94 = dword_757188;
                  while ( !v89 )
                  {
                    if ( !byte_74D188[v93] && v87 < *(v94 + 188416) )
                    {
                      v95 = v188;
                      if ( v188 > v93 )
                      {
                        v96 = 4 * v188 + 7664008;
                        do
                        {
                          --v95;
                          *v96 = *(v96 - 4);
                          *(v96 + 32768) = *(v96 + 32764);
                          *(v96 + 65536) = *(v96 + 65532);
                          byte_767189[v95] = byte_767188[v95];
                          byte_769189[v95] = byte_769188[v95];
                          *(v96 + 147456) = *(v96 + 147452);
                          *(v96 + 180224) = *(v96 + 180220);
                          byte_783189[v95] = byte_783188[v95];
                          *(v96 + 221184) = *(v96 + 221180);
                          *(v96 + 450564) = *(v96 + 450560);
                          v96 -= 4;
                        }
                        while ( v95 > v93 );
                      }
                      v88 = v188;
                      v97 = v184->Body.ID;
                      *(v94 + 32768) = v190;
                      *(v94 - 32768) = v97;
                      *v94 = 6;
                      byte_767188[v93] = 0;
                      byte_769188[v93] = 0;
                      *(v94 + 81920) = -1;
                      *(v94 + 114688) = -1;
                      *(v94 + 147456) = -1;
                      byte_783188[v93] = 0;
                      *(v94 + 417796) = -1;
                      *(v94 + 188416) = v87;
                      v89 = 1;
                    }
                    ++v93;
                    v94 += 4;
                    if ( v93 >= v88 )
                    {
                      if ( v89 )
                        break;
                      goto LABEL_207;
                    }
                  }
                }
              }
            }
            else
            {
              class_Main_Screen_Data_1AD4::f5(&Main_Screen_Form.Data_1AD4, _this->Defence_Unit, 6, 0);
            }
          }
        }
        class_Unit::Process_Combat_Victory(_Unit, _Target_Unit, 1);
        v99 = f_Is_Net_Game();
        v100 = _this->Defence_Unit;
        if ( v99 )
          class_Net_Game_Data::f7(&Net_Game_Data, v100->Body.ID, _this->Attack_Unit->Body.CivID, 0, 0, 0, 0);
        else
          class_Unit::Delete(v100, _this->Attack_Unit->Body.CivID, 0, 0, 0, 0, 0, 0);
        if ( BYTE2(_this->V02) || f_Is_Net_Game() )
        {
          if ( class_Unit::Check_Ability(_this->Attack_Unit, 18) && BYTE3(_this->V02)
            || (v101 = class_Map::GetTile(
                         &BIC_Data.Map,
                         ((_this->Defence_X >> 1) + _this->Defence_Y * (BIC_Data.Map.Width >> 1))),
                v102 = v101->vtable->m35_Check_Is_Water(v101),
                f_Get_Tile_Unit_Process_Data(_this->Defence_X, _this->Defence_Y, 6, -1, v102 != 0, -1) > 0) )
            class_Combat_Controller::f1(_this, _Unit);
        }
        v180 = 1;
        goto LABEL_370;
      }
      if ( LOBYTE(_this->V02) )
      {
        v103 = _this->Defence_Unit;
        if ( v103->Body.CivID )
        {
          v104 = class_Unit::Get_Default_Hit_Points(_this->Defence_Unit) - v103->Body.Damage;
          if ( v104 >= 0 )
          {
            if ( v104 <= 9999 )
            {
              if ( v104 == 1 )
              {
                v105 = class_Unit::Get_Default_Hit_Points(_this->Attack_Unit) - _this->Attack_Unit->Body.Damage;
                if ( v105 >= 0 )
                {
                  if ( v105 > 9999 || v105 > 1 )
                  {
                    if ( class_Random::Get_Random(// Unknown
                           &Random_1,
                           BIC_Data.CombatExperience[_this->Attack_Unit->Body.Combat_Experience].Retreat_Bonus + 50) < BIC_Data.CombatExperience[_this->Defence_Unit->Body.Combat_Experience].Retreat_Bonus )
                    {
                      v179 = 1;
                      if ( class_Unit::f77(_this->Defence_Unit, _this->Attack_Direction) )
                      {
                        if ( BYTE2(_this->V02) )
                        {
                          if ( f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
                          {
                            struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
                            if ( class_Unit::Check_Ability(_this->Attack_Unit, UTA_Army) )
                              struct_188_48::f1_set_field_8(&_Unit->Body.Animation.struct_48, 1);
                          }
                          class_Main_Screen_Data_1AD4::f4(&Main_Screen_Form.Data_1AD4);
                          class_Main_Screen_Data_1AD4::f4(&Main_Screen_Form.Data_1AD4);
                          if ( class_Unit::Check_Ability(_this->Attack_Unit, UTA_Army) && BYTE3(_this->V02)
                            || (v106 = class_Map::GetTile(
                                         &BIC_Data.Map,
                                         ((_this->Defence_X >> 1) + _this->Defence_Y * (BIC_Data.Map.Width >> 1))),
                                v107 = v106->vtable->m35_Check_Is_Water(v106),
                                f_Get_Tile_Unit_Process_Data(_this->Defence_X, _this->Defence_Y, 6, -1, v107 != 0, -1) > 0) )
                            class_Combat_Controller::f1(_this, _Unit);
                        }
                        if ( f_Is_Net_Game() )
                        {
                          struct_188_48::f1_set_field_8(&_this->Attack_Unit->Body.Animation.struct_48, 1);
                          struct_188_48::f1_set_field_8(&_this->Defence_Unit->Body.Animation.struct_48, 1);
                          if ( class_Unit::Check_Ability(_this->Attack_Unit, UTA_Army) )
                            struct_188_48::f1_set_field_8(&_Unit->Body.Animation.struct_48, 1);
                          class_Combat_Controller::f4(_this->Attack_Unit->Body.field_210, 0);
                          class_Combat_Controller::f4(_this->Defence_Unit->Body.field_210, 0);
                          class_Unit::f78(_this->Attack_Unit, 1);
                          class_Unit::f78(_this->Defence_Unit, 1);
                        }
                        class_Leader::f56(
                          &Civilizations[_this->Attack_Unit->Body.CivID],
                          _this->Defence_Unit->Body.CivID,
                          1);
                        v180 = 1;
                        goto LABEL_370;
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
LABEL_371:
    if ( BYTE2(_this->V02) && f_Process_2_Units(_this->Attack_Unit, _this->Defence_Unit, 1) )
    {
      if ( !f_Is_Net_Game() )
        class_Main_Screen_Data_1AD4::f1(&Main_Screen_Form.Data_1AD4, 650, 0);
      v177 = v177 == 0;
    }
  }
  while ( !v178 );
  if ( BYTE2(_this->V02) )
  {
    v164 = Main_Screen_Form.Data_1AD4.field_18E4[12];
    LOBYTE(Main_Screen_Form.field_4E80[5]) = 1;
    LOBYTE(v164) = Main_Screen_Form.Data_1AD4.field_18E4[12] & 0xFE;
    Main_Screen_Form.Data_1AD4.field_18E4[12] = v164;
    LOBYTE(_this->Attack_Unit->Body.field_1B0[4]) = 0;
    LOBYTE(_this->Defence_Unit->Body.field_1B0[4]) = 0;
    LOBYTE(Main_Screen_Form.Data_1AD4.field_18E4[13]) = 0;
  }
  if ( f_Is_Net_Game() && !v179 )
  {
    v165 = -1;
  }
  else
  {
    v165 = -1;
    _this->Attack_Unit = 0;
    _this->Defence_Unit = 0;
    _this->Attack_Direction = -1;
    _this->V04 = -1;
    BYTE1(_this->V02) = 0;
    LOBYTE(_this->V02) = 0;
    BYTE3(_this->V02) = 0;
    BYTE2(_this->V02) = 0;
    _this->Defence_Y = -1;
    _this->Defence_X = -1;
    _this->Attack_Y = -1;
    _this->Attack_X = -1;
  }
  v198 = v165;
  class_PCX_Image::Dispose(&_PCX);
  return v180;
}
