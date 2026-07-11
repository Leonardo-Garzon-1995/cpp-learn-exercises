#include <iostream>
#include <string>

std::string getName() {
    return "Leonardo";
}

int main() {
    int a { 5 };
    auto b { a };

    auto name { getName() };

    std::cout << name << '\n';
}