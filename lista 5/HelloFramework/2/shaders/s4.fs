#version 450 core
in vec4 ourColor;
in vec2 TexCoord;

out vec4 color;

// pixels da textura
uniform sampler2D tex4;

uniform vec4 corColarizadora;

void main()
{
    color = texture(tex4, TexCoord);

    color = vec4(1.0 - color.r, 1.0 - color.g, 1.0 - color.b, color.a);
}
