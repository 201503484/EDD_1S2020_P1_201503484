#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include "Nodo.h"

class Lista_Doble
{
    public:
        Lista_Doble();
         Nodo * primero;
        Nodo * ultimo;

        //metodos//
        void insertar(Nodo * nuevo);
        Nodo * eliminar(Nodo * nodito);
        Nodo * buscar(Nodo * buscarNodito);
        void reemplazar(int remplazarNodito);
        void imprimir();

        bool estaVacia();

    protected:

    private:
};

#endif // LISTA_DOBLE_H