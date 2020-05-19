#include "Mesh_2D_Square.h"

Mesh_2D_Square::Mesh_2D_Square() : Mesh("Mesh.Square")
{
	auto _v1 = { -0.5f, 0.5f };
	auto _v2 = { -0.5f, -0.5f };
	auto _v3 = { 0.5f, -0.5f };
	auto _v4 = { 0.5f, 0.5f };

	auto _tc1 = { 0.0f, 0.0f };
	auto _tc2 = { 0.0f, 1.0f };
	auto _tc3 = { 1.0f, 1.0f };
	auto _tc4 = { 1.0f, 0.0f };

	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v2);
	m_Verticies.insert(m_Verticies.end(), _v3);

	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v3);
	m_Verticies.insert(m_Verticies.end(), _v4);

	m_TextureCoordinates.insert(m_TextureCoordinates.end(), _tc1);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), _tc2);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), _tc3);

	m_TextureCoordinates.insert(m_TextureCoordinates.end(), _tc1);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), _tc3);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), _tc4);
}

Mesh_2D_Square::~Mesh_2D_Square() {}