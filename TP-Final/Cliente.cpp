#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente()
{
    _idCliente = 0;
    Persona();
}

int Cliente::getIdCliente() const
{
    return _idCliente;
}


void Cliente::setIdCliente(const int idCliente)
{
    _idCliente = idCliente;
}


void Cliente::cargar()
{
    cout << "Ingrese el ID Cliente: ";
    cin >> _idCliente;
    Persona::cargar();

    system("cls");
    cout << "Datos cargados correctamente." << endl;
    system("pause");
    system("cls");
}

void Cliente::mostrar()
{
    cout << "ID Cliente: " << _idCliente << endl;
    Persona::mostrar();
}
