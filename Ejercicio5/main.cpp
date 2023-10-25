#include <iostream>

// Paso 2: Declara una función llamada 'suma'
int suma(int a, int b) {
    return a + b;
}

int main() {
    // Paso 3: Llama a la función 'suma' con dos números
    int resultado = suma(5, 3);

    // Paso 4: Imprime el resultado
    std::cout << "La suma de 5 y 3 es " << resultado << "\n";

    return 0;
}