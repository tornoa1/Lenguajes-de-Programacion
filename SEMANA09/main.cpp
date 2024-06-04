#include <iostream>
#include "pregunta13.h"

int main(){
    // PREGUNTA 10
    // int num1 = 10;
    // int num2 = 20;
    // int respuesta = 0;
    // operar(num1, num2, &respuesta);

    // std :: cout << respuesta;

    int* arr = inputArreglo(5);
    printArreglo(arr, 5);
    
    int* arr2 = generateArreglo(5);
    printArreglo(arr2, 5);

    return 0;
}