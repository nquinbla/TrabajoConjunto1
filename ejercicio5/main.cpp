#include <iostream>
#include <cstdarg>

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
    int resultado 1 = suma2(num3);
    std::cout << "Resultado 1: " << resultado1 <<


}
