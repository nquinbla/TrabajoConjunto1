#include <iostream>
#include <string>

int main() {
    // Paso 2: Declara dos variables: una string para el nombre y una integer para la edad.
    std::string nombre;
    int edad;

    // Paso 3: Solicita al usuario su nombre
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;

    // Paso 4: Solicita al usuario su edad
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    // Paso 5: Imprime la edad y el nombre del usuario
    std::cout << "Hola, " << nombre << "! Tienes " << edad << " años.\n";

    return 0;
}

