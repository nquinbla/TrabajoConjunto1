#include <iostream>

int main() {
    int edad;

    // Paso 2: Solicita al usuario su edad
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    // Paso 3: Verifica si el usuario es mayor de 18
    if (edad >= 18) {
        // Paso 4: Imprime un mensaje diciendo que el usuario es mayor de edad
        std::cout << "Eres mayor de edad.\n";
    } else {
        // Imprime un mensaje diciendo que el usuario es menor de edad
        std::cout << "Eres menor de edad.\n";
    }

    return 0;
}