#include "Mesh_3D_Tetrahedron.h"

Mesh_3D_Tetrahedron::Mesh_3D_Tetrahedron() : Mesh("Mesh.Tetrehedron")
{
	auto _v1 = { -0.4f, -0.25f, 0.4f };
	auto _v2 = { 0.4f, -0.25f, 0.4f };

	auto _v3 = { 0.0f, 0.25f, 0.0f };

	auto _v4 = { -0.4f, -0.25f, -0.4f };
	auto _v5 = { 0.4f, -0.25f, -0.4f };

	auto tl = { 0.0f, 0.0f };
	auto tr = { 1.0f, 0.0f };
	auto tc = { 0.5f, -0.5f };
	auto br = { 1.1f, 1.0f };
	auto bl = { 0.0f, 1.0f };

	for (int _faceIndex = 0; _faceIndex < 4; ++_faceIndex)
	{
		m_TextureCoordinates.insert(m_TextureCoordinates.end(), tc);
		m_TextureCoordinates.insert(m_TextureCoordinates.end(), bl);
		m_TextureCoordinates.insert(m_TextureCoordinates.end(), br);
	}

	#pragma region Front
	m_Verticies.insert(m_Verticies.end(), _v3);
	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v2);
	#pragma endregion

	#pragma region Right
	m_Verticies.insert(m_Verticies.end(), _v3);
	m_Verticies.insert(m_Verticies.end(), _v2);
	m_Verticies.insert(m_Verticies.end(), _v5);
	#pragma endregion

	#pragma region Back
	m_Verticies.insert(m_Verticies.end(), _v3);
	m_Verticies.insert(m_Verticies.end(), _v5);
	m_Verticies.insert(m_Verticies.end(), _v4);
	#pragma endregion

	#pragma region Left
	m_Verticies.insert(m_Verticies.end(), _v3);
	m_Verticies.insert(m_Verticies.end(), _v4);
	m_Verticies.insert(m_Verticies.end(), _v1);
	#pragma endregion

	#pragma region Bottom
	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v4);
	m_Verticies.insert(m_Verticies.end(), _v5);
	m_Verticies.insert(m_Verticies.end(), _v1);
	m_Verticies.insert(m_Verticies.end(), _v5);
	m_Verticies.insert(m_Verticies.end(), _v2);


	m_TextureCoordinates.insert(m_TextureCoordinates.end(), tl);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), bl);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), br);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), tl);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), br);
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), tr);
	#pragma endregion

}

Mesh_3D_Tetrahedron::~Mesh_3D_Tetrahedron() {}
