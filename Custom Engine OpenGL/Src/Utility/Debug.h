#pragma once
#include <iostream>
#include <vector>

class Debug
{
public:
	enum LogLevel
	{
		Error, Warning, Info
	};

	Debug() = delete;

	static void SetLogFilter(std::vector<LogLevel> _level);
	static void Log(const LogLevel _level, const char* _msg);

private:
	static std::vector<Debug::LogLevel> m_LogFilter;
};