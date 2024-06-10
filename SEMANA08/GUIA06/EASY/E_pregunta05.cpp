#include "E_pregunta05.h"

void imprimirImpares(){
    int n = 1;

    do
    {
        if (n % 2 != 0)
        {
            std::cout << n << " ";
            std::cout << std::endl;
        }
        n++;
    } while (n <= 10);
    
    
}