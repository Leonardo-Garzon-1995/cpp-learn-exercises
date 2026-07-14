// The main purpose of namespaces is to 
// avoid name collisions (conflicts) in projects,
// especially when your project includes multiple libraries.
#include <iostream>

namespace apple {
    namespace functions {
        void print(const char* text) {
            std::cout << text << '\n';
        }
    }
}

namespace melon {
    namespace functions {
        std::string get_name() {
            return "Melon function";
        }
    }
}

namespace orange {

    void print(const char* text) {
        std::string temp = text;

        std::cout << temp << '\n';
    }
}

namespace grape {
    namespace functions {

    
        void print(const char* text) {
            std::cout << text << '\n';
        }
    }
}

namespace melonFunctions = melon::functions;

int main() {
    using namespace grape::functions;

    print("This is the grape::functions::print() symbol");
    apple::functions::print("Hello");
    orange::print("Bye");

    std::cout << melonFunctions::get_name() << '\n';
}