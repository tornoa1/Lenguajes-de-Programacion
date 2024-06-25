#include "traveler.h"
#include <iostream>

int main() {
    srand(time(NULL));

    // Inicialización de ciudades
    for (int i = 0; i < totalCities; i++) {
        City newCity = {static_cast<double>(rand() % 200), static_cast<double>(rand() % 200)};
        cities.push_back(newCity);
    }

    // Inicializar población inicial
    for (int i = 0; i < popSize; i++) {
        std::list<int> order;
        for (int j = 0; j < totalCities; j++) {
            order.push_back(j);
        }
        order.sort();
        population.push_back(order);
    }

    calculateFitness();
    normalizeFitness();
    for (int i = 0; i < 100; i++) { //100 generaciones
        nextGeneration();
        calculateFitness();
        normalizeFitness();
    }

    // Imprimir la distancia récord
    std::cout << "Distancia record: " << recordDistance << std::endl;

    // Imprimir la mejor ruta
    std::cout << "Mejor ruta: ";
    for (int cityIndex : bestEver) {
        std::cout << cityIndex << " -> ";
    }
    std::cout << std::endl;

    return 0;
}