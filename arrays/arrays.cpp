#include <iostream>
#include <array>

// RAW ARRAYS

int arr[5]; //inizialization with length 5

void setValueArr(const int& v, int i) {
    arr[i] = v;
}

// STD::ARRAY

std::array<int, 5> secondArr {};

void setValueSecondArr(const int& v, const int& index) {
    secondArr[index] = v;
}