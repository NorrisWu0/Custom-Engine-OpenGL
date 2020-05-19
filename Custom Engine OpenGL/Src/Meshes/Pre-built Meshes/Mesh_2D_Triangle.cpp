#pragma once
#include "Mesh_2D_Triangle.h"

Mesh_2D_Triangle::Mesh_2D_Triangle()
	: Mesh("Mesh.Triangle")
{
	m_Verticies.insert(m_Verticies.end(), { -0.5f, -0.5f }); // v1
	m_Verticies.insert(m_Verticies.end(), { 0.0f, 0.5f });   // v2
	m_Verticies.insert(m_Verticies.end(), { 0.5f, -0.5f });  // v3

	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.0f, 1.0f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 0.5f, 0.0f });
	m_TextureCoordinates.insert(m_TextureCoordinates.end(), { 1.0f, 1.0f });
}
Mesh_2D_Triangle::~Mesh_2D_Triangle() {}