#version 450 core
in vec4 ourColor;
in vec2 TexCoord;

out vec4 color;

// pixels da textura
uniform sampler2D tex1;

uniform vec4 corColarizadora;

uniform float l = 0.5;

void main()
{
    color = texture(tex1, TexCoord);

    float media = color.r * 0.2125 + color.g * 0.7154 + color.b * 0.0721;

    color = vec4(media, media, media, color.a);

    if(color.r >= l)
    {
        color = vec4(0.8, 0.5, 1.0, 1.0);
    }
    else
    {
        color = vec4(0.0, 0.0, 0.0, 1.0);
    }
}
