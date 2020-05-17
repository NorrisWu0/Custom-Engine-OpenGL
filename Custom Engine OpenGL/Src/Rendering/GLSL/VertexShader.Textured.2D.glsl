#version 330 core

in vec2 vertexPosition;
in vec2 vertexTextureCoordinate;

uniform mat4 transformation;

out vec2 interpolatedTextureCoordinate;

void main()
{
    gl_Position                     = transformation * vec4(vertexPosition.x, vertexPosition.y, 0.0, 1.0);
    interpolatedTextureCoordinate = vertexTextureCoordinate;
}