#include <iostream>
#include <vector>
// Function pointers is a way to assign a function to a variable

void printName() {
    std::cout << "Sebastian" << '\n';
}

std::string getName() {
    return "Leonardo";
}

void printInteger(const int& i) {
    std::cout << "Num: " << i << '\n';
}

void helloWorld() {
    std::cout << "Hello World" << '\n';
}

void printValue(const int& i) {
        std::cout << "Value: " << i << "\n";
}

void forEach(std::vector<int> values, void(*func)(const int& i)) {
    for (int value : values) {
        func(value);
    }
}



int main() {

    auto name = getName(); // Calling the function - name = "Leonardo"
    auto get_name = getName; // assigning the function now you can call get_name()

    auto name2 = get_name();
    
    auto print_name = &printName;

    std::cout << "name: " << name << '\n';
    std::cout << "name2: " << name2 <<'\n';
    print_name();

    // THE TYPE OF THE VARIABLE

    void(*print_integer)(const int& i); // Actual type  - Here we are definig the type of our variable

    print_integer = printInteger; // assign the function to the variable

    // YOU CAN USE typedef for definig the type - kind of an alias

    typedef void(*HelloWorldFunction)(); // use 

    HelloWorldFunction HW = helloWorld;

    HW();

    // USEFUL EXAMPLE

    std::vector<int> values = { 1, 2, 3, 4, 5, 6 };

    forEach(values, printValue);
}