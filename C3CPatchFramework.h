// Приведенный ниже блок ifdef - это стандартный метод создания макросов, упрощающий процедуру 
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа C3CPATCHFRAMEWORK_EXPORTS,
// заданного в командной строке. Данный символ не должен быть определен ни в одном проекте,
// использующем данную DLL. Благодаря этому любой другой проект, чьи исходные файлы включают данный файл, видит 
// функции C3CPATCHFRAMEWORK_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#ifdef C3CPATCHFRAMEWORK_EXPORTS
#define C3CPATCHFRAMEWORK_API extern "C" __declspec(dllexport)
#else
#define C3CPATCHFRAMEWORK_API extern "C" __declspec(dllimport)
#endif

#pragma once
#include "CPatchFramework.h"

C3CPATCHFRAMEWORK_API CPatchFramework * __stdcall get_pf_object(void);
