#version 330 core

layout(location = 0) in vec4 vertexPosition;
in vec4 vertexColor;

uniform mat4 transformation;

out vec4 interpolatedColor;

void main()
{
    gl_Position        = vertexPosition;
    interpolatedColor = vertexColor;
}