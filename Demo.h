#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBOL1, VAOL1, EBOL1, textureL1, VBOL2, VAOL2, EBOL2, textureL2, VBOL3, VAOL3, EBOL3, textureL3, VBOL4, VAOL4, EBOL4, textureL4;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float MOVE_SPEED, objX, objY, objZ, viewObjX, viewObjY, viewObjZ;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildBeam(float xOffset, float yOffset, float zOffset, float xLength, float yLength, float zLength, char* texturePath, GLuint& VAO, GLuint VBO, GLuint EBO, GLuint& texture);
	void DrawBeam(GLuint& VAO, GLuint& texture);
	void BuildColoredPlane();
	void DrawColoredPlane();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void MoveObject(float speed);
	void StrafeObject(float speed);
	void InitCamera();
	void InitObject();
};

