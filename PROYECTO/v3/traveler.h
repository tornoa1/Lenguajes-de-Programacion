#include <list>
#include <vector>
#include <iostream>
#include <cmath>
#include <random>
#include <algorithm>

using namespace std;

const int totalCities = 15;
const int popSize = 10;

struct City {
    float x, y;
};

struct Individual {
    list<int> order;
    float fitness;
};

extern list<City> cities;
extern list<list<Individual>> populations;
extern float recordDistance;
extern Individual bestEver;

void setup();
void calculateFitness(list<Individual>& population);
void normalizeFitness(list<Individual>& population);
void nextGeneration(list<Individual>& population);
float calcDistance(const list<City>& points, const list<int>& order);
void swap(list<int>& a, list<int>::iterator i, list<int>::iterator j);
Individual pickOne(const list<Individual>& population);
list<int> crossOver(const list<int>& orderA, const list<int>& orderB);
void mutate(list<int>& order, float mutationRate);