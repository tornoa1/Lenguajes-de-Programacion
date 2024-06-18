#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>
#include <limits>

struct City {
    double x, y;
};

extern std::vector<City> cities;
extern std::vector<std::vector<std::vector<int>>> populations;
extern std::vector<std::vector<double>> fitness;
extern std::vector<std::vector<int>> bestEver;
extern std::vector<std::vector<int>> currentBest;
extern std::vector<double> recordDistance;
extern std::vector<double> currentRecord;
extern std::random_device rd;
extern std::mt19937 gen;

double calcDistance(const std::vector<City>& cities, const std::vector<int>& order);
void swap(std::vector<int>& order, int indexA, int indexB);
void calculateFitness(std::vector<std::vector<int>>& population, std::vector<double>& fitness, std::vector<int>& bestEver, std::vector<int>& currentBest, double& recordDistance, double& currentRecord);
void normalizeFitness(std::vector<double>& fitness);
std::vector<int> selectParent(const std::vector<std::vector<int>>& population, const std::vector<double>& fitness);
std::vector<int> crossover(const std::vector<int>& parentA, const std::vector<int>& parentB);
void mutate(std::vector<int>& order, double mutationRate);
void nextGeneration(std::vector<std::vector<int>>& population, std::vector<double>& fitness, std::vector<int>& bestEver, std::vector<int>& currentBest, double& recordDistance, double& currentRecord);