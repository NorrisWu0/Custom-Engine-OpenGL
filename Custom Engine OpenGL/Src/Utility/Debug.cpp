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