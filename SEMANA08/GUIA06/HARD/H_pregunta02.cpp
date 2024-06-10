#include "H_pregunta02.h"

void ingresarProductos(Producto* inventario, int numProductos) {
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        std::cin >> inventario[i].nombre;
        std::cout << "Ingrese el código del producto " << i + 1 << ": ";
        std::cin >> inventario[i].codigo;
        std::cout << "Ingrese el precio del producto " << i + 1 << ": ";
        std::cin >> inventario[i].precio;
    }
}

Producto encontrarProductoPrecioMasAlto(const Producto* inventario, int numProductos) {
    Producto masAlto = inventario[0];
    for (int i = 1; i < numProductos; ++i) {
        if (inventario[i].precio > masAlto.precio) {
            masAlto = inventario[i];
        }
    }
    return masAlto;
}

Producto encontrarProductoPrecioMasBajo(const Producto* inventario, int numProductos) {
    Producto masBajo = inventario[0];
    for (int i = 1; i < numProductos; ++i) {
        if (inventario[i].precio < masBajo.precio) {
            masBajo = inventario[i];
        }
    }
    return masBajo;
}

void imprimirReportePreciosOrdenados(const Producto* inventario, int numProductos) {
    Producto* inventarioOrdenado = new Producto[numProductos];
    std::copy(inventario, inventario + numProductos, inventarioOrdenado);

    std::sort(inventarioOrdenado, inventarioOrdenado + numProductos,
              [](const Producto& a, const Producto& b) {
                  return a.precio < b.precio;
              });

    std::cout << "Reporte de precios ordenados:" << std::endl;
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "Nombre: " << inventarioOrdenado[i].nombre << ", Código: " << inventarioOrdenado[i].codigo
                  << ", Precio: " << inventarioOrdenado[i].precio << std::endl;
    }

    delete[] inventarioOrdenado;
}

void manejarMenu(Producto* inventario, int numProductos) {
    int opcion;

    do {
        std::cout << "\nMENU:\n";
        std::cout << "1. Ingresar productos\n";
        std::cout << "2. Mostrar producto con precio más alto\n";
        std::cout << "3. Mostrar producto con precio más bajo\n";
        std::cout << "4. Imprimir reporte de precios ordenados\n";
        std::cout << "5. Salir\n";
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarProductos(inventario, numProductos);
                break;
            case 2: {
                Producto masAlto = encontrarProductoPrecioMasAlto(inventario, numProductos);
                std::cout << "Producto con precio más alto:" << std::endl;
                std::cout << "Nombre: " << masAlto.nombre << ", Código: " << masAlto.codigo
                          << ", Precio: " << masAlto.precio << std::endl;
                break;
            }
            case 3: {
                Producto masBajo = encontrarProductoPrecioMasBajo(inventario, numProductos);
                std::cout << "Producto con precio más bajo:" << std::endl;
                std::cout << "Nombre: " << masBajo.nombre << ", Código: " << masBajo.codigo
                          << ", Precio: " << masBajo.precio << std::endl;
                break;
            }
            case 4:
                imprimirReportePreciosOrdenados(inventario, numProductos);
                break;
            case 5:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Por favor ingrese una opción válida." << std::endl;
                break;
        }
    } while (opcion != 5);
}