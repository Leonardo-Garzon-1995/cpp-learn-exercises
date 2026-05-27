#include <iostream>
#include <vector> 
#include <string>

struct Vertex {
    float x {};
    float y {};
    float z {};
};

std::ostream& operator<<(std::ostream& os, const Vertex& v) {
    os << v.x << ", " << v.y << ", " << v.z;

    return os;
}

int main() {
    std::vector<Vertex> vertices {};
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    std::cout << vertices[2];
}