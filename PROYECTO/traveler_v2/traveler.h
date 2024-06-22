#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

const int totalCities = 15;
const int popSize = 10;
const float mutationRate = 0.01;

struct Ciudad {
    float x;
    float y;
};

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

struct FloatNode {
    float data;
    FloatNode* next;
    FloatNode(float data) : data(data), next(nullptr) {}
};

struct CityNode {
    Ciudad data;
    CityNode* next;
    CityNode(Ciudad data) : data(data), next(nullptr) {}
};

struct LinkedList {
    Node* head;
    Node* tail;

    LinkedList() : head(nullptr), tail(nullptr) {}

    void push_back(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void clear() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = nullptr;
    }

    int size() {
        int count = 0;
        Node* current = head;
        while (current) {
            ++count;
            current = current->next;
        }
        return count;
    }

    Node* get(int index) {
        Node* current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current;
    }
};

struct FloatLinkedList {
    FloatNode* head;
    FloatNode* tail;

    FloatLinkedList() : head(nullptr), tail(nullptr) {}

    void push_back(float value) {
        FloatNode* newNode = new FloatNode(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void clear() {
        FloatNode* current = head;
        while (current) {
            FloatNode* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = nullptr;
    }

    float sum() {
        float total = 0;
        FloatNode* current = head;
        while (current) {
            total += current->data;
            current = current->next;
        }
        return total;
    }
};

struct CityLinkedList {
    CityNode* head;
    CityNode* tail;

    CityLinkedList() : head(nullptr), tail(nullptr) {}

    void push_back(Ciudad value) {
        CityNode* newNode = new CityNode(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void clear() {
        CityNode* current = head;
        while (current) {
            CityNode* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = nullptr;
    }
};

extern CityLinkedList cities;

float dist(Ciudad a, Ciudad b);
float calcDistance(CityLinkedList& points, LinkedList& order);
void swap(LinkedList& a, int i, int j);
void calculateFitness(LinkedList* population, FloatLinkedList& fitness, float& recordDistance, LinkedList& bestEver, LinkedList& currentBest);
void normalizeFitness(FloatLinkedList& fitness);
LinkedList pickOne(LinkedList* list, FloatLinkedList& prob);
LinkedList crossOver(LinkedList& orderA, LinkedList& orderB);
void mutate(LinkedList& order, float mutationRate);
void nextGeneration(LinkedList* population, FloatLinkedList& fitness);
