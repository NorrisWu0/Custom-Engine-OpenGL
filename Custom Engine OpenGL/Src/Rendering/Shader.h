#pragma once
#include <GL/glew.h>
#include <string>

#include "Asset.h"

class Shader : public Asset
{
	public:
	enum class Type
	{
		Vertex,
		Fragment
	};

	Shader(const char* _id, const char* _filePath, const Type _type);
	~Shader();

	const unsigned int GetShader() const;

	private:
	unsigned int m_Shader;

};

