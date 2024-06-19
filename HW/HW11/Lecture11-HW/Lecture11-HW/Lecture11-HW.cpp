#include <iostream>
#include <thread> // std::this_thread::sleep_for
#include <chrono>

using namespace std;

int main()
{
    int count = 0;
    int r = 100;
    const int interval_ms = 1000;

    auto start = chrono::steady_clock::now();

    while (count < r) {
        count++;
        auto now = chrono::steady_clock::now();
        auto elapsed = chrono::duration_cast<chrono::milliseconds>(now.time_since_epoch()).count();

        std::cout << "카운트: " << count << ", 출력시간: " << elapsed << " 밀리초" << std::endl;

        auto end = chrono::steady_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
        
        int sleep_time = interval_ms - duration;
        if (sleep_time > 0) {
            this_thread::sleep_for(chrono::milliseconds(sleep_time));
        }

        start = chrono::steady_clock::now();
    }
}