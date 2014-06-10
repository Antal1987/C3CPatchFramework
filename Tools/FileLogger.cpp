#include "StdAfx.h"
#include "FileLogger.h"
#include <stdio.h>
#include <time.h>

CFileLogger::CFileLogger(std::string & Name)
{
	_Ready = false;
	Open(Name);
}

void CFileLogger::Open(std::string & Name)
{
	if(_Ready)
		Close();
	_FStream.open(Name.c_str(), std::ofstream::out | std::ofstream::app);
	if( !_FStream.is_open() ) 
	{
		throw(std::runtime_error("LOGGER: Unable to open an output stream"));
	}
	_Ready = true;
}

void CFileLogger::Close()
{
	if(_Ready)
	{
		_FStream.close();
		_Ready = false;
	}
}

void CFileLogger::Line()
{
	if(_Ready)
		_FStream << std::endl;
}

void CFileLogger::Write(const std::string& Message)
{
	if(_Ready)
		_FStream << Message;
}

void CFileLogger::WriteFormat(const std::string &Format, va_list & Args)
{
	std::string S = string_format(Format.c_str(), Args);
	Write(S);
}

void CFileLogger::WriteFormat(const std::string &Format, ...)
{
	va_list ap;
	va_start(ap, Format);
	WriteFormat(Format, ap);
	va_end(ap);
}

void CFileLogger::WriteLine(const std::string& Message)
{
	Write(Message);
	Line();
}

void CFileLogger::WriteLineFormat(const std::string &Format, va_list & Args)
{
	WriteFormat(Format, Args);
	Line();
}

void CFileLogger::WriteLineFormat(const std::string &Format, ...)
{
	va_list ap;
	va_start(ap, Format);
	WriteLineFormat(Format, ap);
	va_end(ap);
}
 
CFileLogger::~CFileLogger()
{
	Close();
}

bool CFileLogger::Get_Log_Time()
{
	return _Log_Time;
}
void CFileLogger::Set_Log_Time(bool Value)
{
	_Log_Time = Value;
}

std::string string_format(const char* fmt, va_list & args)
{
	char buffer[256];
	vsnprintf (buffer,256,fmt, args);
	std::string ret(buffer);
	return ret;
}

std::string string_format(const char* fmt, ...)
{
	va_list args;
	va_start (args, fmt);
	std::string ret = string_format(fmt, args);
	va_end (args);
	return ret;
}

void log_string_format(CFileLogger * Log, const char* fmt, ...)
{
	va_list args;
	va_start (args, fmt);
	std::string message = string_format(fmt, args);
	va_end (args);
	if(Log->Get_Log_Time())
		message = date_string() + "\t" + message;
	Log->WriteLine(message);
}

std::string date_string()
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];
	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,80,"%Y-%m-%d %H:%M:%S",timeinfo);
	//return std::string(asctime(timeinfo));
	return std::string(buffer);
}