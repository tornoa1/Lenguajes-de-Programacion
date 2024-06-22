#include "traveler.h"

CityLinkedList cities;

float dist(Ciudad a, Ciudad b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

float calcDistance(CityLinkedList& points, LinkedList& order) {
    float sum = 0;
    Node* it1 = order.head;
    Node* it2 = it1->next;
    while (it2 != nullptr) {
        CityNode* cityA = points.head;
        for (int i = 0; i < it1->data; ++i) {
            cityA = cityA->next;
        }
        CityNode* cityB = points.head;
        for (int i = 0; i < it2->data; ++i) {
            cityB = cityB->next;
        }
        sum += dist(cityA->data, cityB->data);
        it1 = it2;
        it2 = it2->next;
    }
    return sum;
}

void swap(LinkedList& a, int i, int j) {
    if (i == j) return;
    Node* it1 = a.get(i);
    Node* it2 = a.get(j);
    int temp = it1->data;
    it1->data = it2->data;
    it2->data = temp;
}

void calculateFitness(LinkedList* population, FloatLinkedList& fitness, float& recordDistance, LinkedList& bestEver, LinkedList& currentBest) {
    float currentRecord = 1e30;
    for (int i = 0; i < popSize; ++i) {
        float d = calcDistance(cities, population[i]);
        if (d < recordDistance) {
            recordDistance = d;
            bestEver = population[i];
        }
        if (d < currentRecord) {
            currentRecord = d;
            currentBest = population[i];
        }
        fitness.push_back(1 / (pow(d, 8) + 1));
    }
}

void normalizeFitness(FloatLinkedList& fitness) {
    float sum = fitness.sum();
    FloatNode* it = fitness.head;
    while (it != nullptr) {
        it->data /= sum;
        it = it->next;
    }
}

LinkedList pickOne(LinkedList* list, FloatLinkedList& prob) {
    float r = static_cast<float>(rand()) / RAND_MAX;
    FloatNode* it = prob.head;
    int index = 0;
    while (r > 0 && it != nullptr) {
        r -= it->data;
        ++index;
        it = it->next;
    }
    --index;
    return list[index];
}

LinkedList crossOver(LinkedList& orderA, LinkedList& orderB) {
    int start = 0;
    int end = totalCities / 2;
    LinkedList newOrder;
    Node* itA = orderA.head;
    for (int i = 0; i < start; ++i) {
        itA = itA->next;
    }
    for (int i = start; i < end; ++i) {
        newOrder.push_back(itA->data);
        itA = itA->next;
    }
    Node* itB = orderB.head;
    while (itB != nullptr) {
        Node* newIt = newOrder.head;
        bool found = false;
        while (newIt != nullptr) {
            if (newIt->data == itB->data) {
                found = true;
                break;
            }
            newIt = newIt->next;
        }
        if (!found) {
            newOrder.push_back(itB->data);
        }
        itB = itB->next;
    }
    return newOrder;
}

void mutate(LinkedList& order, float mutationRate) {
    for (int i = 0; i < totalCities; ++i) {
        if (static_cast<float>(rand()) / RAND_MAX < mutationRate) {
            int indexA = rand() % totalCities;
            int indexB = (indexA + 1) % totalCities;
            swap(order, indexA, indexB);
        }
    }
}

void nextGeneration(LinkedList* population, FloatLinkedList& fitness) {
    LinkedList newPopulation[popSize];
    for (int i = 0; i < popSize; ++i) {
        LinkedList orderA = pickOne(population, fitness);
        LinkedList orderB = pickOne(population, fitness);
        LinkedList order = crossOver(orderA, orderB);
        mutate(order, mutationRate);
        newPopulation[i] = order;
    }
    for (int i = 0; i < popSize; ++i) {
        population[i] = newPopulation[i];
    }
}