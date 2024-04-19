#include "MSList.h"
#include <GLFW/glfw3.h>

class Star 
{
	float X;
	float Y;
	float r;
	float g;
	float b;

public:
	// Constructor with default parameter values
	Star(float X = 0.0f, float Y = 0.0f, float r = 0.0f, float g = 0.0f, float b = 0.0f) : X(X), Y(Y), r(r),g(g),b(b) {
		// �ٸ� �ʱ�ȭ �۾�
	}

	

	void update()
	{

	}

	
	public: void render()
	{
		
		glBegin(GL_TRIANGLES);
		// Ʈ���� �ޱ� 1�� �ϼ�!
		//��1
		glColor3f(r,g,b);
		glVertex2f((0.0f + X), (0.6f + Y));
		//��2
		glVertex2f((-0.4f + X), (-0.6f + Y));
		//��3
		glVertex2f((0.1f + X), (0.0f + Y));

		// Ʈ���� �ޱ� 2�� �ϼ�!
		//��1
		glColor3f(r, g, b);
		glVertex2f((-0.6f + X) , (0.1f + Y));
		//��2
		glVertex2f((0.3f + X), (-0.6f + Y));
		//��3
		glVertex2f((0.05f+X), (0.1f+Y));

		// Ʈ���� �ޱ� 3�� �ϼ�!
		//��1
		glColor3f(r, g, b);
		glVertex2f((0.0f + X), (0.1f + Y));
		//��2
		glVertex2f((-0.4f + X), (-0.6f + Y));
		//��3
		glVertex2f((0.6f + X), (0.1f + Y));
		glEnd();

		
	}
};