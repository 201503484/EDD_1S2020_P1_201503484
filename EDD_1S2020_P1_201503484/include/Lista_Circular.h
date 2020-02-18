#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H
#include <Nodo.h>
#include <iostream>
class Lista_Circular
{
    public:
        Lista_Circular();
        Nodo * primero;
        Nodo * ultimo;
        bool estaVacio();
        void ingresarInicio(char* elemento);
        void ingresarFinal(char* elemento);
        void imprimir();

    protected:

    private:
};


#endif // LISTA_CIRCULAR_H
