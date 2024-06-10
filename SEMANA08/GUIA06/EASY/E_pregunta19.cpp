#include "E_pregunta19.h"

void almacenarNumeros(int arr[], int tamano)
{
    std::cout << "Ingrese " << tamano << " numeros enteros:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cin >> arr[i];
    }
}

int numeroMayor(int arr[], int tamano){
    int mayor = 0;
    for (int i = 0; i < tamano; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }
    return mayor;
}