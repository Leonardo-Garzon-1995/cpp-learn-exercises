#include <iostream>
#include <cstring>

struct Data2 {
    float x {};
    float y {};
};

class MyString {
    private:
        char* m_Buffer {};
        unsigned int m_Size {};
    public:
        MyString(const char* string) {
            m_Size = strlen(string);
            m_Buffer = new char[m_Size + 1]; // The plus one accounts for the null terminator
            m_Buffer[m_Size] = 0; // Null terminator at the end of the string

            for (int i = 0; i < m_Size; i++) {
                m_Buffer[i] = string[i];
            }

            // memccpy(m_Buffer, string, m_Size);  // You can use this instead of the for loop
        }

        ~MyString() {
            std::cout << "DESTROY MYSTRING\n";
            delete[] m_Buffer;
        }

        friend std::ostream& operator<<(std::ostream& os, const MyString& s);

};

std::ostream& operator<<(std::ostream& os, const MyString& s) {
    os << s.m_Buffer;

    return os;
}

int main() {

    int x { 5 };
    int b { x }; // b makes a copy of 'a', each one 'b' and 'a' occupy their own space in memory
    b = 7; // 'a' is not modified since b was a copy

    Data2 n = { 2, 3 };
    Data2 d = n;
    d.x = 10; // 'n' is not affected

    MyString name {"Leonardo"};
    // MyString second { name }; // The program will crash when copy directly, this is because both 'name' and 'second' use the same pointer address
    std::cout << name << std::endl;
    // std::cout << second << std::endl; 


    return 0;
}