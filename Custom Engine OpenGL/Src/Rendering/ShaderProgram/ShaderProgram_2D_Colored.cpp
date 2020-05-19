#include "ShaderProgram_2D_Colored.h"

ShaderProgram_2D_Colored::ShaderProgram_2D_Colored(const char* _id, const Shader* _vertex, const Shader* _fragment)
	: ShaderProgram(_id, _vertex, _fragment)
{

}

ShaderProgram_2D_Colored::~ShaderProgram_2D_Colored() {}

void ShaderProgram_2D_Colored::Render(const Configuration* _config, const Mesh* _mesh, const std::vector<float>* _color, const glm::mat4* _transformation) const
{

}