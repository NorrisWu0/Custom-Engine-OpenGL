#version 330 core

layout(location = 0) out vec4 interpolatedColor;

out vec4 fragmentColor;

void main()
{
    //fragmentColor = interpolatedColor;
    fragmentColor = vec4(1.0f, 1.0f, 0.0f, 1.0f);
}