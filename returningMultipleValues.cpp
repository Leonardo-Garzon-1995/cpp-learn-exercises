/*
Returning multiple values froma a function 
*/

#include <iostream>
#include <vector>
#include <array>
#include <tuple>

// Using vector or arrays
std::vector<std::string> getMultipleNamesVec() {
    std::vector<std::string> names {"John", "Jane", "Doe"};
    return names;
}

std::array<std::string, 3> getMultipleNamesArr() {
    std::array<std::string, 3> names {"John", "Jane", "Doe"};
    return names;
}

// Using a tuple

std::tuple<std::string, int> getMultipleValues() {
    std::string name = "John";
    int age = 30;
    return std::make_tuple(name, age);
}

// Using a struct 
struct Person {
    std::string name {};
    int age {};
};

Person getPerson() {
    Person person {"John", 30};
    return person;
}