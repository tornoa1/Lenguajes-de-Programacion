#include <iostream>
#include <string>

enum class DiaSemana
{
    Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo
};

struct Persona
{
    std :: string nombre;
    size_t edad;
    float estatura;
};

void ArmarListaPersonas()
{
    Persona p1;
    p1.nombre = "Pepito";
    p1.edad = 22;
    p1.estatura = 1.70f;

    std :: cout << p1.nombre << std::endl;

    Persona listaPersonas[2];
    listaPersonas[0].nombre = "Luciana";
    listaPersonas[0].edad = 24;
    listaPersonas[0].estatura = 1.77f;
    listaPersonas[1].nombre = "Miguel";
    listaPersonas[1].edad = 23;
    listaPersonas[1].estatura = 1.82f;

    std :: cout << listaPersonas[0].nombre << std::endl;

    listaPersonas[0] = p1;

    std :: cout << listaPersonas[0].nombre << std::endl;
}

int main() 
{
    ArmarListaPersonas();
    // DiaSemana diaSemana = DiaSemana::Lunes;

    // std :: string temp = "";
    // std :: cout << "Lunes (0) Martes (1) Miercoles (2) Jueves (3) Viernes (4) Sabado (5) Domingo (6)" << std::endl;
    // std :: cout << "Ingrese dia semana: "  ;
    // std :: cin >> temp;

    // if(temp == "0") diaSemana = DiaSemana::Lunes;
    // if(temp == "1") diaSemana = DiaSemana::Martes;
    // if(temp == "2") diaSemana = DiaSemana::Miercoles;
    // if(temp == "3") diaSemana = DiaSemana::Jueves;
    // if(temp == "4") diaSemana = DiaSemana::Viernes;
    // if(temp == "5") diaSemana = DiaSemana::Sabado;
    // if(temp == "6") diaSemana = DiaSemana::Domingo;

    // std::
    return 0;
}