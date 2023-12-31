#include <iostream>

int main() {
    // Punteros a Variables
    int x = 23;
    int *p = &x;
    std::cout << "Punteros a Variables: " << std::endl;
    std::cout << "Valor de x: " << x << std::endl;
    std:: cout << "Valor a traves del puntero p: " << *p << std::endl;

    // Punteros y Arrays
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr =arr;
    std::cout << "\nPunteros y Arrays: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento 0 " << i << ": " << *ptr << std::endl;
        ptr++;
    }

    // Asignacion de Memoria Dinamica
    int *p_dyn = new int;
    *p_dyn = 33;
    std::cout << "\nAsignacion de Memoria Dinamica: " << std::endl;
    std::cout << "Valor a traves del puntero p_dyn: " << *p_dyn << std::endl;
    delete p_dyn;

    // Aritmetica de Punteros
    int arr2[] = {10, 20, 30, 40, 50};
    int *ptr2 = arr2;
    std::cout << "\nAritmetica de Punteros: " << std::endl;
    std::cout << "Elemento 0: " << ptr2[2] << std::endl;
    std::cout << "Elemento 1: " << ptr2[1] << std::endl;
    std::cout << "Elemento 4: " << ptr2[3] << std::endl;
    std::cout << "Elemento 5: " << ptr2[0] << std::endl;
    std::cout << "Elemento 0: " << ptr2[4] << std::endl;

    // Punteros a Punteros
    int y = 43;
    int *p1 = &y;
    int **p2 = &p1;
    std::cout << "\nPunteros a Punteros: " << std::endl;
    std::cout << "Valor de y: " << y << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Acceso a traves de p1: " << std::endl;
    std::cout << "Valor a traves de p1: " << *p1 << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Acceso a traves de p2: " << std::endl;
    std::cout << "Valor a traves de p2: " << **p2 << std::endl;
    std::cout << "-----------------------" << std::endl;

    // Punteros a Funciones
    int (*functionPtr)(int, int) = [](int a, int b) { return a *b; };
    int result = functionPtr(3, 4);
    std::cout << "\nPunteros a Funciones: " << std::endl;
    std::cout << "Resultado: " << result << std::endl;

    return 0;
}
