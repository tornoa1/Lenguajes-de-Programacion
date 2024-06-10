#include "E_pregunta25.h"

void mostrarPalabra(const std::string& palabra, const std::string& letrasAdivinadas) {
    for (char letra : palabra) {
        if (letrasAdivinadas.find(letra) != std::string::npos) {
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

void mostrarLetrasIncorrectas(const std::string& letrasIncorrectas) {
    std::cout << "Letras incorrectas: ";
    for (char letra : letrasIncorrectas) {
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}

bool letraYaIngresada(char letra, const std::string& letrasAdivinadas, const std::string& letrasIncorrectas) {
    return letrasAdivinadas.find(letra) != std::string::npos || letrasIncorrectas.find(letra) != std::string::npos;
}

void jugarAhorcado(const std::string& palabraSecreta) {
    const int MAX_INTENTOS = 5;
    std::string letrasAdivinadas = "";
    std::string letrasIncorrectas = "";
    char letra;

    std::cout << "Intenta adivinar la palabra." << std::endl;
    std::cout << "Tienes " << MAX_INTENTOS << " intentos." << std::endl;
    std::cout << std::endl;

    for (int intentos = 0; intentos < MAX_INTENTOS; ++intentos) {
        std::cout << "Intento #" << intentos + 1 << std::endl;
        mostrarPalabra(palabraSecreta, letrasAdivinadas);
        mostrarLetrasIncorrectas(letrasIncorrectas);

        std::cout << "Ingresa una letra: ";
        std::cin >> letra;
        letra = toupper(letra);

        if (letraYaIngresada(letra, letrasAdivinadas, letrasIncorrectas)) {
            std::cout << "¡Ya ingresaste esa letra! Intenta con otra." << std::endl;
            continue;
        }

        if (palabraSecreta.find(letra) != std::string::npos) {
            letrasAdivinadas += letra;
            std::cout << "Correcto!" << std::endl;
        } else {
            letrasIncorrectas += letra;
            std::cout << "Incorrecto." << std::endl;
        }

        bool palabraCompleta = true;
        for (char letra : palabraSecreta) {
            if (letrasAdivinadas.find(letra) == std::string::npos) {
                palabraCompleta = false;
                break;
            }
        }

        if (palabraCompleta) {
            std::cout << "¡Felicidades! ¡Has adivinado la palabra!" << std::endl;
            std::cout << "La palabra era: " << palabraSecreta << std::endl;
            return;
        }
    }

    std::cout << "¡Oh no! ¡Has agotado todos tus intentos!" << std::endl;
    std::cout << "La palabra era: " << palabraSecreta << std::endl;
}