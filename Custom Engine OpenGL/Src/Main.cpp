#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "Config/Configuration.h"
#include "Rendering/ShaderProgram.h"

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		std::cout << "[LINKER ERROR]: GLFW failed to initialize!!" << std::endl;

	/* Create a windowed mode window and its OzpenGL context */
	window = glfwCreateWindow(1600, 900, "OpenGL Project", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Initialize GLEW library*/
	if (glewInit() != GLEW_OK)
		std::cout << "[LINKER ERROR]: GLEW failed to initialize!!" << std::endl;

	/* Output OpenGL Version to console*/
	std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << std::endl;

	Shader* _vShader = new Shader("VertexShader.Colored.2D", "Src/Rendering/GLSL/VertexShader.Colored.2D.glsl", Shader::Type::Vertex);
	Shader* _fShader = new Shader("FragmentShader.Colored.2D", "Src/Rendering/GLSL/FragmentShader.Colored.2D.glsl", Shader::Type::Fragment);
	ShaderProgram* shaderprogram = new ShaderProgram("ShaderProgram.Colored.2D", _vShader, _fShader);
	
	glUseProgram(shaderprogram->GetProgram());

	float vertexPosition[6] = {
		-0.5f, -0.5f,
		0.0f, 0.5f,
		0.5f, -0.5f
	};

	unsigned int buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), vertexPosition, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), 0);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		glDrawArrays(GL_TRIANGLES, 0, 3);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}