#include "traveler.h"

int main() {
    srand(time(0));

    for (int i = 0; i < totalCities; ++i) {
        Ciudad ciudad;
        ciudad.x = rand() % 600;
        ciudad.y = rand() % 300;
        cities.push_back(ciudad);
    }

    LinkedList population[popSize];
    FloatLinkedList fitness;
    float recordDistance = 1e30;
    LinkedList bestEver;
    LinkedList currentBest;

    for (int i = 0; i < popSize; ++i) {
        LinkedList order;
        for (int j = 0; j < totalCities; ++j) {
            order.push_back(j);
        }
        for (int j = 0; j < totalCities; ++j) {
            int r = rand() % totalCities;
            swap(order, j, r);
        }
        population[i] = order;
    }

    for (int generation = 0; generation < 100; ++generation) {
        calculateFitness(population, fitness, recordDistance, bestEver, currentBest);
        normalizeFitness(fitness);
        nextGeneration(population, fitness);
        fitness.clear();
    }

    std::cout << "Mejor distancia: " << recordDistance << "\n";
    std::cout << "Mejor ruta: ";
    Node* it = bestEver.head;
    while (it != nullptr) {
        std::cout << it->data << " -> ";
        it = it->next;
    }

    return 0;
}
