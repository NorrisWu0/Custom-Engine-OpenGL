#version 330 core

in vec3 vertexPosition;
in vec4 vertexColor;

uniform mat4 transformation;

out vec4 interpolatedColor;

void main()
{
    vec4 _vertexPositionTransformed = transformation * vec4(vertexPosition.xyz, 1.0);

    gl_Position        = _vertexPositionTransformed;
    interpolatedColor = vertexColor;
}