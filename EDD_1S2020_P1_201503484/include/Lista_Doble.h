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
<<<<<<< HEAD
        void insertarInicio(char * nuevo);
        void ingresarFinal(char*elemento);
=======
        void insertar(Nodo * nuevo);
>>>>>>> parent of 50ab151... Merge pull request #1 from andreadsaenz/Pruebita
        Nodo * eliminar(Nodo * nodito);
        Nodo * buscar(Nodo * buscarNodito);
        void reemplazar(char* remplazarNodito);
        void imprimir();
        void borrarPrimerElemento();
        void borrarUltimoElemento();

        bool estaVacia();

    protected:

    private:
};


#endif // LISTA_DOBLE_H
