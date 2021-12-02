#version 450 core
in vec4 ourColor;
in vec2 TexCoord;

out vec4 color;

// pixels da textura
uniform sampler2D tex2;

uniform int idCanal;

void main()
{
    color = texture(tex2, TexCoord);

    if(idCanal == 0)
    {
        color.g = color.r;
        color.b = color.r;
    }
    else if(idCanal == 1)
    {
        color.r = color.g;
        color.b = color.g;
    }
    else if(idCanal == 2)
    {
        color.r = color.b;
        color.g = color.b;
    }
}
