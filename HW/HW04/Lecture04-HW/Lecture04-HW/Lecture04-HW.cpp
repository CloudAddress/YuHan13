#include <iostream>
#pragma comment(lib, "Opengl32.lib")
#include <GLFW/glfw3.h>


void errorCallback(int error, const char* description)
{
    // cerr : 오류 나는 지점까지 디버깅함
    std::cerr << "GLFW ERROR : " << description << std::endl;
}

void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}
// 팝업 메뉴 함수를 정의합니다
void popup_menu(float red, float green, float blue, float alpha) {
    // Clear color를 설정합니다
    glClearColor(red, green, blue, alpha);
}

void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    // 마우스 왼쪽버튼 클릭하고 눌렀음
    if (button == GLFW_MOUSE_BUTTON_1 && action == GLFW_PRESS)
        popup_menu(0.0f, 1.0f, 0.0f, 1.0f);
    // 마우스 왼쪽버튼 클릭하고 눌렀다가 땠음
    if (button == GLFW_MOUSE_BUTTON_1 && action == GLFW_RELEASE)
        popup_menu(0.0f, 0.0f, 0.0f, 0.0f);
    // 마우스 오른쪽버튼 클릭하고 눌렀음
    if (button == GLFW_MOUSE_BUTTON_2 && action == GLFW_PRESS)
        popup_menu(1.0f, 0.0f, 0.0f, 0.0f);
    // 마우스 오른쪽버튼 클릭하고 눌렀다가 땠음
    if (button == GLFW_MOUSE_BUTTON_2 && action == GLFW_RELEASE)
        popup_menu(0.0f, 0.0f, 0.0f, 0.0f);

}

// Drag 
void mouse_cursor_callback(GLFWwindow* window, double xpos, double ypos)
{
    // 왼쪽 드래그
    if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT))
    {
        popup_menu(0.0f, 0.0f, 1.0f, 1.0f);
    }
    // 오른쪽 드래그
    if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT))
    {
        popup_menu(1.0f, 0.0f, 1.0f, 1.0f);
    }

    
}

int main(void)
{

    // glfw라이브러리 초기화
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    GLFWwindow* window;

    // NULL 쓰면 기본값으로 적용됨
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1280, 768, "MuSoeunEngine", NULL, NULL);
    // 윈도우 화면 생성에 실패하면 예외처리
    if (!window)
    {
        //사용된 메모리를 삭제함
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    //	오류 콜백을 설정합니다.
    glfwSetErrorCallback(errorCallback);
    // 키보드 콜백
    glfwSetKeyCallback(window, keyCallback);
    // 마우스 버튼 이벤트 콜백
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    // 마우스 드레그 이벤트 콜백
    glfwSetCursorPosCallback(window, mouse_cursor_callback);

    
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        ///* Render here */
        //glClearColor(1.0f, 0.0f, 1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        ///* Swap front and back buffers */
        glfwSwapBuffers(window);

        ///* Poll for and process events */
        //보통 여기에 넣지 않음
    }

    glfwTerminate();
    return 0;
}