#include <iostream>

int main() {
    int x = 23;
    int *p = &x;
    std::cout << "Punteros a Variables: " << std::endl;
    std::cout << "Valor de x: " << x << std::endl;
    std:: cout << "Valor a traves del puntero p: " << *p << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr =arr;
    std::cout << "\nPunteros y Arrays: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *ptr << std::endl;
        ptr++;
    }
    return 0;
}
