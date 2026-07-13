#include <iostream>

struct Vector3 {
    float x, y, z;

    Vector3() : x(10), y(20), z(30) {}
};

int main() {
    // STACK ALLOCATION
    int value { 5 };
    int* value_ptr { &value };

    int array[5] {};
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    Vector3 vector {};

    // HEAP ALLOCATION
    int* h_value { new int };
    *h_value = 5;

    int* h_array { new int[5] };
    h_array[0] = 1;
    h_array[1] = 2;
    h_array[2] = 3;
    h_array[3] = 4;
    h_array[4] = 5;

    Vector3* h_vector { new Vector3() };
}