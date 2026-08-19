#include <iostream>

int main() {

    int* arr = new int[50]; // normal array
    int** twoDArray = new int*[50]; // We are allocating memory for a buffer of int pointers

    // to define each array in the the two dimentionla array you can use a for loop

    for (int i = 0; i < 50; i++) {
        twoDArray[i] = new int[50];
    }

    // do not forget to delete and clean up memory

    for(int i = 0; i < 50; i++) {
        delete[] twoDArray[i];
    }

    delete[] twoDArray;
}