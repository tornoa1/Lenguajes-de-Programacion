#include "traveler.h"

std::vector<std::vector<std::vector<int>>> populations;
std::vector<std::vector<double>> fitness;
std::vector<std::vector<int>> bestEver;
std::vector<std::vector<int>> currentBest;
std::vector<double> recordDistance;
std::vector<double> currentRecord;
std::vector<City> cities;
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

void calculateFitness(std::vector<std::vector<int>>& population, std::vector<double>& fitness, std::vector<int>& bestEver, std::vector<int>& currentBest, double& recordDistance, double& currentRecord) {
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
        fitness[i] = 1.0 / (d + 1);
    }
}

void normalizeFitness(std::vector<double>& fitness) {
    double sum = 0;
    for (double fit : fitness) {
        sum += fit;
    }
    for (double& fit : fitness) {
        fit /= sum;
    }
}

std::vector<int> selectParent(const std::vector<std::vector<int>>& population, const std::vector<double>& fitness) {
    std::uniform_real_distribution<> dis(0.0, 1.0);
    double r = dis(gen);
    double cumulativeProbability = 0.0;

    for (size_t i = 0; i < population.size(); ++i) {
        cumulativeProbability += fitness[i];
        if (r <= cumulativeProbability) {
            return population[i];
        }
    }

    return population.back();
}

std::vector<int> crossover(const std::vector<int>& parentA, const std::vector<int>& parentB) {
    std::vector<int> child = parentA;

    for (int city : parentB) {
        if (std::find(child.begin(), child.end(), city) == child.end()) {
            child.push_back(city);
        }
    }

    return child;
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

void nextGeneration(std::vector<std::vector<int>>& population, std::vector<double>& fitness, std::vector<int>& bestEver, std::vector<int>& currentBest, double& recordDistance, double& currentRecord) {
    std::vector<std::vector<int>> newPopulation(population.size());
    for (size_t i = 0; i < population.size(); ++i) {
        std::vector<int> parentA = selectParent(population, fitness);
        std::vector<int> parentB = selectParent(population, fitness);
        std::vector<int> child = crossover(parentA, parentB);
        mutate(child, 0.01);
        newPopulation[i] = child;
    }
    population = newPopulation;
}