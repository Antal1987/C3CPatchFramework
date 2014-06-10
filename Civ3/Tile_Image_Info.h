#pragma once
#include "Base.h"

/*   81 */
#pragma pack(push, 1)
struct class_Tile_Image_Info
{
  void *vtable;
  void *JGL_Image_Info;
  int field_8;
  void *Color_Table;
  int Width3;
  int Height3;
  int Width;
  int Height;
  int Width2;
  int Height2;
  int field_28;
};
#pragma pack(pop)

/*   83 */
#pragma pack(push, 1)
struct struct_Tile_Image_Info_List
{
  class_Tile_Image_Info field_0[81];
};
#pragma pack(pop)