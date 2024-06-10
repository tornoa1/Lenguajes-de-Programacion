#include <iostream>
#include <string>

struct Contacto {
    std::string nombre;
    std::string telefono;
    std::string correo;
};

Contacto* buscarContactoPorNombre(Contacto* contactos, int numContactos, std::string& nombre);
void imprimirContacto(Contacto* contacto);