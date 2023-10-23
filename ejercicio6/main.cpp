#include <iostream>

int main() {
    int x = 23;
    int *p = &x;
    std::cout << "Punteros a Variables: " << std::endl;
    std::cout << "Valor de x: " << x << std::endl;
    std:: cout << "Valor a traves del puntero p: " << *p << std::endl;
    return 0;
}
