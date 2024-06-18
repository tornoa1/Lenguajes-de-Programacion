#include <iostream>
#include "traveler.h"

int main() {
    cities = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4}};
    int populationSize = 10;

    std::vector<int> order(cities.size());
    for (size_t i = 0; i < cities.size(); ++i) {
        order[i] = i;
    }
    for (int i = 0; i < populationSize; ++i) {
        std::random_shuffle(order.begin(), order.end());
        population.push_back(order);
    }

    fitness.resize(populationSize);

    calculateFitness();
    normalizeFitness();

    nextGeneration();

    std::cout << "Best distance: " << recordDistance << std::endl;
    std::cout << "Best order: ";
    for (int i : bestEver) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}