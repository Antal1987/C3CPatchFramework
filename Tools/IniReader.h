#ifndef INIREADER_H
#define INIREADER_H

#include <string>

class CIniReader
{
public:
 //CIniReader(char* szFileName); 
 CIniReader(std::string FileName);
 int ReadInteger(char* szSection, char* szKey, int iDefaultValue);
 float ReadFloat(char* szSection, char* szKey, float fltDefaultValue);
 bool ReadBoolean(char* szSection, char* szKey, bool bolDefaultValue);
 char* ReadString(char* szSection, char* szKey, const char* szDefaultValue);
private:
	//void Init(char* szFileName, int Length);
  //char m_szFileName[255];
	std::string m_FileName;
	char * m_szFileName;
};
#endif//INIREADER_H