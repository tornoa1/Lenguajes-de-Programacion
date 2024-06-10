#include "E_pregunta14.h" 

int sumarCienPrimerosNumeros(){
    int suma, n = 1;
    
    while (n <= 100)
    {
        suma += n;
        n++;
    }

    return suma;
}