#include "E_pregunta21.h"

void adivinarNumero(){
    srand(time(0));
    int numeroAleatorio = rand() % 100 + 1;
    int numeroUsuario;

    do {
        std::cout << "Ingrese su adivinanza: ";
        std::cin >> numeroUsuario;

        if (numeroUsuario < numeroAleatorio) {
            std::cout << "El numero es mayor. Intenta de nuevo." << std::endl;
        } else if (numeroUsuario > numeroAleatorio) {
            std::cout << "El numero es menor. Intenta de nuevo." << std::endl;
        } else {
            std::cout << "Felicidades! Adivinaste el numero." << std::endl;
        }
    } while (numeroUsuario != numeroAleatorio);
}