#include "M_pregunta01.h"

void calcularIMC(int talla, int peso){
    double imc = peso / ((talla)^2);
    if (imc < 18.5) {
        std::cout << "Bajo peso" << std::endl;
    } else if (imc >= 18.5 && imc < 25) {
        std::cout << "Normal" << std::endl;
    } else if (imc >= 25 && imc < 30) {
        std::cout << "Sobrepeso" << std::endl;
    } else if (imc >= 30) {
        std::cout << "Obesidad" << std::endl;
    }
}