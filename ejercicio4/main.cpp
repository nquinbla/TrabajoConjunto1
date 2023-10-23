#include <iostream>

int main() {
    int numeros [10];

    for (int i = 0; i < 10; i++) {
        numeros [i] = i + 1;
    }

    for (int numero : numeros) {
        std::cout << numero << "\n";
    }
    return 0;
}
