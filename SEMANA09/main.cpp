#include "pregunta01.h"
#include "pregunta03.h"
#include "pregunta06.h"
#include <iostream>

int main(){
    int* arregloGenerado =
        generarArreglo(5);
    imprimirArreglo(arregloGenerado, 5);
    imprimirArregloBackward(arregloGenerado, 5);
    arregloGenerado = agregarNumero(arregloGenerado, 5, 30);
    imprimirArreglo(arregloGenerado, 6);
    
    return 0;
}