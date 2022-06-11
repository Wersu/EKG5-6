#ifndef MESH_CLASS_H
#define MESH_CLASS_H
//КЛАСС ПОЛИГОНАЛЬНОЙ СЕТКИ интерфейс между Assimp и нашей программой OpenGL
#include<string>

#include"VAO.h"
#include"EBO.h"
#include"Camera.h"
#include"Texture.h"
// использует Assimp для загрузки модели и создания вершинного, индексного буферов и объекта текстуры, который содержит данные в форме, понятной нашей программе.
class Mesh
{
public:
	std::vector <Vertex> vertices;
	std::vector <GLuint> indices;
	std::vector <Texture> textures;
	 
	VAO VAO;

	 
	Mesh(std::vector <Vertex>& vertices, std::vector <GLuint>& indices, std::vector <Texture>& textures);

	 
	void Draw
	(
		Shader& shader, 
		Camera& camera,
		glm::mat4 matrix = glm::mat4(1.0f),
		glm::vec3 translation = glm::vec3(0.0f, 0.0f, 0.0f),
		glm::quat rotation = glm::quat(1.0f, 0.0f, 0.0f, 0.0f),
		glm::vec3 scale = glm::vec3(1.0f, 1.0f, 1.0f)
	);
};
#endif