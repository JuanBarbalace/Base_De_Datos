#include "Proveedor.h"
#include <iostream>

using namespace std;

Proveedor::Proveedor()
{
    _idProveedor = 0;
    Persona();
}

int Proveedor::getIdProveedor() const
{
    return _idProveedor;
}


void Proveedor::setIdProveedor(const int idProveedor)
{
    _idProveedor = idProveedor;
}


void Proveedor::cargar()
{
    cout << "Ingrese el ID Proveedor: ";
    cin >> _idProveedor;
    Persona::cargar();

    system("cls");
    cout << "Datos cargados correctamente." << endl;
    system("pause");
    system("cls");
}

void Proveedor::mostrar()
{
    cout << "ID Proveedor: " << _idProveedor << endl;
    Persona::mostrar();
    cout << endl;
}
