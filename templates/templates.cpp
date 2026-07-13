// Templates allow you to write generic programming code that can work with any data type.

#include <iostream>

template <typename T>
void print(const T& value) {
    std::cout << value << '\n';
} 

template <typename L, int N>
class MyArray {
    private:
        L m_Array[N];
    public:
        int getSize() const { return N;}
};


int main() {
    print(5);
    print("Hello world!");
    print<int>(10);
    print<std::string>("Leonardo");

    MyArray<int, 5> arr;
    std::cout << "arr size: " << arr.getSize() << '\n';
}