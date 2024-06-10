#include "H_pregunta01.h"

float calcularPromedio(const std::vector<Estudiante>& estudiantes) {
    float suma = 0.0;
    for (const auto& estudiante : estudiantes) {
        suma += estudiante.calificacion;
    }
    return estudiantes.empty() ? 0.0 : suma / estudiantes.size();
}

int contarEstudiantesEncimaPromedio(const std::vector<Estudiante>& estudiantes, float promedio) {
    int contador = 0;
    for (const auto& estudiante : estudiantes) {
        if (estudiante.calificacion > promedio) {
            contador++;
        }
    }
    return contador;
}

Estudiante encontrarMejorEstudiante(const std::vector<Estudiante>& estudiantes) {
    auto maxElement = std::max_element(estudiantes.begin(), estudiantes.end(),
                                       [](const Estudiante& a, const Estudiante& b) {
                                           return a.calificacion < b.calificacion;
                                       });
    return *maxElement;
}
