#pragma comment(lib, "Opengl32.lib")

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include "Object.h"

#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#else
#define DBG_NEW new
#endif

#include <GLFW/glfw3.h>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <cmath>

extern float A_S_xp;
extern float B_S_xp;
extern float C_S_xp;

void errorCallback(int error, const char* description)
{
	printf("GLFW Error: %s", description);
}

void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{

}

int Physics()
{
	return 0;
}

int Initialize()
{
	return 0;
}

int Update()
{
	A_S_xp -= 0.0001f;
	B_S_xp -= 0.0001f;
	C_S_xp -= 0.0001f;
	
	return 0;
}

int Render()
{
	glClearColor(0.0f, 0.1176f, 0.3922f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	Object ob;
	ob.player();
	ob.faltfrom();
	ob.Agasee();
	ob.Bgasee();
	ob.Cgasee();
	return 0;
}




int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//glfw라이브러리 초기화
	if (!glfwInit())
		return -1;

	GLFWwindow* window;
	window = glfwCreateWindow(800, 600, "Google Dino Run Copy Game", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	glfwSetErrorCallback(errorCallback);
	glfwSetKeyCallback(window, keyCallback);

	Initialize();

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		Physics();
		Update();
		Render();
		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return 0;

}