#include <iostream>

int main() {
    int numeros[33];

    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << numeros[i] << "\n";
    }

    return 0;
}
