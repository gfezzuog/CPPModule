#include "Template.hpp"
#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int c;

    c = max<int>(a, b);
    std::cout << "max: " << c << std::endl;

    c = min<int>(a, b);
    std::cout << "min: " << c << std::endl;

    std::cout << "old a: " << a << std::endl;
    std::cout << "old b: " << b << std::endl;
    std::cout << "_______" << std::endl;
    swap<int>(a, b);
    std::cout << "new a: " << a << std::endl;
    std::cout << "new b: " << b << std::endl;
}