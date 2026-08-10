#include <iostream>
#include <thread>
#include <chrono>

/*
Threads in C++

how to execute multiple processes simultaneously using threads in C++.
*/

static bool s_finished = false;

void doWork() {

    using namespace std::chrono_literals;
    while (!s_finished) {
        std::cout << "Working thread..." << '\n';
        std::this_thread::sleep_for(1s);
    }
}

int main() {

    std::thread worker(doWork);
    std::cin.get();
    s_finished = true;

    worker.join(); // The equivalent to asynchronus function = 'await' in js
    std::cout << "Process has finished";

    std::cin.get();

}