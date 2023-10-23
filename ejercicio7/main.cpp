#include <iostream>

int main() {
    int x = 53;
    int &ref_x = x;
    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor a traves de la referencia ref_x: " << ref_x << std::endl;

    ref_x = 99;
    std::cout << "Nuevo valor de x: " << x << std::endl;
    std::cout << "Nuevo valor a traves de la referencia ref_x: " << ref_x << std::endl;

    return 0;
}
