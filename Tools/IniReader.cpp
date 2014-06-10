#include "stdafx.h"
#include "IniReader.h"
#include <iostream>
#include <Windows.h>
/*
void CIniReader::Init(char* szFileName, int Length)
{
	 memset(m_szFileName, 0x00, 255);
	 memcpy(m_szFileName, szFileName, Length);
}*/
/*
CIniReader::CIniReader(char* szFileName)
{
	 Init(szFileName, strlen(szFileName));
}
*/
CIniReader::CIniReader(std::string FileName)
{
	//Init((char *)FileName.c_str(), FileName.length());
	m_FileName = FileName;
	m_szFileName = (char *)m_FileName.c_str();
}

int CIniReader::ReadInteger(char* szSection, char* szKey, int iDefaultValue)
{
 int iResult = GetPrivateProfileIntA(szSection,  szKey, iDefaultValue, m_szFileName); 
 return iResult;
}
float CIniReader::ReadFloat(char* szSection, char* szKey, float fltDefaultValue)
{
 char szResult[255];
 char szDefault[255];
 float fltResult;
 sprintf(szDefault, "%f",fltDefaultValue);
 GetPrivateProfileStringA(szSection,  szKey, szDefault, szResult, 255, m_szFileName); 
 fltResult =  atof(szResult);
 return fltResult;
}
bool CIniReader::ReadBoolean(char* szSection, char* szKey, bool bolDefaultValue)
{
 char szResult[255];
 char szDefault[255];
 bool bolResult;
 sprintf(szDefault, "%s", bolDefaultValue? "True" : "False");
 GetPrivateProfileStringA(szSection, szKey, szDefault, szResult, 255, m_szFileName); 
 bolResult =  (strcmp(szResult, "True") == 0 || 
		strcmp(szResult, "true") == 0) ? true : false;
 return bolResult;
}
char* CIniReader::ReadString(char* szSection, char* szKey, const char* szDefaultValue)
{
 char* szResult = new char[255];
 memset(szResult, 0x00, 255);
 GetPrivateProfileStringA(szSection,  szKey, 
		szDefaultValue, szResult, 255, m_szFileName); 
 return szResult;
}