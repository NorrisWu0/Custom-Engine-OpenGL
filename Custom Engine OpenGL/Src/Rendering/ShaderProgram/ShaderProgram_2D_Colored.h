#pragma once
#include <glm/gtx/transform.hpp>
#include <vector>

#include "../ShaderProgram.h"

class ShaderProgram_2D_Colored : public ShaderProgram
{
	public:
	ShaderProgram_2D_Colored(const char* _id, const Shader* _vertex, const Shader* _fragment);
	~ShaderProgram_2D_Colored();

	void Render(const Configuration* _config, const Mesh* _mesh, const std::vector<float>* _color, const glm::mat4* _transformation) const;
};

