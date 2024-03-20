#include <iostream>

using namespace std;
enum ForeColour {
    Default = 0,
    Black = 30,
    Red = 31,
    Green = 32,
    Yellow = 33,
    Blue = 34,
    Magenta = 35,
    Cyan = 36,
    White = 37,
};

void plus123()
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    cout << "\x1b[m";
}

int main()
{
    cout << "화면에 그림을 그리는 프로그램입니다.\n";
    cout << "학번 : 202127029\n";
    cout << "이름 : 주진원\n";
    int X;
    while (true)
    {

        cout << "화면에 그릴 물체코드를 입력하세요 : ";
        cin >> X;
    
        if (X & 0b1)
        {
            cout << "\x1b[37m" << endl;
            plus123();
        }
        if (X & 0b10)
        {
            cout << "\x1b[31m" << endl;
            plus123();
        }
        if (X & 0b100){
            cout << "\x1b[32m" << endl;
            plus123();
        }
        if (X & 0b1000) {
            cout << "\x1b[33m" << endl;
            plus123();
        }
        if (X & 0b10000){
            cout << "\x1b[36m" << endl;
            plus123();
        }
        if (X & 0b100000){
           cout << "\x1b[35m" << endl;
           plus123();
        }
        if (X == 64){
            break;
        }
    }
}

