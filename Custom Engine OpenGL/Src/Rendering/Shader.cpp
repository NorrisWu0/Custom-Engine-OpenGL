#include "Shader.h"

#include <fstream>
#include <iostream>
#include "Utility/Exception.h"
// Compile Shader based on file and type given.
Shader::Shader(const char* _id, const char* _filePath, const Type _type)
	: Asset(_id)
{
	std::ifstream _file(_filePath);
	Expect(_file.is_open(), (std::string("Cannot open file at ") + _filePath).c_str());

	std::string _sourceStr = std::string((std::istreambuf_iterator<char>(_file)), std::istreambuf_iterator<char>()); // In case the pointer go out of scope
	const char* _source = _sourceStr.c_str();

	switch (_type)
	{
		case Type::Vertex:
			m_Shader = glCreateShader(GL_VERTEX_SHADER);
			break;

		case Type::Fragment:
			m_Shader = glCreateShader(GL_FRAGMENT_SHADER);
			break;

		default:
			Throw("Cannot identify type");
			break;
	}

	// Assign source to shader
	glShaderSource(m_Shader, 1, &_source, NULL); // THE shader, number of source code, pointer to the shader source code/s, length
	glCompileShader(m_Shader);

	int _compileResult;
	glGetShaderiv(m_Shader, GL_COMPILE_STATUS, &_compileResult);

	if (_compileResult == GL_FALSE)
	{
		//int _logLength;
		//glGetShaderiv(m_Shader, GL_INFO_LOG_LENGTH, &_logLength);
		//char* _log = (char*)alloca(_logLength * sizeof(char));

		char _log[1024];
		glGetShaderInfoLog(m_Shader, sizeof(_log), NULL, _log);
		Throw(_log);
	}

}

Shader::~Shader() {}

// Return compiled shader
const unsigned int Shader::GetShader() const { return m_Shader; }
