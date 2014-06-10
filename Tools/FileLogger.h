#pragma once

#include <fstream>
#include <string>
#include <stdarg.h>

class CFileLogger
{
private:
	std::ofstream _FStream;
	bool _Ready;
	bool _Log_Time;
public:
	CFileLogger(): _Ready(false) {}
	CFileLogger(std::string & Name);
	void Open(std::string & Name);
	void Close();
	void Line();
    void Write(const std::string& Message);
	void WriteFormat(const std::string &Format, va_list & Args);
	void WriteFormat(const std::string &Format, ...);
	void WriteLine(const std::string& Message);
	void WriteLineFormat(const std::string &Format, va_list & Args);
	void WriteLineFormat(const std::string &Format, ...);
	bool Get_Log_Time();
	void Set_Log_Time(bool Value);
    ~CFileLogger();
};

std::string string_format(const char* fmt, ...);
void log_string_format(CFileLogger * Log, const char* fmt, ...);
std::string date_string();
//std::string string_format(const std::string &fmt, ...);