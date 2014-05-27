// ����������� ���� ���� ifdef - ��� ����������� ����� �������� ��������, ���������� ��������� 
// �������� �� ��������� DLL. ��� ����� ������ DLL �������������� � �������������� ������� C3CPATCHFRAMEWORK_EXPORTS,
// ��������� � ��������� ������. ������ ������ �� ������ ���� ��������� �� � ����� �������,
// ������������ ������ DLL. ��������� ����� ����� ������ ������, ��� �������� ����� �������� ������ ����, ����� 
// ������� C3CPATCHFRAMEWORK_API ��� ��������������� �� DLL, ����� ��� ������ DLL ����� �������,
// ������������ ������ ��������, ��� ����������������.
#ifdef C3CPATCHFRAMEWORK_EXPORTS
#define C3CPATCHFRAMEWORK_API extern "C" __declspec(dllexport)
#else
#define C3CPATCHFRAMEWORK_API extern "C" __declspec(dllimport)
#endif

#pragma once
#include "CPatchFramework.h"

C3CPATCHFRAMEWORK_API CPatchFramework * __stdcall get_pf_object(void);
