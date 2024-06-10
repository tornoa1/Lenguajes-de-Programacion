#include <iostream>
#include <string>
#include "M_pregunta01.h"
#include "M_pregunta02.h"
#include "M_pregunta03.h"
#include "M_pregunta04.h"
#include "M_pregunta05.h"
#include "M_pregunta06.h"
#include "M_pregunta07.h"
#include "M_pregunta08.h"
#include "M_pregunta09.h"

struct Triangulo
{
    int base;
    int altura;
};

int main(){
    //Pregunta 1
    // int talla, peso;
    // std::cout << "Ingres su talla (en cm): ";
    // std::cin >> talla;
    // std::cout << "Ingres su peso (en kg): ";
    // std::cin >> peso;
    // calcularIMC(talla, peso);

    //Pregunta 2
    // int numeros[] = {5, 12, 20, 32, 1, 8, 15};
    // std::cout << "Array original: ";
    // printArray(numeros, 7);
    // bubbleSort(numeros, 7);
    // std::cout << "Array ordenado: ";
    // printArray(numeros, 7);

    //Pregunta 3
    // Triangulo t1;
    // std::cout << "Ingrese la base: ";
    // std::cin >> t1.base;
    // std::cout << "Ingrese la altura: ";
    // std::cin >> t1.altura;
    // double area = areaTriangulo(t1.base, t1.altura);
    // std::cout << "La altura es: " << area << std::endl;

    //Pregunta 4
    //generarNumeroParMultiploDe5();

    //Pregunta 5
    // int numeros[] = {12, 20, 1, 8, 15};
    // mostrarNumerosPrimos(numeros, 5);

    //Pregunta 6
    // int dia;
    // std::cout << "Ingrese un numero (1-7) para obtener el dia de la semana: ";
    // std::cin >> dia;
    // imprimirDiaSemana(dia);

    //Pregunta 7
    // int num;
    // std::cout << "Ingrese la tabla de multiplicar deseada: ";
    // std::cin >> num;
    // tablaDeMultiplicar(num);

    //Pregunta 8v1
    // int numEstudiantes;
    // std::cout << "Ingrese el número de estudiantes: ";
    // std::cin >> numEstudiantes;
    // Estudiante* estudiantes = new Estudiante[numEstudiantes];
    // ingresarDatosEstudiantes(estudiantes, numEstudiantes);
    // Estudiante mejorEstudiante = encontrarMejorEstudiante(estudiantes, numEstudiantes);
    // std::cout << "Estudiante con el mayor promedio:" << std::endl;
    // imprimirEstudiante(mejorEstudiante);
    // delete[] estudiantes;

    //Pregunta 8v2
    // const int numEstudiantes = 5;
    // Estudiante estudiantes[numEstudiantes] = {
    //     {"Juan", 20, 85.5},
    //     {"Ana", 22, 92.0},
    //     {"Luis", 21, 76.5},
    //     {"María", 19, 88.5},
    //     {"Carlos", 23, 91.0}
    // };
    // Estudiante mejorEstudiante = encontrarMejorEstudiante(estudiantes, numEstudiantes);
    // std::cout << "Estudiante con el mayor promedio:" << std::endl;
    // imprimirEstudiante(mejorEstudiante);

    //Pregunta 9
    // int numContactos = 3;

    // Contacto contactos[numContactos] = {
    //     {"Juan", "123456789", "juan@example.com"},
    //     {"María", "987654321", "maria@example.com"},
    //     {"Pedro", "456789123", "pedro@example.com"}
    // };

    // std::string nombreBusqueda;
    // std::cout << "Ingrese el nombre del contacto a buscar: ";
    // std::cin >> nombreBusqueda;

    // Contacto* contactoEncontrado = buscarContactoPorNombre(contactos, numContactos, nombreBusqueda);
    // imprimirContacto(contactoEncontrado);

    return 0;
}