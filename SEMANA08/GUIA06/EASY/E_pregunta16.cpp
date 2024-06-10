#include "E_pregunta16.h"

void vocalOConsonante(char caracter){
    switch (tolower(caracter)) {
        case 'a':
            std::cout << "Vocal" << std::endl;
            break;
        case 'e':
            std::cout << "Vocal" << std::endl;
            break;
        case 'i':
            std::cout << "Vocal" << std::endl;
            break;
        case 'o':
            std::cout << "Vocal" << std::endl;
            break;
        case 'u':
            std::cout << "Vocal" << std::endl;
            break;
        default:
            std::cout << "Consonante" << std::endl;
            break;
    }
}