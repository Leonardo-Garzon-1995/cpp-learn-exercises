#include <iostream>
#include <string>
// Preprocessor macros 

// #define DEBUG
#define WAIT std::cout << "Press Enter to continue..." << std::endl; std::cin.get()
#ifdef DEBUG
#define PRINT(x) std::cout << x << '\n'
#else 
#define PRINT(x)
#endif


int main() {
    PRINT("Hello, World!");
    WAIT;
}