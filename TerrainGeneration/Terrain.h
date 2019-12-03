#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <glm/glm.hpp>
#include <glm\fwd.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/ext/matrix_clip_space.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <vector>

class Terrain
{
public:
	Terrain(GLuint width, GLuint height, GLfloat tileSize);
	void render(GLuint& program);
private:
	GLuint  VAO;
	GLuint  VBO, EBO;

	std::vector<GLfloat> vertices;
	std::vector<GLuint> indices;

	glm::mat4 mvp;
};

