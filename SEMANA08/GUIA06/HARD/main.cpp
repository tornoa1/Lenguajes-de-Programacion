#include <iostream>
#include "H_pregunta01.h"
#include "H_pregunta02.h"
#include "H_pregunta03.h"

int main() {
    //Pregunta1
    // int numEstudiantes;
    // std::cout << "Ingrese el número de estudiantes: ";
    // std::cin >> numEstudiantes;
    // std::vector<Estudiante> estudiantes(numEstudiantes);
    // for (int i = 0; i < numEstudiantes; ++i) {
    //     std::cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
    //     std::cin >> estudiantes[i].nombre;
    //     std::cout << "Ingrese la calificación de " << estudiantes[i].nombre << ": ";
    //     std::cin >> estudiantes[i].calificacion;
    // }
    // float promedio = calcularPromedio(estudiantes);
    // std::cout << "El promedio del grupo es: " << promedio << std::endl;
    // int encimaPromedio = contarEstudiantesEncimaPromedio(estudiantes, promedio);
    // std::cout << "Número de estudiantes con calificaciones por encima del promedio: " << encimaPromedio << std::endl;
    // Estudiante mejorEstudiante = encontrarMejorEstudiante(estudiantes);
    // std::cout << "El estudiante con la mayor calificación es: " << mejorEstudiante.nombre
    //           << " con calificación " << mejorEstudiante.calificacion << std::endl;

    //Pregunta2
    // int numProductos;
    // std::cout << "Ingrese el número de productos: ";
    // std::cin >> numProductos;
    // Producto* inventario = new Producto[numProductos];
    // manejarMenu(inventario, numProductos);

    //Pregunta3
    const int numDias = 7;
    double temperaturas[numDias][2];

    ingresarTemperaturas(temperaturas, numDias);

    double promedioSemana = calcularPromedioSemana(temperaturas, numDias);
    std::cout << "Temperatura promedio de la semana: " << promedioSemana << std::endl;

    int diaMaxTemperatura = encontrarDiaTemperaturaMasAlta(temperaturas, numDias);
    std::cout << "Día con la temperatura más alta: Día " << diaMaxTemperatura << std::endl;

    int diaMinTemperatura = encontrarDiaTemperaturaMasBaja(temperaturas, numDias);
    std::cout << "Día con la temperatura más baja: Día " << diaMinTemperatura << std::endl;

    return 0;
}
