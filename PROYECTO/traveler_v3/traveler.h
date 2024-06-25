#include <list>
#include <cmath>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <ctime>

struct City {
    double x, y;
};

extern std::list<City> cities;
extern const int totalCities;

extern const int popSize;
extern std::list<std::list<int>> population;
extern std::list<double> fitness;

extern double recordDistance;
extern std::list<int> bestEver;
extern std::list<int> currentBest;

void swap(std::list<int>& a, std::list<int>::iterator i, std::list<int>::iterator j);
double dist(double x1, double y1, double x2, double y2);
double calcDistance(const std::list<City>& points, const std::list<int>& order);
void calculateFitness();
void normalizeFitness();
std::list<int> pickOne(const std::list<std::list<int>>& list, const std::list<double>& prob);
std::list<int> crossOver(const std::list<int>& orderA, const std::list<int>& orderB);
void mutate(std::list<int>& order, double mutationRate);
void nextGeneration();