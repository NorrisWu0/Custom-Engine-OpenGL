#pragma once
#include <GL/glew.h>
#include <string>

#include "Asset.h"
#include "Rendering/Shader.h"
#include "Utility/Exception.h"

class ShaderProgram : public Asset
{
	public:
	ShaderProgram(const char* _id, const Shader* _vertexShader, const Shader* _fragmentShader);
	~ShaderProgram();

	const unsigned int GetProgram() const;
	const unsigned int GetVAO() const;
	
	private:
	unsigned int m_Program;
	unsigned int m_VAO;

};

