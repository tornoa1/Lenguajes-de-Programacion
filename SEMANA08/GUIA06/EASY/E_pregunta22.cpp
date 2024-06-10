#include "E_pregunta22.h"

void imprimirFibonacci(int N) {
    int a = 0, b = 1, siguiente;
    std::cout << "Los primeros " << N << " terminos de la secuencia de Fibonacci son:" << std::endl;
    
    for (int i = 1; i <= N; ++i) {
        if (i == 1) {
            std::cout << a << " ";
        } else if (i == 2) {
            std::cout << b << " ";
        } else {
            siguiente = a + b;
            a = b;
            b = siguiente;
            std::cout << siguiente << " ";
        }
    }
    std::cout << std::endl;
}