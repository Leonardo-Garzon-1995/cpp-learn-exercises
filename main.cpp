#include <iostream>

class Entity {
    public: 

        Entity() {
            std::cout<< "Entity created!" << '\n';
        }

        ~Entity() {
            std::cout << "Entity Destroyed!" << '\n';
        }
};

int main() {

    {
        Entity* e = new Entity();
        delete e;
    }

}