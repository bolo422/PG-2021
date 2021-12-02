#pragma once

#include <iostream>
#include <string>
#include <assert.h>
#include <cmath>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"

using namespace std;

class Object
{
public:

	Object();
	~Object();

	//equivalente ao setupGeometry
	void initialize(); 
	//atualizar a matriz de transformação do objeto
	void update();
	
	void draw();
	//Setar posição
	inline void setPosition(glm::vec3 _position) { position = _position; }
	//Setar dimensões
	inline void setDimensions(glm::vec3 _scale) { scale = _scale; }
	//Setar angulo
	inline void setAngle(float _angle) { angle = _angle; }
	//Setar textura
	inline void setTexture(GLuint _texID) { texID = _texID; }
	//Setar shader
	inline void setShader(Shader* _shader) { shader = _shader; }
	
protected:
	//Setar rotação
	void setRotation(float _angle, glm::vec3 _axis, bool _reset = false);
	//Setar translação
	void setTranslation(glm::vec3 _displacements, bool _reset = false);
	//Setar escala
	void setScale(glm::vec3 _scaleFactors, bool _reset = false);

	//buffer de geometria
	GLuint VAO; 
	//matriz de transformação
	glm::mat4 transform; 
	//id de textura
	GLuint texID; 
	//ponteiro para o shader
	Shader* shader; 

	glm::vec3 position, scale;
	float angle;

	bool first;
	
};

