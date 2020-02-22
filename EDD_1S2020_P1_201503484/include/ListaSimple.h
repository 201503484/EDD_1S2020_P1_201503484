#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include <Nodo.h>


class ListaSimple
{
    public:
        ListaSimple();
        Nodo * primero;
        Nodo * ultimo;
        bool vacio();
        void ingresarInicio(char *elemento);
        void ingresarUltimo(char *elemento);
        void eliminarInicio();
        void eliminarUltimo();


    protected:

    private:
};

#endif // LISTASIMPLE_H
