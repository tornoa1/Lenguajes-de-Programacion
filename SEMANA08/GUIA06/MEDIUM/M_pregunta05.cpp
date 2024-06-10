#include "M_pregunta05.h"

bool esPrimo(int num){
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void mostrarNumerosPrimos(int numeros[], int tam){
    for (int i = 0; i < tam; i++)
    {
        if (esPrimo(numeros[i]))
        {
            std::cout << numeros[i] << " ";
        }
    }
}