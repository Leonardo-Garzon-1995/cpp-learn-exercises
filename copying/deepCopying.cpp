#include <iostream>
#include <cstring>

class MyString {
    private:
        char* m_Buffer {};
        unsigned int m_Size {};
    public:
        // Main/Initial Constructor
        MyString(const char* string) {
            std::cout << "CONSTRUCT MYSTRING\n";

            m_Size = strlen(string);
            m_Buffer = new char[m_Size + 1]; // The plus one accounts for the null terminator
            m_Buffer[m_Size] = 0; // Null terminator at the end of the string

            for (int i = 0; i < m_Size; i++) {
                m_Buffer[i] = string[i];
            }

            // memcpy(m_Buffer, string, m_Size);  // You can use this instead of the for loop
        }

        // Copy Constructor
        MyString(const MyString& other) : m_Size(other.m_Size) {
            std::cout << "Copy constructor got called\n";
            m_Buffer = new char[m_Size + 1];
            memcpy(m_Buffer, other.m_Buffer, m_Size + 1); // you could use the for loop as well  
        }

        // Destructor
        ~MyString() {
            std::cout << "DESTROY MYSTRING\n";
            delete[] m_Buffer;
        }

        char& operator[](unsigned int index) {
            return m_Buffer[index];
        }


        friend std::ostream& operator<<(std::ostream& os, const MyString& s);

};

std::ostream& operator<<(std::ostream& os, const MyString& s) {
    os << s.m_Buffer;

    return os;
}

int main() {

    // DEEP COPY
    MyString name {"Leonardo"};
    MyString second { name }; 
    second[2] = 'H'; 
    std::cout << name << std::endl;
    std::cout << second << std::endl; 


    return 0;
}