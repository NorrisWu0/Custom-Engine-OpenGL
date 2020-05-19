#include "Debug.h"

std::vector<Debug::LogLevel> Debug::m_LogFilter = { Debug::Error, Debug::Warning, Debug::Info };

void Debug::SetLogFilter(std::vector<LogLevel> _level)
{
	m_LogFilter = _level;
}

void Debug::Log(const LogLevel _level, const char* _msg)
{
	for (LogLevel _filter : m_LogFilter)
	{
		if (_level == _filter && _level == Error)
			std::cout << "[Error]: " << _msg << std::endl;
		else if (_level == _filter && _level == Warning)
			std::cout << "[Warning]: " << _msg << std::endl;
		else if (_level == _filter && _level == Info)
			std::cout << "[Log]: " << _msg << std::endl;
	}
}

void Debug::GLClearError()
{
	while (glGetError() != GL_NO_ERROR);
}

void Debug::GLCheckError()
{
	while (GLenum _error = glGetError())
		std::cout << "[OPENGL ERROR]: " << _error << std::endl;
}

bool Debug::GLLogCall(const char* _function, const char* _file, int _line)
{
	while (GLenum _error = glGetError()) 
	{
		std::cout << "[OpenGL ERROR (" << _error << ")]:"<< _function << _file << ":line." << _line << std::endl;
		return false;
	}
	return true;
}
