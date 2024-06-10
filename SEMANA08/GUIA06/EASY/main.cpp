#include <iostream>
#include "E_pregunta01.h"
#include "E_pregunta02.h"
#include "E_pregunta03.h"
#include "E_pregunta04.h"
#include "E_pregunta05.h"
#include "E_pregunta06.h"
#include "E_pregunta07.h"
#include "E_pregunta08.h"
#include "E_pregunta09.h"
#include "E_pregunta13.h"
#include "E_pregunta14.h" 
#include "E_pregunta15.h"
#include "E_pregunta16.h"
#include "E_pregunta17.h"
#include "E_pregunta18.h"
#include "E_pregunta19.h"
#include "E_pregunta20.h"
#include "E_pregunta21.h"
#include "E_pregunta22.h"
#include "E_pregunta23.h"
#include "E_pregunta25.h"
#include "E_pregunta26.h"

struct Persona
{
    std :: string nombre;
    size_t edad;
};

struct Punto
{
    int x;
    int y;
};

struct Rectangulo
{
    int largo;
    int ancho;
};

int main(){

    // Pregunta 1
    // int edad = 25;
    // char letra = 'A';
    // imprimirEdad(edad);
    // std::cout << std::endl;
    // imprimirLetra(letra);

    // Pregunta 2
    // char letra = 'A';
    // verificarConFuncion(letra);
    // std::cout << std::endl;
    // verificarSinFuncion(letra);

    // Pregunta 3
    // imprimirNumeros();

    // Pregunta 4
    // imprimirNumerosWhile();

    // Pregunta 5
    // imprimirImpares();

    //Pregunta 6
    // int numero;
    // std::cout << "Ingrese un numero entero: ";
    // std::cin >> numero;
    // verificarParOimpar(numero);

    //Pregunta 7
    // int dia;
    // std::cout << "Ingrese un numero (1-7) para obtener el dia de la semana: ";
    // std::cin >> dia;
    // imprimirDiaSemana(dia);

    //Pregunta 8
    // int numeros[5];
    // asignarValores(numeros, 5);
    // imprimirArray(numeros, 5);

    //Pregunta 9
    // int numeros[5];
    // almacenarNumeros(numeros, 5);
    // int suma = calcularSuma(numeros, 5);
    // std::cout << "La suma de los numeros es: " << suma << std::endl;

    //Pregunta 10
    // Persona p1;
    // p1.nombre = "Sofia";
    // p1.edad = 24;
    // std :: cout << p1.nombre << std::endl;
    // std :: cout << p1.edad << std::endl;

    //Pregunta 11
    // Punto p;
    // std::cout << "Ingrese el valor de x: ";
    // std::cin >> p.x;
    // std::cout << "Ingrese el valor de y: ";
    // std::cin >> p.y;
    // std::cout << "Los valores del punto son: " << std::endl;
    // std::cout << "x: " << p.x << std::endl;
    // std::cout << "y: " << p.y << std::endl;

    //Pregunta 12
    // float precio = 9.99f;
    // printf("El precio es: $%.2f\n", precio);

    //Pregunta 13
    //imprimirOrdenDescendente();

    //Pregunta 14
    // int suma = sumarCienPrimerosNumeros();
    // std::cout << "La suma es: " << suma << std::endl;

    //Pregunta 15
    //tablaDeMultiplicarDel5();

    //Pregunta 16
    // char caracter;
    // std::cout << "Ingrese un caracter: ";
    // std::cin >> caracter;
    // vocalOConsonante(caracter);

    //Pregunta 17
    // int mes;
    // std::cout << "Ingrese un numero de mes (1-12): ";
    // std::cin >> mes;
    // imprimirMes(mes);

    //Pregunta 18
    // char palabra[10];
    // std::cout << "Ingrese una palabra (maximo 9 caracteres): ";
    // std::cin >> palabra;
    // imprimirCaracteresIndividuales(palabra, 10);

    //Pregunta 19
    // int numeros[5];
    // almacenarNumeros(numeros, 5);
    // int mayor = numeroMayor(numeros, 5);
    // std::cout << "El numero mayor es: " << mayor << std::endl;

    //Pregunta 20
    // Rectangulo r1;
    // std::cout << "Ingrese el largo: ";
    // std::cin >> r1.largo;
    // std::cout << "Ingrese el ancho: ";
    // std::cin >> r1.ancho;
    // double area = areaRectangulo(r1.largo, r1.ancho);
    // std::cout << "El area del rectangulo es: " << area << std::endl;

    //Pregunta 21
    //adivinarNumero();

    //Pregunta 22
    // int N;
    // std::cout << "Ingrese un numero N para imprimir los primeros N términos de la secuencia de Fibonacci: ";
    // std::cin >> N;
    // imprimirFibonacci(N);

    //Pregunta 23 y 24
    // int matriz[3][3];
    // llenarMatriz(matriz);
    // imprimirMatriz(matriz);
    // int sumaDiagonal = sumaDiagonalPrincipal(matriz);
    // std::cout << "La suma de los elementos en la diagonal principal es: " << sumaDiagonal << std::endl;

    //Pregunta 25
    // std::string palabraSecreta = "AHORCADO";
    // std::cout << "Bienvenido al Juego del Ahorcado!" << std::endl;
    // std::cout << "Intenta adivinar la palabra." << std::endl;
    // std::cout << "Tienes que ingresar letras en mayusculas." << std::endl;
    // jugarAhorcado(palabraSecreta);

    //Pregunta 26
    srand(time(0));
    float puntajeTotal = 0;

    std::cout << "Bienvenido al juego de Piedra, Papel o Tijera!" << std::endl;
    std::cout << "Ingresa 'pi' para piedra, 'pa' para papel, 'ti' para tijera." << std::endl;
    std::cout << std::endl;

    for (int partida = 1; partida <= 5; ++partida) {
        std::cout << "Partida #" << partida << std::endl;
        jugarPartida();
        std::cout << std::endl;
    }

    std::cout << "¡Fin del juego!" << std::endl;

    return 0;
}