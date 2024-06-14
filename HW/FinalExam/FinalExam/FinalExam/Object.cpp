#include "Object.h"

float B_xp = 0.1f;
float B_yp = -0.9f;

float A_P_xp = 0.0f;
float A_P_yp = 1.0f;

float A_S_xp = 0.5f;
float A_S_yp = 1.0f;

float B_S_xp = 1.0f;
float B_S_yp = 0.5f;

float C_S_xp = 1.5f;
float C_S_yp = 0.2f;

float P_width = 0.3f;
float P_hight = 0.5f;

float S_width = 0.1f;
float S_hight = 1.0f;

float B_scale = 1.0f;
float A_S_scale = 0.5f;
float B_S_scale = 0.5f;
float C_S_scale = 0.5f;
float P_scale = 0.3f;

float A_P_yv = 0.0f;
float A_P_ya = -0.00001f;

void Object::player() {
    glLineWidth(3.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    // 그리기 시작
    glBegin(GL_LINES);

    glVertex2f((-P_width + A_P_xp) * P_scale, (-P_hight / 1.3f + A_P_yp) * P_scale);
    glVertex2f((P_width + A_P_xp) * P_scale, (-P_hight / 1.3f + A_P_yp) * P_scale);

    // 두 번째 선: 오른쪽 아래 -> 오른쪽 위
    glVertex2f((P_width + A_P_xp) * P_scale, (-P_hight / 1.3f + A_P_yp) * P_scale);
    glVertex2f((P_width + A_P_xp) * P_scale, (P_hight / 1.3f + A_P_yp) * P_scale);

    // 세 번째 선: 오른쪽 위 -> 왼쪽 위
    glVertex2f((P_width + A_P_xp) * P_scale, (P_hight / 1.3f + A_P_yp) * P_scale);
    glVertex2f((-P_width + A_P_xp) * P_scale, (P_hight / 1.3f + A_P_yp) * P_scale);

    // 네 번째 선: 왼쪽 위 -> 왼쪽 아래
    glVertex2f((-P_width + A_P_xp) * P_scale, (P_hight / 1.3f + A_P_yp) * P_scale);
    glVertex2f((-P_width + A_P_xp) * P_scale, (-P_hight / 1.3f + A_P_yp) * P_scale);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);

    glVertex2f((-P_width + A_P_xp) * P_scale, (-P_hight / 1.3f + A_P_yp) * P_scale);    // 왼쪽 아래
    glVertex2f((P_width + A_P_xp) * P_scale, (-P_hight / 1.3f + A_P_yp) * P_scale);     // 오른쪽 아래
    glVertex2f((P_width + A_P_xp) * P_scale, (P_hight / 1.3f + A_P_yp) * P_scale);      // 오른쪽 위
    glVertex2f((-P_width + A_P_xp) * P_scale, (P_hight / 1.3f + A_P_yp) * P_scale);     // 왼쪽 위

    glEnd();
}

void Object::faltfrom() {
    glLineWidth(3.0f);

    glColor3f(1.0f, 0.7843f, 0.0588f);
    glBegin(GL_QUADS);

    glVertex2f((-P_width * 4 + B_xp) * B_scale, (-P_hight + B_yp) * B_scale);    // 왼쪽 아래
    glVertex2f((P_width * 4 + B_xp) * B_scale, (-P_hight + B_yp) * B_scale);     // 오른쪽 아래
    glVertex2f((P_width * 4 + B_xp) * B_scale, (P_hight + B_yp) * B_scale);      // 오른쪽 위
    glVertex2f((-P_width * 4 + B_xp) * B_scale, (P_hight + B_yp) * B_scale);     // 왼쪽 위

    glEnd();
}

void Object::Agasee() {
    glLineWidth(3.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);

    glVertex2f((-S_width + A_S_xp) * A_S_scale, (-S_hight + A_S_yp) * A_S_scale);    // 왼쪽 아래
    glVertex2f((S_width + A_S_xp) * A_S_scale, (-S_hight + A_S_yp) * A_S_scale);     // 오른쪽 아래
    glVertex2f((S_width + A_S_xp) * A_S_scale, (S_hight + A_S_yp) * A_S_scale);      // 오른쪽 위
    glVertex2f((-S_width + A_S_xp) * A_S_scale, (S_hight + A_S_yp) * A_S_scale);     // 왼쪽 위

    glEnd();
}

void Object::Bgasee() {
    glLineWidth(3.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);

    glVertex2f((-S_width + B_S_xp) * B_S_scale, (-S_hight + B_S_yp) * B_S_scale);    // 왼쪽 아래
    glVertex2f((S_width + B_S_xp) * B_S_scale, (-S_hight + B_S_yp) * B_S_scale);     // 오른쪽 아래
    glVertex2f((S_width + B_S_xp) * B_S_scale, (S_hight + B_S_yp) * B_S_scale);      // 오른쪽 위
    glVertex2f((-S_width + B_S_xp) * B_S_scale, (S_hight + B_S_yp) * B_S_scale);     // 왼쪽 위

    glEnd();
}

void Object::Cgasee() {
    glLineWidth(3.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);

    glVertex2f((-S_width + C_S_xp) * C_S_scale, (-S_hight + C_S_yp) * C_S_scale);    // 왼쪽 아래
    glVertex2f((S_width + C_S_xp) * C_S_scale, (-S_hight + C_S_yp) * C_S_scale);     // 오른쪽 아래
    glVertex2f((S_width + C_S_xp) * C_S_scale, (S_hight + C_S_yp) * C_S_scale);      // 오른쪽 위
    glVertex2f((-S_width + C_S_xp) * C_S_scale, (S_hight + C_S_yp) * C_S_scale);     // 왼쪽 위

    glEnd();
}