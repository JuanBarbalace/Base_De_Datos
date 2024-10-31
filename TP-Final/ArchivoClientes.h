#pragma once
#include "Cliente.h"
#include <string>

class ArchivoClientes
{
    public:
        ArchivoClientes();

        bool agregarCliente(const Cliente &cliente);
        void mostrarCliente(int idCliente);
        void modificarCliente(int idCliente, const Cliente &clienteActualizado);
        void listaClientes();

    private:
        std::string _fileName;

        Cliente buscarCliente(int posicion);
        bool modificar(int posicion, const Cliente &cliente);
        int getCantidadRegistros();
        int buscarPorId(int idCliente);
};
