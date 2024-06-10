#include "M_pregunta08.h"

Estudiante encontrarMejorEstudiante(const Estudiante estudiantes[], int size) {
    Estudiante mejorEstudiante = estudiantes[0];
    for (int i = 1; i < size; i++) {
        if (estudiantes[i].promedio > mejorEstudiante.promedio) {
            mejorEstudiante = estudiantes[i];
        }
    }
    return mejorEstudiante;
}

// Función para imprimir los datos de un estudiante
void imprimirEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

// void ingresarDatosEstudiantes(Estudiante* estudiantes, int numEstudiantes) {
//     for (int i = 0; i < numEstudiantes; ++i) {
//         std::cout << "Ingrese los datos del estudiante " << i + 1 << std::endl;
//         std::cout << "Nombre: ";
//         std::cin.ignore(); // Ignorar el salto de línea previo
//         std::getline(std::cin, estudiantes[i].nombre);
//         std::cout << "Edad: ";
//         std::cin >> estudiantes[i].edad;
//         std::cout << "Promedio: ";
//         std::cin >> estudiantes[i].promedio;
//     }
// }

// Estudiante encontrarMejorEstudiante(const Estudiante estudiantes[], int size) {
//     Estudiante mejorEstudiante = estudiantes[0];
//     for (int i = 1; i < size; i++) {
//         if (estudiantes[i].promedio > mejorEstudiante.promedio) {
//             mejorEstudiante = estudiantes[i];
//         }
//     }
//     return mejorEstudiante;
// }

// void imprimirEstudiante(const Estudiante& estudiante) {
//     std::cout << "Nombre: " << estudiante.nombre << std::endl;
//     std::cout << "Edad: " << estudiante.edad << std::endl;
//     std::cout << "Promedio: " << estudiante.promedio << std::endl;
// }