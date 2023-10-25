#include <iostream>

int main() {
    // Paso 2: Declara un array de 10 enteros
    int numeros[10];

    // Paso 3: Llena el array con los primeros 10 números naturales
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    // Paso 4: Imprime todos los elementos del array
    for (int i = 0; i < 10; i++) {
        std::cout << numeros[i] << "\n";
    }

    return 0;
}