#include "M_pregunta09.h"

Contacto* buscarContactoPorNombre(Contacto* contactos, int numContactos, std::string& nombre) {
    for (int i = 0; i < numContactos; ++i) {
        if (contactos[i].nombre == nombre) {
            return &contactos[i];
        }
    }
    return nullptr;
}

void imprimirContacto(Contacto* contacto) {
    if (contacto != nullptr) {
        std::cout << "Contacto encontrado:" << std::endl;
        std::cout << "Nombre: " << contacto->nombre << std::endl;
        std::cout << "Teléfono: " << contacto->telefono << std::endl;
        std::cout << "Correo electrónico: " << contacto->correo << std::endl;
    } else {
        std::cout << "Contacto no encontrado." << std::endl;
    }
}