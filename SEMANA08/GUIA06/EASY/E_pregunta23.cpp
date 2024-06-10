#include "E_pregunta23.h"

void llenarMatriz(int matriz[3][3]) {
    srand(time(0));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = rand() % 9 + 1;
        }
    }
}

void imprimirMatriz(const int matriz[3][3]) {
    srand(time(0));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int sumaDiagonalPrincipal(const int matriz[3][3]) {
    int suma = 0;
    for (int i = 0; i < 3; ++i) {
        suma += matriz[i][i];
    }
    return suma;
}