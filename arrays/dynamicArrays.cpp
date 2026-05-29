#include <iostream>
#include <vector> 
#include <string>

struct Vertex {
    float x {};
    float y {};
    float z {};

    Vertex(float x, float y, float z) : x(x), y(y), z(z) {

    }

    // Copy constructor
    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z) {
        std::cout << "Copied\n";
    }
};

std::ostream& operator<<(std::ostream& os, const Vertex& v) {
    os << v.x << ", " << v.y << ", " << v.z;

    return os;
}

int main() {
    std::vector<Vertex> vertices {};
    vertices.reserve(3);  // defined the size of the initial vector. helps to avoid unecessary copying 
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});
    vertices.push_back(Vertex(7, 8, 9));

    std::cout << vertices[2];
}