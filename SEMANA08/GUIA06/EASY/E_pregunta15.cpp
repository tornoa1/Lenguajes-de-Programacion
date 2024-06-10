#include "E_pregunta15.h"

void tablaDeMultiplicarDel5(){
    int multiplicador = 1;

    std::cout << "Tabla de multiplicar del 5:" << std::endl;
    do {
        std::cout << "5 x " << multiplicador << " = " << 5 * multiplicador << std::endl;
        multiplicador++;
    } while (multiplicador <= 10);
}