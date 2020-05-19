#include "Mesh_2D_Pentagon.h"

Mesh_2D_Pentagon::Mesh_2D_Pentagon() : Mesh("Mesh.Pentagon")
{
	auto _v1 = { -0.5f, 0.0f };
	auto _v2 = { 0.0f, 0.25f };
	auto _v3 = { 0.5f, 0.0f };
	auto _v4 = { 0.25f, -0.5f };
	auto _v5 = { -0.25f, -0.5f };

	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v2);
	m_Verticies.insert(m_Verticies.end(), _v3);

	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v3);
	m_Verticies.insert(m_Verticies.end(), _v4);

	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v4);
	m_Verticies.insert(m_Verticies.end(), _v5);

	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.0f, 0.5f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.5f, 0.75f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 1.0f, 0.5f });

	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.0f, 0.5f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 1.0f, 0.5f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.75, 0.0f });

	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.0f, 0.5f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.75, 0.0f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.25, 0.0f });
}

Mesh_2D_Pentagon::~Mesh_2D_Pentagon() {}
