#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point inside(5, 5);
    Point outside(10, 10);
    Point edge(5, 0);
    Point vertex(0, 0);

    std::cout << "Ponto dentro do triângulo: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Ponto fora do triângulo: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "Ponto na borda do triângulo: " << bsp(a, b, c, edge) << std::endl;
    std::cout << "Ponto no vértice do triângulo: " << bsp(a, b, c, vertex) << std::endl;

    return 0;
}
