#pragma once

#include "Mesh_File_OBJ.h"

Mesh_File_OBJ::Mesh_File_OBJ(const char* _id, const char _filePath) : Mesh("Mesh.File.Obj")
{
	std::ifstream _file(_id, _filePath);

	std::vector<glm::vec3> _verticies;
	std::vector<glm::vec2> _textureCoords;
	std::vector<glm::vec2> _normal;

	std::vector<unsigned int> _vertexIndicies;
	std::vector<unsigned int> _textureCoordsIndicies;

	std::string _line;
	while (std::getline(_file, _line))
	{
		if (_line[0] == 'v') // vertex
		{
			const size_t _size = _verticies.size();
			_verticies.resize(_size + 1);

			//std::istringstream _ss(_line.substr(3));
		}
		else if (_line.substr(0, 2) == "vt") //vertex texture coordinates
		{

		}
		else if (_line.substr(0, 2) == "vn") //vertex normal
		{

		}
		else if (_line[0] == 'f') // faces
		{

		}

	}

}

Mesh_File_OBJ::~Mesh_File_OBJ()
{}
