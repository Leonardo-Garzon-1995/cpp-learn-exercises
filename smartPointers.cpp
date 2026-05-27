#include <iostream>
#include <memory>

/*
Way to automatically manage memory for pointers and stuff allocated in the heap*/

template<typename T>

class SmartPointer {
    private:
        T* ptr; // When creating the smart pointer you need to use the new keyword 
    public:
        // Constructor
        SmartPointer(T* p) : ptr(p) {
            std::cout << "Initilize samrt pointer\n";
        }

        // Desctructor 
        ~SmartPointer() {
            std::cout << "destroy smart pointer\n";
            delete ptr;
        }

        T* getPtr() {
            return ptr;
        }

        T getValue() {
            return *ptr;
        }
};

class Entity {
    public:
        Entity() {
            std::cout << "Entity Created\n";
        }

        ~Entity() {
            std::cout << "Entity destroyed\n";
        }

        void printHello() {
            std::cout << "Hello\n";
        }
};


int main() {
    // My own smart pointer 
    std::cout << "My own smart pointer\n";
    {
        SmartPointer<int> p(new int(10));
        std::cout << p.getPtr() << '\n';
        std::cout << p.getValue() << '\n';
    }

    // UNIQUE POINTER
    // Scoped pointer - You can't copy an unique pointer
    std::cout << "==============================================\n";
    std::cout << "Unique pointer\n";
    {
        std::unique_ptr<Entity> uniquePtr(new Entity());
        std::unique_ptr<Entity> uniquePtr2 = std::make_unique<Entity>(); // Safest way to create a unique pointer
        uniquePtr->printHello();
    }

    
    std::cout << "==============================================\n";
    std::cout << "Shared pointer\n";
    {
        std::shared_ptr<Entity> e2;
        {
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); 
            std::weak_ptr<Entity> weak = sharedEntity; // it does not increase the count
            e2 = sharedEntity; // It shares the ownership with sharedEntity pointer
            e2->printHello();

        }
    }
    
    return 0;
}