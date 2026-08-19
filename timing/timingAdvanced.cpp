#include <iostream>
#include <chrono>
#include <thread>

struct Timer {
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

    Timer() {
        start = std::chrono::steady_clock::now();
    }

    ~Timer() {
        end = std::chrono::steady_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;

        std::cout << "Timer: " << ms << "/ms" << '\n';
    }
};

void Hello100() {
    Timer timer;

    for (int i = 1; i < 101; i++) {
        std::cout << "Hello" << '\n';
    }

}
int main() {

    Hello100();

    std::cin.get();

}