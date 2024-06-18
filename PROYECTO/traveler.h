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
extern std::vector<std::vector<int>> population;
extern std::vector<double> fitness;
extern std::vector<City> cities;
extern std::vector<int> bestEver;
extern std::vector<int> currentBest;
extern double recordDistance;
extern double currentRecord;
extern std::random_device rd;
extern std::mt19937 gen;

double calcDistance(const std::vector<City>& cities, const std::vector<int>& order);
void swap(std::vector<int>& order, int indexA, int indexB);
void calculateFitness();
void normalizeFitness();
std::vector<int> pickOne(const std::vector<std::vector<int>>& list, const std::vector<double>& prob);
std::vector<int> crossOver(const std::vector<int>& orderA, const std::vector<int>& orderB);
void mutate(std::vector<int>& order, double mutationRate);
void nextGeneration();