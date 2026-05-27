// Operator overloading allows you to define how operators work based on your own
// custom data types and classes.

#include <iostream>

class Vector2 {
    public:
        int x {};
        int y {};

        Vector2(const int& x, const int& y) : x(x), y(y) {}

        Vector2 operator+(const Vector2& other) {
            return Vector2(x + other.x, y + other.y);
        }
};

class Buffer {
    public:
        int data[5];
    
    public:
        Buffer() {
            for (int i = 0; i < 5; i++) {
                data[i] = i;
            }
        }
    
    int& operator[](int index) {
        return data[index];
    }
};

int main() {
    Vector2 a(1, 2);
    Vector2 b(3, 4);

    Vector2 c = a + b;

    Buffer d;

    std::cout << d[5] << " = " << d.data[5] << '\n';
}