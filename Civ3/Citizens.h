#pragma once
#include "Base.h"
#include "Base_List.h"
#include "Citizen.h"

/*   27 */
#pragma pack(push, 1)
struct class_Citizens
{
	class_Base_List Base;
	class_Citizen * Get_Citizen(int Index)
	{
		return (class_Citizen *)Base.Get_Item(Index);
	}
};
#pragma pack(pop)