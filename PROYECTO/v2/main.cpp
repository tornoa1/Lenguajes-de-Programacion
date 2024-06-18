#include <iostream>
#include <random>
#include <algorithm>
#include "traveler.h"

int main() {
    int N = 2;
    cities = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4}};
    int populationSize = 10;

    for (int n = 0; n < N; ++n) {
        std::vector<int> order(cities.size());
        for (size_t i = 0; i < cities.size(); ++i) {
            order[i] = i;
        }
        std::vector<std::vector<int>> population;
        for (int i = 0; i < populationSize; ++i) {
            std::random_shuffle(order.begin(), order.end());
            population.push_back(order);
        }
        populations.push_back(population);
        fitness.push_back(std::vector<double>(populationSize));
        bestEver.push_back(std::vector<int>(cities.size()));
        currentBest.push_back(std::vector<int>(cities.size()));
        recordDistance.push_back(std::numeric_limits<double>::infinity());
        currentRecord.push_back(std::numeric_limits<double>::infinity());
    }

    for (int n = 0; n < N; ++n) {
        calculateFitness(populations[n], fitness[n], bestEver[n], currentBest[n], recordDistance[n], currentRecord[n]);
        normalizeFitness(fitness[n]);
        nextGeneration(populations[n], fitness[n], bestEver[n], currentBest[n], recordDistance[n], currentRecord[n]);

        std::cout << "Best distance (Population " << n+1 << "): " << recordDistance[n] << std::endl;
        std::cout << "Best order (Population " << n+1 << "): ";
        for (int i : bestEver[n]) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}