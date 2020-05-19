#include "Mesh.h"

Mesh::Mesh(const char* _id) : Asset(_id) {}
Mesh::~Mesh() {}

const std::vector<float> Mesh::GetVertices() const { return m_Verticies; }
const std::vector<float> Mesh::GetIndices() const { return m_Indices; }
const std::vector<float> Mesh::GetTextureCoordinates() const { return m_TextureCoordinates; }
const std::vector<float> Mesh::GetNormals() const { return m_Normals; }
