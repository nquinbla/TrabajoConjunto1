#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(5, 3);
    std::cout << "La suma de 5 y 3 es " << resultado << "\n";

    return 0;
}
