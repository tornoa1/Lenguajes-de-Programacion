#include "E_pregunta08.h"

void asignarValores(int arr[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        arr[i] = i + 1;
    }
}

void imprimirArray(const int arr[], int tamano) {
    std::cout << "Los elementos del array son: ";
    for (int i = 0; i < tamano; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}