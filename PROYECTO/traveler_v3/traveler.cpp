#include "traveler.h"

std::list<City> cities;
const int totalCities = 15;

const int popSize = 500;
std::list<std::list<int>> population;
std::list<double> fitness;

double recordDistance = INFINITY;
std::list<int> bestEver;
std::list<int> currentBest;

void swap(std::list<int>& a, std::list<int>::iterator i, std::list<int>::iterator j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

double dist(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcDistance(const std::list<City>& points, const std::list<int>& order) {
    double sum = 0;
    auto it = order.begin();
    auto next_it = it;
    ++next_it;
    while (next_it != order.end()) {
        const City& cityA = *std::next(points.begin(), *it);
        const City& cityB = *std::next(points.begin(), *next_it);
        sum += dist(cityA.x, cityA.y, cityB.x, cityB.y);
        ++it;
        ++next_it;
    }
    return sum;
}

void calculateFitness() {
    double currentRecord = INFINITY;
    for (auto& order : population) {
        double d = calcDistance(cities, order);
        if (d < recordDistance) {
            recordDistance = d;
            bestEver = order;
        }
        if (d < currentRecord) {
            currentRecord = d;
            currentBest = order;
        }
        fitness.push_back(1 / (pow(d, 8) + 1));
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

std::list<int> pickOne(const std::list<std::list<int>>& list, const std::list<double>& prob) {
    srand(time(NULL));
    double r = (double)rand() / RAND_MAX;

    auto list_it = list.begin();
    auto prob_it = prob.begin();

    while (r > 0 && prob_it != prob.end()) {
        r -= *prob_it;
        if (r > 0) {
            ++list_it;
        }
        ++prob_it;
    }
    return *list_it;
}

std::list<int> crossOver(const std::list<int>& orderA, std::list<int>& orderB) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> startDist(0, orderA.size() - 2);
    std::uniform_int_distribution<> endDist(1, orderA.size() - 1);

    int start = startDist(gen);
    int end = endDist(gen);
    while (end <= start) {
        end = endDist(gen);
    }

    std::list<int> newOrder;
    auto itA_start = std::next(orderA.begin(), start);
    auto itA_end = std::next(orderA.begin(), end);

    newOrder.insert(newOrder.end(), itA_start, itA_end);
    for (int city : orderB) {
        if (std::find(newOrder.begin(), newOrder.end(), city) == newOrder.end()) {
            newOrder.push_back(city);
        }
    }
    return newOrder;
}

void mutate(std::list<int>& order, double mutationRate) {
    srand(time(NULL));

    for (auto it = order.begin(); it != order.end(); ++it) {
        if ((double)rand() / RAND_MAX < mutationRate) {
            auto it2 = it;
            ++it2;
            if (it2 == order.end()) {
                it2 = order.begin();
            }
            swap(order, it, it2);
        }
    }
}

void nextGeneration() {
    std::list<std::list<int>> newPopulation;
    for (auto& currentOrder : population) {  // Cambio 'order' por 'currentOrder'
        std::list<int> orderA = pickOne(population, fitness);
        std::list<int> orderB = pickOne(population, fitness);
        std::list<int> newOrder = crossOver(orderA, orderB);  // Cambio 'order' por 'newOrder'
        mutate(newOrder, 0.01);  // Uso 'newOrder'
        newPopulation.push_back(newOrder);
    }
    population = newPopulation;
}
