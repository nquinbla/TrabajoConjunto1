#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(21,12);

    std::cout << "La suma de 21 y 12 es " << resultado << "\n";

    return 0;
}