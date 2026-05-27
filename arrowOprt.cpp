#include <iostream>
#include <string>

class Entity {
    public:
        void Print() const {
            std::cout << "Hello\n";
        }
};

class ScopedPtr {
    private:
        Entity* m_Obj;
    public:
        ScopedPtr(Entity* e) : m_Obj(e) {

        }

        ~ScopedPtr() {
            delete m_Obj;
        }

        Entity* operator->() {
            return m_Obj;
        }

};

int main() {

    Entity e;
    e.Print();

    Entity* ptr = &e;
    // ptr.Print(); // This will throw an error because it is a pointer not an instance of Entity

    // You can derefence it 
    (*ptr).Print(); // This is fine 

    // EVEN BETTER - USE and arrow oprator 
    ptr->Print();

    // You need to overload the arrow operator for this to work 
    ScopedPtr sPtr =  new Entity();
    sPtr->Print();

    return 0;
}