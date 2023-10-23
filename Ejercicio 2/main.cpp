#include <iostream>

int main() {
    int edad;
    std::cout << "Por favor, introduzca su edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Usted es mayor de edad.\n";
    } else {
        std::cout << "Usted es menor de edad.\n";
    }
    return 0;
}

