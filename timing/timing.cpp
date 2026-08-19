// Timing and performance with chrono library in C++17
// How much time does your code take to execute
#include <iostream>
#include <chrono>
#include <thread>

int main () {

    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(2s);

    std::cout << "Two seconds have passed" << '\n';
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;

    std::cout << "Duration: " << duration.count() << "/s" << '\n';
    std::cin.get();
}