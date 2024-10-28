#pragma once
#include "Persona.h"

class Cliente : public Persona
{
    public:
        Cliente();
        int getIdCliente() const;
        void setIdCliente(const int idCliente);

        void cargar();
        void mostrar();

    private:
        int _idCliente;
};
