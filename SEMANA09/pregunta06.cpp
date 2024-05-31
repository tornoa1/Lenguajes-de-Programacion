#include "pregunta06.h"

int* generarArreglo(int n)
{
    int* arr = new int[n]; 

    for (int i = 0; i < n; i++)
    {
        int numero;
        std::cin >> numero;
        arr[i] = numero;
    }
    
    return arr;
}

void imprimirArreglo(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void imprimirArregloBackward(int* arr, int n){
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* agregarNumero(int* arr, int n, int num){
    int* nuevoArr = new int[n + 1];

    for (size_t i = 0; i < n; i++)
    {
        nuevoArr[i] = arr[i];
    }
    nuevoArr[n] = num;

    delete[] arr;

    return nuevoArr;
}