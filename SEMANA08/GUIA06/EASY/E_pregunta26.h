#include <iostream>
#include <cstdlib>
#include <ctime>

enum Opcion { PIEDRA, PAPEL, TIJERA };
Opcion obtenerJugada();
Opcion obtenerJugadaComputadora();
float determinarResultado(Opcion jugador, Opcion computadora);
void jugarPartida();