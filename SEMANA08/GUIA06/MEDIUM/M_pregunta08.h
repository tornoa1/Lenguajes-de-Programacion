#include <iostream>
#include <string>

struct Estudiante
{
    std :: string nombre;
    size_t edad;
    float promedio;
};

Estudiante encontrarMejorEstudiante(const Estudiante estudiantes[], int size);
void imprimirEstudiante(const Estudiante& estudiante);

// void ingresarDatosEstudiantes(Estudiante* estudiantes, int numEstudiantes);
// Estudiante encontrarMejorEstudiante(const Estudiante estudiantes[], int size);
// void imprimirEstudiante(const Estudiante& estudiante);