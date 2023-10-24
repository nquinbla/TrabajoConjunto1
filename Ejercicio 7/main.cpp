#include <iostream>

int main() {
    int numero = 10;
    int& referencia_numero = numero;

    std::cout << "El valor de numero es: " << numero << std::endl;
    std::cout << "El valor de referencia_numero es: " << referencia_numero << std::endl;

    referencia_numero = 20;

    std::cout << "El nuevo valor de numero es: " << numero << std::endl;

    return 0;
}