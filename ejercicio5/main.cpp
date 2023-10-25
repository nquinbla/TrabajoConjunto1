#include <iostream>
#include <cstdarg>
#include "funciones.h"

//Declaracion de una funcion
int suma(int a, int b) {
    return a + b;
}

//Funciones y procedimientos
double calcularAreaRectangulo(double longitud, double altura) {
    return longitud * altura;
}
void imprimirMensaje() {
    std::cout << "Voy a jugar un rato al Rust en vez de programar." << std::endl;
}

//LLamada de las funciones
int resta(int a, int b) {
    return  a - b;
}
int multiplicacion(int a, int b) {
    return a * b;
}
double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Esto no funciona con el valor de cero." << std::endl;
        return 0;
    }
}

//Gestion de las variables locales
void ejemploFuncion() {
    int variableLocal = 5;
    std::cout << "Dentro de la funcion variableLocal = " << variableLocal << std::endl;
}

//Definicion de funciones homonimas (polimorfismo)
float suma(float a, float b) {
    return a + b;
}
std::string suma(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

//Funciones con numero variable de argumentos
double promedio(int count, ...) {
    va_list args;
    va_start(args, count);
    double suma = 0;
    for (int i = 0; i < count; ++i) {
        suma += va_arg(args, double);
    }
    va_end(args);
    return suma / count;
}

//Asignacion de valores por defecto a los argumentos
int suma2(int c, int d = 0) {
    return c + d;
}

//Funciones en linea
inline int suma3(int e, int f) {
    return e + f;
}

//Funciones recursivas
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    //Declaracion de una funcion
    int resultado1 = suma(5, 3);
    std::cout << "La suma de 5 y 3 es " << resultado1 << "\n";

    //Funciones y procedimientos
    double longitud = 4.0;
    double altura = 7.0;
    double area = calcularAreaRectangulo(longitud, altura);
    std::cout << "El area del rectangulo es: " << area << std::endl;
    imprimirMensaje();

    //LLamada de las funciones
    int  num1 = 121;
    int num2 = 11;
    int resultadoResta = resta(num1, num2);
    std::cout << "Resta: " << resultadoResta << std::endl;
    int resultadoMultiplicacion = multiplicacion(num1, num2);
    std::cout << "Multiplicacion: " << resultadoMultiplicacion << std::endl;
    double  resultadoDivision = division(num1, num2);
    std::cout << "Division: " << resultadoDivision << std::endl;

    //Gestion de las variables locales
    int variableMain = 50;
    std::cout << "En main: variableMain = " << variableMain << std::endl;
    ejemploFuncion();

    //Definicion de funciones homonimas (polimorfismo)
    int entero1 = 22, entero2 = 17;
    float flotante1= 3.5f, flotante2 = 2.2f;
    std::string cadena1 = "Hola Ruso, ";
    std::string cadena2 = "Te rusheo!";
    int resultadoEntero = suma(entero1, entero2);
    float resultadoFlotante = suma(flotante1, flotante2);
    std::string resultadoCadena = suma(cadena1, cadena2);
    std::cout << "Suma de enteros: " << resultadoEntero << std::endl;
    std::cout << "Suma de numeros de punto flotante: " << resultadoFlotante << std::endl;
    std::cout << "Concatenacion de cadenas: " << resultadoCadena << std::endl;

    //Funciones con numero variable de argumentos
    double avg1 = promedio(3, 10.0, 15.0, 20.0);
    double avg2 = promedio(4, 2.0, 4.0, 6.0, 8.0);
    std::cout << "Promedio 1: " << avg1 << std::endl;
    std::cout << "Promedio 2: " << avg2 << std::endl;

    //Asignacion de valores por defecto a los argumentos
    int num3 = 99;
    int num4 = 11;
    int resultado2 = suma2(num3);
    std::cout << "Resultado 2: " << resultado1 << std::endl;
    int resultado3 = suma2(num3, num4);
    std::cout << "Resultado 3: " << resultado2 << std::endl;

    //Funciones en linea
    int num5 = 123;
    int num6 = 123;
    int resultado4 = suma3(num5, num6);
    std::cout << "Resultado de la suma: " << resultado4 << std::endl;

    //Funciones externas de tipo C
    int resultado5 = miFuncionExterna();
    std::cout << "El resultado de la funcion externa es: " << resultado5 << std::endl;

    //Funciones recursivas
    int num7 = 6;
    int resultado6 = factorial(num7);
    std::cout << "El factorial de " << num7 << " es " << resultado6 << std::endl;

    std::cout << "Funcion main sin argumento" << std::endl;
    return 0;
}

int main2(int argc, char* argv[]) {
    std::cout << "Funcion main con argumentos de linea de comandos" << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }
    return 1;
}

int main3(int argc, char* argv[], char* envp[]) {
    std::cout << "Funcion main con argumentos de ambiente" << std::endl;
    return 2;
}