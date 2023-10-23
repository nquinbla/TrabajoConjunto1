#include <iostream>

// Constantes simbolicas
#define PI 3.14159265359
const int edadMinima = 18;

// El tipo void
void saludo() {
    std::cout << "Hola, Mundo!" << std::endl;
}

// Alias de tipo con typedef
typedef double Precio;

// Constantes y enumeraciones
enum Color { ROJO, VERDE, AZUL };

int main() {
    // Constantes simbolicas
    double radio = 5.0;
    double area = PI * radio * radio;
    std::cout << "Area del circulo: " << area << std::endl;

    // El tipo void
    saludo();

    // Alias de tipo con typedef
    Precio producto = 38.99;
    std::cout << "El precio del producto es: " << producto << " euros" << std::endl;

    // Constantes y enumeraciones
    Color miColor = AZUL;
    std::cout << "Edad minima permitida: " << edadMinima << " años" << std::endl;
    std::cout << "Mi color favorito es: ";

    if (miColor == ROJO) {
        std::cout << "Rojo";
    } else if (miColor == VERDE) {
        std::cout << "Verde" ;
    } else if (miColor == AZUL) {
        std::cout << " Azul";
    }

    std:: cout << std::endl;

    return 0;
}
