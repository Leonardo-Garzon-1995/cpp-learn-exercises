#include <iostream>
#include <string>

class Entity {
    public:
        int x {};
        int y {};

        Entity(const int& x, const int& y) {
            // This is a keyword that refers to the current instance of the class. 
            //It is used to access members of the class, such as variables and functions.  the class.
            this->x = x;
            this->y = y;
        }

        friend std::ostream& operator<<(std::ostream& os, const Entity& data);
};

std::ostream& operator<<(std::ostream& os, const Entity& data) {
    os << "Entity { "
        << "x: " << data.x
        << ", y: " << data.y
        <<" }";
    
        return os;
}

int main() {
    Entity a(5, 3);

    std::cout << a << '\n';
}