#include "pregunta13.h"

int* inputArreglo(int tam){

    int* arreglo = new int[tam];

    for (size_t i = 0; i < tam; i++)
    {
        int num;
        std::cin >> num;

        arreglo[i] = num;
    }

    return arreglo;
    
}

int* generateArreglo(int tam){
    srand(time(NULL)); //Inicializar semilla
    
    int* arreglo = new int[tam];

    for (size_t i = 0; i < tam; i++)
    {
        arreglo[i] = 1+ (rand() % 10);
    }
    return arreglo;
}

void printArreglo(int* arreglo, int n){
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
    
}