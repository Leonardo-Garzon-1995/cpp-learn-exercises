// Way to define an anonymous function
// Treat it as a varaible 

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void forEach(std::vector<int> values, const std::function<void(int)>& func) {
    for (int value : values) {
        func(value);
    }
}



int main() {

    std::vector<int> values = { 1, 2, 3, 4 };
    auto it = std::find_if(values.begin(), values.end(), [](const int& value) { return value > 3;});

    std::cout << "it: " << *it << '\n';
    int a { 2 };

    forEach(values, [&a](const int& i) { std::cout << "Value: " << i + a << '\n'; }); // the '[](param) {}' structure is a lambda function
    // Passing 'a' inside [] means that the lambda function can access 
    // the variable a from the outer scope by reference. 
    // This allows the lambda to use and modify the value of 'a' if needed.
}
