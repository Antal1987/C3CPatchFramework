// C3CPatchFramework.cpp: ���������� ���������������� ������� ��� ���������� DLL.
//

#include "stdafx.h"
#include "C3CPatchFramework.h"

C3CPATCHFRAMEWORK_API CPatchFramework * __stdcall get_pf_object(void)
{
	return new CPatchFramework();
}
