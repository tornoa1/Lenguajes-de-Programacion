#include "M_pregunta04.h"

void generarNumeroParMultiploDe5() {
    srand(time(0));
    int numero;

    do {
        numero = rand();
        std::cout << "Numero generado: " << numero << std::endl;
    } while (numero % 2 != 0 || numero % 5 != 0);

    std::cout << "Numero par y multiplo de 5 encontrado: " << numero << std::endl;
}