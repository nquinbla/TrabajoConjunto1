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
        std::cout << "Elemento 0 " << i << ": " << *ptr << std::endl;
        ptr++;
    }

    int *p_dyn = new int;
    *p_dyn = 33;
    std::cout << "\nAsignacion de Memoria Dinamica: " << std::endl;
    std::cout << "Valor a traves del puntero p_dyn: " << *p_dyn << std::endl;
    delete p_dyn;

    int arr2[] = {10, 20, 30, 40, 50};
    int *ptr2 = arr2;
    std::cout << "\nAritmetica de Punteros: " << std::endl;
    std::cout << "Elemento 0: " << *ptr2 << std::endl;
    ptr2++;
    std::cout << "Elemento 1: " << *ptr2 << std::endl;
    std::cout << "Elemento 2: " << *ptr2 << std::endl;
    std::cout << "Elemento 3: " << *ptr2 << std::endl;
    std::cout << "Elemento 4: " << *ptr2 << std::endl;

    return 0;
}
