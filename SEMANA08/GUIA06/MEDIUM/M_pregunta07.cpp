#include "M_pregunta07.h"

void tablaDeMultiplicar(int num){
    int multiplicador = 1;

    std::cout << "Tabla de multiplicar del " << num << ":" << std::endl;
    do {
        std::cout << num << " x " << multiplicador << " = " << num * multiplicador << std::endl;
        multiplicador++;
    } while (multiplicador <= 10);
}