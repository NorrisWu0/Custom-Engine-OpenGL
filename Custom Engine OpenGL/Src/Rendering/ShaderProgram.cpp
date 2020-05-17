#include "ShaderProgram.h"

ShaderProgram::ShaderProgram(const char* _id, const Shader* _vertexShader, const Shader* _fragmentShader)
	: Asset(_id)
{
	m_Program = glCreateProgram();

	glAttachShader(m_Program, _vertexShader->GetShader());
	glAttachShader(m_Program, _fragmentShader->GetShader());
	glLinkProgram(m_Program);
	
	//glDetachShader(m_Program, _vertexShader->GetShader());
	//glDetachShader(m_Program, _fragmentShader->GetShader());
	
	//glValidateProgram(m_Program);

	int _linkingResult;
	glGetProgramiv(m_Program, GL_LINK_STATUS, &_linkingResult);
	if (_linkingResult == GL_FALSE)
	{
		char _log[1024];
		glGetProgramInfoLog(m_Program, sizeof(_log), NULL, _log);
		Throw(_log);
	}
	
	glGenVertexArrays(1, &m_VAO); // Number of array to generate, THE array to store.

	//glDeleteShader(_vertexShader->GetShader());
	//glDeleteShader(_fragmentShader->GetShader());
}

ShaderProgram::~ShaderProgram() {}
const unsigned int ShaderProgram::GetProgram() const { return m_Program; }
const unsigned int ShaderProgram::GetVAO() const { return m_VAO; }
