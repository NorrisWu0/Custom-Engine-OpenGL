#pragma once
#include <GL/glew.h>
#include <vector>

#include "Asset.h"

class Mesh : public Asset
{
	public:
	Mesh(const char* _id);
	~Mesh();

	const std::vector<float> GetVertices() const;
	const std::vector<float> GetIndices() const;
	const std::vector<float> GetTextureCoordinates() const;
	const std::vector<float> GetNormals() const;

	protected:
	std::vector<float> m_Verticies;
	std::vector<float> m_Indices;
	std::vector<float> m_TextureCoordinates;
	std::vector<float> m_Normals;
};