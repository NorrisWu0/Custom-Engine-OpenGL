#version 330 core

in vec3 vertexPosition;
in vec2 vertexTextureCoordinate;

uniform mat4 transformation;

out vec2 interpolatedTextureCoordinate;

void main()
{
    vec4 _vertexPositionTransformed = transformation * vec4(vertexPosition.xyz, 1.0);

    gl_Position        = _vertexPositionTransformed;
    interpolatedTextureCoordinate = vertexTextureCoordinate;
}