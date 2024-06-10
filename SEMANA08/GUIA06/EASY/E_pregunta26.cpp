#include "E_pregunta26.h"

Opcion obtenerJugada() {
    std::string jugada;
    std::cout << "Ingresa tu jugada (pi/pa/ti): ";
    std::cin >> jugada;

    if (jugada == "pi") {
        return PIEDRA;
    } else if (jugada == "pa") {
        return PAPEL;
    } else if (jugada == "ti") {
        return TIJERA;
    } else {
        std::cout << "Jugada invalida. Intenta de nuevo." << std::endl;
        return obtenerJugada();
    }
}

Opcion obtenerJugadaComputadora() {
    return static_cast<Opcion>(rand() % 3);
}

float determinarResultado(Opcion jugador, Opcion computadora) {
    if (jugador == computadora) {
        return 0.5;
    } else if ((jugador == PIEDRA && computadora == TIJERA) ||
               (jugador == PAPEL && computadora == PIEDRA) ||
               (jugador == TIJERA && computadora == PAPEL)) {
        return 1.0;
    } else {
        return 0.0;
    }
}

void jugarPartida() {
    Opcion jugadaJugador = obtenerJugada();
    Opcion jugadaComputadora = obtenerJugadaComputadora();

    std::string jugadas[] = {"Piedra", "Papel", "Tijera"};
    std::cout << "Tu jugada: " << jugadas[jugadaJugador] << std::endl;
    std::cout << "Jugada de la computadora: " << jugadas[jugadaComputadora] << std::endl;

    float puntaje = determinarResultado(jugadaJugador, jugadaComputadora);

    if (puntaje == 1.0) {
        std::cout << "¡Ganaste esta partida! (+1 punto)" << std::endl;
    } else if (puntaje == 0.5) {
        std::cout << "¡Empate en esta partida! (+0.5 puntos)" << std::endl;
    } else {
        std::cout << "¡Perdiste esta partida! (0 puntos)" << std::endl;
    }
}