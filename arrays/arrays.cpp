#include <iostream>
#include <array>

// RAW/STATIC ARRAYS

int arr[5]; //inizialization with length 5

void setValueArr(const int& v, int i) {
    arr[i] = v;
}

// STD::ARRAY

std::array<int, 5> secondArr {};

void setValueSecondArr(const int& v, const int& index) {
    secondArr[index] = v;
}

int main () {
    setValueArr(10, 0);
    setValueSecondArr(20, 1);

    std::cout << "arr[0]: " << arr[0] << '\n';
    std::cout << "secondArr[0]: " << secondArr[0] << '\n';
    std::cout << "secondArr[1]: " << secondArr[1] << '\n';
    return 0;
}