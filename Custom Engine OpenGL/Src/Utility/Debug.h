#pragma once
#include <GL/glew.h>

#include <iostream>
#include <vector>

#define Assert(_x) if (!(_x)) __debugbreak();
#define GLCall(_x) Debug::GLClearError(); _x; Assert(Debug::GLLogCall(#_x, __FILE__, __LINE__)) // Will not work with functions in if statement and if the line assign a variable

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
	static void GLClearError();
	static void GLCheckError();
	static bool GLLogCall(const char* _function, const char* _file, int _line);

private:
	static std::vector<Debug::LogLevel> m_LogFilter;
};