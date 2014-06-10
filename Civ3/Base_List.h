#pragma once
#include "Base.h"

/*   58 */
#pragma pack(push, 1)
struct struct_Base_List_Item
{
  int V;
  void *Object;
};
#pragma pack(pop)

/*   59 */
#pragma pack(push, 1)
struct class_Base_List
{
  int vtable;
  struct_Base_List_Item *Items;
  int V1;
  int V2;
  int LastIndex;
  int Capacity;
  class_Base * Get_Item(int Index)
  {
	  if(Index < 0 || Index > LastIndex)
		  return NULL;
	  return (class_Base *)((int)(Items[Index].Object) - 0x1C);
  }
};
#pragma pack(pop)