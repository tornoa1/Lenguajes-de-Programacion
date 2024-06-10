#include <string>
#include <iostream>
#include <algorithm>

struct Producto {
    std::string nombre;
    std::string codigo;
    float precio;
};

void ingresarProductos(Producto* inventario, int numProductos);
Producto encontrarProductoPrecioMasAlto(const Producto* inventario, int numProductos);
Producto encontrarProductoPrecioMasBajo(const Producto* inventario, int numProductos);
void imprimirReportePreciosOrdenados(const Producto* inventario, int numProductos);
void manejarMenu(Producto* inventario, int numProductos);