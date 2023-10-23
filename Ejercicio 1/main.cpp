#include <iostream>
#include <string>

int main()
{
    std::string nombre;
    int edad;

    std::cout << "Por favor, introduzca su nombre: ";
    std::cin >> nombre;

    std::cout << "A continuacion, introduzca su edad: ";
    std::cin >> edad;

    std::cout << "Hola, " << nombre << "! Tienes " << edad << " años.\n";

    return 0;
}
