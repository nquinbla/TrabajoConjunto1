#include <iostream>
#include "main2.h"

int main2(int argc, char* argv[]) {
    std::cout << "Funcion main con argumentos de linea de comandos" << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }
    return 1;
}
