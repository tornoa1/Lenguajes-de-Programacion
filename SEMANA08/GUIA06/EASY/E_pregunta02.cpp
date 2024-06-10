#include "E_pregunta02.h"

void verificarConFuncion(char letra){
    if (isupper(letra))
    {
        std::cout << "Es mayuscula" << " ";
    }else{
        std::cout << "Es miniscula" << " ";
    }
}

void verificarSinFuncion(char letra){
    if (letra >= 'A' && letra <= 'Z')
    {
        std::cout << "Es mayuscula" << " ";
    }
    else
    {
        std::cout << "Es minuscula" << " ";
    }
}