#pragma once
#include <GL/glew.h>
#include <string>

#include "Asset.h"
#include "Shader.h"
#include "Utility/Exception.h"
#include "Config/Configuration.h"

class Mesh;

class ShaderProgram : public Asset
{
	public:
	ShaderProgram(const char* _id, const Shader* _vertex, const Shader* _fragment);
	~ShaderProgram();

	const unsigned int GetProgram() const;
	const unsigned int GetVAO() const;
	
	private:
	unsigned int m_Program;
	unsigned int m_VAO;

};

