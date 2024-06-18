#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>
#include <limits>

// Estructura de la Ciudad
struct City {
    double x, y;
};

// Variables globales
std::vector<std::vector<int>> population;
std::vector<double> fitness;
std::vector<City> cities;
std::vector<int> bestEver;
std::vector<int> currentBest;
double recordDistance = std::numeric_limits<double>::infinity();
double currentRecord = std::numeric_limits<double>::infinity();
std::random_device rd;
std::mt19937 gen(rd());

double calcDistance(const std::vector<City>& cities, const std::vector<int>& order) {
    double sum = 0;
    for (size_t i = 0; i < order.size() - 1; ++i) {
        City cityA = cities[order[i]];
        City cityB = cities[order[i + 1]];
        double d = std::sqrt(std::pow(cityA.x - cityB.x, 2) + std::pow(cityA.y - cityB.y, 2));
        sum += d;
    }
    return sum;
}

void swap(std::vector<int>& order, int indexA, int indexB) {
    int temp = order[indexA];
    order[indexA] = order[indexB];
    order[indexB] = temp;
}

void calculateFitness() {
    currentRecord = std::numeric_limits<double>::infinity();
    for (size_t i = 0; i < population.size(); ++i) {
        double d = calcDistance(cities, population[i]);
        if (d < recordDistance) {
            recordDistance = d;
            bestEver = population[i];
        }
        if (d < currentRecord) {
            currentRecord = d;
            currentBest = population[i];
        }
        fitness[i] = 1.0 / (std::pow(d, 8) + 1);
    }
}

void normalizeFitness() {
    double sum = 0;
    for (double fit : fitness) {
        sum += fit;
    }
    for (double& fit : fitness) {
        fit /= sum;
    }
}

std::vector<int> pickOne(const std::vector<std::vector<int>>& list, const std::vector<double>& prob) {
    std::uniform_real_distribution<> dis(0.0, 1.0);
    double r = dis(gen);
    size_t index = 0;

    while (r > 0) {
        r -= prob[index];
        index++;
    }
    index--;
    return list[index];
}

std::vector<int> crossOver(const std::vector<int>& orderA, const std::vector<int>& orderB) {
    std::uniform_int_distribution<> dis(0, orderA.size() - 1);
    int start = dis(gen);
    int end = dis(gen) % (orderA.size() - start) + start;
    std::vector<int> neworder(orderA.begin() + start, orderA.begin() + end);

    for (int city : orderB) {
        if (std::find(neworder.begin(), neworder.end(), city) == neworder.end()) {
            neworder.push_back(city);
        }
    }
    return neworder;
}

void mutate(std::vector<int>& order, double mutationRate) {
    std::uniform_real_distribution<> dis(0.0, 1.0);
    for (size_t i = 0; i < order.size(); ++i) {
        if (dis(gen) < mutationRate) {
            std::uniform_int_distribution<> disInt(0, order.size() - 1);
            int indexA = disInt(gen);
            int indexB = (indexA + 1) % order.size();
            swap(order, indexA, indexB);
        }
    }
}

void nextGeneration() {
    std::vector<std::vector<int>> newPopulation(population.size());
    for (size_t i = 0; i < population.size(); ++i) {
        std::vector<int> orderA = pickOne(population, fitness);
        std::vector<int> orderB = pickOne(population, fitness);
        std::vector<int> order = crossOver(orderA, orderB);
        mutate(order, 0.01);
        newPopulation[i] = order;
    }
    population = newPopulation;
}

int main() {
    // Inicialización de ciudades (por ejemplo, 5 ciudades)
    cities = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4}};
    int populationSize = 10;

    // Inicialización de la población con permutaciones aleatorias de las ciudades
    std::vector<int> order(cities.size());
    for (size_t i = 0; i < cities.size(); ++i) {
        order[i] = i;
    }
    for (int i = 0; i < populationSize; ++i) {
        std::random_shuffle(order.begin(), order.end());
        population.push_back(order);
    }

    fitness.resize(populationSize);

    // Calcular fitness inicial y normalizarlo
    calculateFitness();
    normalizeFitness();

    // Ejecutar una generación del algoritmo genético
    nextGeneration();

    // Imprimir el mejor resultado
    std::cout << "Best distance: " << recordDistance << std::endl;
    std::cout << "Best order: ";
    for (int i : bestEver) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
