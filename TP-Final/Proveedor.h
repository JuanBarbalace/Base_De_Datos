#pragma once
#include "Persona.h"

class Proveedor : public Persona
{
    public:
        Proveedor();
        int getIdProveedor() const;

        void setIdProveedor(const int idProveedor);

        void cargar();
        void mostrar();

    private:
        int _idProveedor;
};
