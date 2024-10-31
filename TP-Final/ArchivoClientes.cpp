#include "ArchivoClientes.h"
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

ArchivoClientes::ArchivoClientes()
{
    _fileName = "clientes.dat";
}


bool ArchivoClientes::agregarCliente(const Cliente &cliente)
{
    bool result;

    FILE *pFile;
    pFile = fopen(_fileName.c_str(), "ab");

    if(pFile == nullptr)
    {
        return false;
    }

    result = fwrite(&cliente, sizeof(Cliente), 1, pFile) == 1;

    fclose(pFile);

    return result;
}


void ArchivoClientes::mostrarCliente(int idCliente)
{
    int posicion;

    posicion = buscarPorId(idCliente);

    if(posicion != -1)
    {
        Cliente cliente;

        cliente = buscarCliente(posicion);

        cliente.mostrar();
    }
    else
    {
        cout << "Cliente no encontrado." << endl;
    }
}


void ArchivoClientes::modificarCliente(int idCliente, const Cliente &clienteAModificar)
{
    int posicion = buscarPorId(idCliente);

    if(posicion != -1)
    {
        modificar(posicion, clienteAModificar);
        cout << "Cliente modificado." << endl;
    }
    else
    {
        cout << "Cliente no encontrado." << endl;
    }
}


void ArchivoClientes::listaClientes()
{
    int x, cantidad = getCantidadRegistros();

    for(x = 0; x < cantidad; x++)
    {
        Cliente cliente;
        cliente = buscarCliente(x);
        cliente.mostrar();
    }
}




// Metodos Privado
Cliente ArchivoClientes::buscarCliente(int posicion)
{
    FILE *pFile;
    pFile = fopen(_fileName.c_str(), "rb");

    Cliente cliente;

    if(pFile == nullptr)
    {
        return cliente;
    }

    fseek(pFile, sizeof(Cliente) * posicion, SEEK_SET);
    fread(&cliente, sizeof(Cliente), 1, pFile);

    fclose(pFile);

    return cliente;
}


bool ArchivoClientes::modificar(int posicion, const Cliente &cliente)
{
    bool result;

    FILE *pFile;
    pFile = fopen(_fileName.c_str(), "rb+");

    if(pFile == nullptr)
    {
        return false;
    }

    fseek(pFile, sizeof(Cliente) * posicion, SEEK_SET);
    result = fwrite(&cliente, sizeof(Cliente), 1, pFile) == 1;

    fclose(pFile);

    return result;
}


int ArchivoClientes::getCantidadRegistros()
{
    int total;

    FILE *pFile;
    pFile = fopen(_fileName.c_str(), "rb");

    if(pFile == nullptr)
    {
        return -1;
    }

    fseek(pFile, 0, SEEK_END);
    total = ftell(pFile);

    fclose(pFile);

    return total / sizeof(Cliente);
}


int ArchivoClientes::buscarPorId(int idCliente)
{
    int posicion = 0;

    FILE *pFile;
    pFile = fopen(_fileName.c_str(), "rb");

    if(pFile == nullptr)
    {
        return -1;
    }

    Cliente cliente;

    while(fread(&cliente, sizeof(Cliente), 1, pFile) == 1)
    {
        if(cliente.getIdCliente() == idCliente)
        {
            fclose(pFile);
            return posicion;
        }
        posicion++;
    }

    fclose(pFile);

    return -1;
}
