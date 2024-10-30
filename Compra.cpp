// Compra.cpp
#include "Fecha.h"
#include "Compra.h"
#include <iostream>

Compra::Compra(int idC, int idP, Fecha f, float t)

� � : idCompra(idC), idProveedor(idP), fecha(f), total(t) {}

// Implementaci�n de los getters

int Compra::getIdCompra() const {
� � return idCompra;
}
int Compra::getIdProveedor() const {
� � return idProveedor;
}
Fecha Compra::getFecha() const {
� � return fecha;
}
float Compra::getTotal() const {
� � return total;
}

// Implementaci�n de los setters

void Compra::setIdCompra(int id) {
� � idCompra = id;
}
void Compra::setIdProveedor(int id) {
� � idProveedor = id;
}
void Compra::setFecha(Fecha f) {
� � fecha = f;
}
void Compra::setTotal(float t) {
� � total = t;
}

// M�todo est�tico para calcular el total de compras en un mes espec�fico

float Compra::totalComprasXMes(const std::vector<Compra>& compras, int mes, int anio) {
� � float totalMes = 0;
� � for(const auto& compra : compras) {
� � � � if(compra.getFecha().mes == mes && compra.getFecha().anio == anio) {
� � � � � � totalMes += compra.getTotal();
� � � � }
� � }
� � return totalMes;
}

// M�todo para mostrar los detalles de una compra

void Compra::mostrarCompra() const {
� � std::cout << "ID Compra: " << idCompra << std::endl;
� � std::cout << "ID Proveedor: " << idProveedor << std::endl;
� � std::cout << "Fecha: " << fecha.toString() << std::endl;
� � std::cout << "Total: $" << total << std::endl;
}
