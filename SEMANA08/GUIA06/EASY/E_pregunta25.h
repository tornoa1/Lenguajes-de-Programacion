#include <iostream>
#include <string>
#include <cctype>

void mostrarPalabra(const std::string& palabra, const std::string& letrasAdivinadas);
void mostrarLetrasIncorrectas(const std::string& letrasIncorrectas);
bool letraYaIngresada(char letra, const std::string& letrasAdivinadas, const std::string& letrasIncorrectas);
void jugarAhorcado(const std::string& palabraSecreta);