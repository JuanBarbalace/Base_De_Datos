#pragma once
#include "string"

class Fecha
{
    public:
        Fecha();
        Fecha(int dia, int mes, int anio);

        void cargar();
        void mostrar() const;

    private:
        int _dia;
        int _mes;
        int _anio;

        void fechaDefaul();
        void validarFecha();
        bool diaEsValido();
        bool mesEsValido();
        bool anioEsValido();
        bool esBisiesto();
};
