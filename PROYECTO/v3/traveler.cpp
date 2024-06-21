#include "traveler.h"

list<City> cities;
list<list<Individual>> populations(2); // Two populations
float recordDistance = numeric_limits<float>::infinity();
Individual bestEver;

void setup() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> disX(0, 600);
    uniform_real_distribution<> disY(0, 300);

    for (int i = 0; i < totalCities; i++) {
        City city = { static_cast<float>(disX(gen)), static_cast<float>(disY(gen)) };
        cities.push_back(city);
    }

    list<int> order;
    for (int i = 0; i < totalCities; i++) {
        order.push_back(i);
    }

    for (auto& population : populations) {
        for (int i = 0; i < popSize; i++) {
            list<int> shuffledOrder = order;
            auto rng = default_random_engine {};
            shuffledOrder.sort([&](int a, int b) { return rng() % 2; });
            population.push_back({ shuffledOrder, 0 });
        }
    }
}

float calcDistance(const list<City>& points, const list<int>& order) {
    auto it = order.begin();
    auto cityAIndex = it++;
    float sum = 0;

    while (it != order.end()) {
        auto cityBIndex = it;
        auto cityA = points.begin();
        advance(cityA, *cityAIndex);
        auto cityB = points.begin();
        advance(cityB, *cityBIndex);
        float d = sqrt(pow(cityA->x - cityB->x, 2) + pow(cityA->y - cityB->y, 2));
        sum += d;
        cityAIndex = cityBIndex;
        ++it;
    }
    return sum;
}

void calculateFitness(list<Individual>& population) {
    float currentRecord = numeric_limits<float>::infinity();

    for (auto& individual : population) {
        float d = calcDistance(cities, individual.order);
        if (d < recordDistance) {
            recordDistance = d;
            bestEver = individual;
        }
        if (d < currentRecord) {
            currentRecord = d;
        }
        individual.fitness = 1 / (pow(d, 8) + 1);
    }
}

void normalizeFitness(list<Individual>& population) {
    float sum = 0;
    for (const auto& individual : population) {
        sum += individual.fitness;
    }
    for (auto& individual : population) {
        individual.fitness /= sum;
    }
}

void nextGeneration(list<Individual>& population) {
    list<Individual> newPopulation;

    for (int i = 0; i < popSize; i++) {
        Individual orderA = pickOne(population);
        Individual orderB = pickOne(population);
        list<int> order = crossOver(orderA.order, orderB.order);
        mutate(order, 0.01);
        newPopulation.push_back({ order, 0 });
    }
    population = newPopulation;
}

void swap(list<int>& a, list<int>::iterator i, list<int>::iterator j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

Individual pickOne(const list<Individual>& population) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0, 1);
    float r = dis(gen);
    auto it = population.begin();

    while (r > 0 && it != population.end()) {
        r -= it->fitness;
        ++it;
    }
    if (it == population.end()) {
        --it; // Ensure iterator is within range
    }
    return *it;
}

list<int> crossOver(const list<int>& orderA, const list<int>& orderB) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> disStart(0, orderA.size() - 1);
    int start = disStart(gen);
    int end = start + orderA.size() / 2;

    list<int> newOrder;
    auto itA = orderA.begin();
    advance(itA, start);

    for (int i = start; i < end; ++i, ++itA) {
        newOrder.push_back(*itA);
    }

    for (int city : orderB) {
        if (find(newOrder.begin(), newOrder.end(), city) == newOrder.end()) {
            newOrder.push_back(city);
        }
    }
    return newOrder;
}

void mutate(list<int>& order, float mutationRate) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0, 1);
    uniform_int_distribution<> disIndex(0, order.size() - 1);

    for (int i = 0; i < totalCities; i++) {
        if (dis(gen) < mutationRate) {
            auto it = order.begin();
            advance(it, disIndex(gen));
            auto itNext = next(it, 1);
            if (itNext == order.end()) {
                itNext = order.begin();
            }
            swap(order, it, itNext);
        }
    }
}