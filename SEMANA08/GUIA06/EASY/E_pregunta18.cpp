#include "E_pregunta18.h"

void imprimirCaracteresIndividuales(char arr[], int tamano) {
    std::cout << "Caracteres: ";
    for (int i = 0; i < tamano; i++) {
        if (arr[i] == '\0') {
            break;
        }
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}