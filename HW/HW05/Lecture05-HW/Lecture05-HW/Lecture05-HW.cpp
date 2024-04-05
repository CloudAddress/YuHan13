#pragma comment(lib, "Opengl32.lib")

#include <GLFW/glfw3.h>
#include <iostream>

float moveFactor = 0.0f;
float YmoveFactor = 0.0f;
float scaleFactor = 1.0f;

void errorCallback(int error, const char* description)
{
	std::cerr << "GLFW Error: " << description << std::endl;
}

void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
	int state = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT);
	int state2 = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT);
	double expos = 0;
	double ex2pos = 0;
	double eypos = 0;

	if (state2 == GLFW_PRESS)
	{
		double hap = xpos - expos;

		if (hap < 0)
		{
			scaleFactor -= 0.01f;
		}
		else
		{
			scaleFactor += 0.01f;
		}
	}
	else
	{
		expos = xpos;
	}
	if (state == GLFW_PRESS)
	{
		double hap = ypos - eypos;
		double hap2 = xpos - ex2pos;
		if (hap < 0)
		{
			moveFactor -= 0.01f;
		}
		else
		{
			moveFactor += 0.01f;
		}
		if (hap2 > 0)
		{
			YmoveFactor -= 0.01f;
		}
		else
		{
			YmoveFactor += 0.01f;
		}
	}
	else
	{
		eypos = ypos;
		ex2pos = xpos;
	}

}

int render()
{
	glBegin(GL_TRIANGLES);
	// 트라이 앵글 1개 완성!
	//점1
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((0.0f + YmoveFactor) * scaleFactor, (0.8f + moveFactor) * scaleFactor);
	//점2
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((-0.6f + YmoveFactor) * scaleFactor, (-0.8f + moveFactor) * scaleFactor);
	//점3
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((0.3f + YmoveFactor) * scaleFactor, (-0.2f + moveFactor) * scaleFactor);
	// 트라이 앵글 2개 완성!
	//점1
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((-0.8f + YmoveFactor) * scaleFactor, (0.3f + moveFactor) * scaleFactor);
	//점2
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((0.6f + YmoveFactor) * scaleFactor, (-0.8f + moveFactor) * scaleFactor);
	//점3
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((0.1f + YmoveFactor) * scaleFactor, (0.3f + moveFactor) * scaleFactor);
	// 트라이 앵글 3개 완성!
	//점1
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((-0.2f + YmoveFactor) * scaleFactor, (0.3f + moveFactor) * scaleFactor);
	//점2
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((-0.6f + YmoveFactor) * scaleFactor, (-0.8f + moveFactor) * scaleFactor);
	//점3
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f((0.8f + YmoveFactor) * scaleFactor, (0.3f + moveFactor) * scaleFactor);
	glEnd();


	return 0;
}


int main(void)
{
	//glfw라이브러리 초기화
	if (!glfwInit())
		return -1;

	GLFWwindow* window;
	window = glfwCreateWindow(1280, 768, "MuSoeunEngine", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glfwSetErrorCallback(errorCallback);
	glfwSetCursorPosCallback(window, cursor_position_callback);
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		render();

		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return 0;

}