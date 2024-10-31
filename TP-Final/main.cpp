#include <iostream>

#include "Empleado.h"
#include "Cliente.h"
#include "Proveedor.h"
#include "ArchivoClientes.h"
#include "Fecha.h"

using namespace std;

int main()
{
    Cliente c1;

    int id;

    ArchivoClientes archivoCliente;


    // Testeos

    /*
    // Cargar, guardar y mostrar 1 registro:

    c1.cargar();

    archivoCliente.agregarCliente(c1);

    cout << "Que cliente desea mostrar? Ingrese el ID: " << endl;

    cin >> id;

    archivoCliente.mostrarCliente(id);
    */


    /*
    // Mostrar todos los clientes registrados:

    archivoCliente.listaClientes();
    */


    /*
    // Modificar un cliente:

    cout << "Que cliente desea modificar? ingrese ID: " << endl;
    cin >> id;

    cout << "Ingrese los nuevos datos: " << endl;

    c1.cargar();

    archivoCliente.modificarCliente(id, c1);

    archivoCliente.listaClientes();
    */


    return 0;
}
