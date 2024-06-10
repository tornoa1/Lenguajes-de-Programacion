#include "E_pregunta09.h"

void almacenarNumeros(int arr[], int tamano)
{
    std::cout << "Ingrese " << tamano << " numeros enteros:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cin >> arr[i];
    }
}

int calcularSuma(int arr[], int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += arr[i];
    }
    return suma;
}