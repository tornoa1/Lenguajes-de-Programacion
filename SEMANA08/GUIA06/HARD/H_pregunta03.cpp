#include "H_pregunta03.h"

void ingresarTemperaturas(double temperaturas[][2], int numDias) {
    std::cout << "Ingrese las temperaturas mínimas y máximas diarias de la semana:" << std::endl;
    for (int i = 0; i < numDias; ++i) {
        std::cout << "Día " << i + 1 << ":" << std::endl;
        std::cout << "Temperatura mínima: ";
        std::cin >> temperaturas[i][0];
        std::cout << "Temperatura máxima: ";
        std::cin >> temperaturas[i][1];
    }
}

double calcularPromedioDia(double temperaturaMin, double temperaturaMax) {
    return (temperaturaMin + temperaturaMax) / 2.0;
}

double calcularPromedioSemana(double temperaturas[][2], int numDias) {
    double sumaTemperaturas = 0.0;
    for (int i = 0; i < numDias; ++i) {
        sumaTemperaturas += calcularPromedioDia(temperaturas[i][0], temperaturas[i][1]);
    }
    return sumaTemperaturas / numDias;
}

int encontrarDiaTemperaturaMasAlta(double temperaturas[][2], int numDias) {
    double maxTemperatura = temperaturas[0][1];
    int diaMaxTemperatura = 0;
    for (int i = 1; i < numDias; ++i) {
        if (temperaturas[i][1] > maxTemperatura) {
            maxTemperatura = temperaturas[i][1];
            diaMaxTemperatura = i;
        }
    }
    return diaMaxTemperatura + 1;
}

int encontrarDiaTemperaturaMasBaja(double temperaturas[][2], int numDias) {
    double minTemperatura = temperaturas[0][0];
    int diaMinTemperatura = 0;
    for (int i = 1; i < numDias; ++i) {
        if (temperaturas[i][0] < minTemperatura) {
            minTemperatura = temperaturas[i][0];
            diaMinTemperatura = i;
        }
    }
    return diaMinTemperatura + 1;
}
