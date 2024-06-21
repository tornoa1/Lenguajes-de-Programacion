#include <iostream>
#include "traveler.h"

using namespace std;

void printOrder(const list<int>& order) {
    for (int city : order) {
        if (city >= 0 && city < totalCities) {
            cout << city << " ";
        } else {
            cout << "Invalid city index: " << city << endl;
        }
    }
    cout << endl;
}

void printCities() {
    int index = 0;
    for (const City& city : cities) {
        cout << "City " << index << ": (" << city.x << ", " << city.y << ")" << endl;
        index++;
    }
}

int main() {
    setup();

    for (int generation = 0; generation < 100; generation++) {
        for (auto& population : populations) {
            calculateFitness(population);
            normalizeFitness(population);
            nextGeneration(population);
        }
    }

    cout << "Best route: " << endl;
    printOrder(bestEver.order);

    cout << "Cities: " << endl;
    printCities();

    return 0;
}