#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Estudiante {
    std::string nombre;
    float calificacion;
};

float calcularPromedio(const std::vector<Estudiante>& estudiantes);
int contarEstudiantesEncimaPromedio(const std::vector<Estudiante>& estudiantes, float promedio);
Estudiante encontrarMejorEstudiante(const std::vector<Estudiante>& estudiantes);
