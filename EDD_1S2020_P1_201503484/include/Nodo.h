#ifndef NODO_H
#define NODO_H
#include "iostream"

class Nodo
{
 public:
        char* cod;
        Nodo * siguiente;
        Nodo * anterior;

        //Metodos//
        Nodo(char* c);
        void setSiguiente(Nodo * siguiente);
        void setAnterior(Nodo * anterior);
        void setCaracter(char* cod);

        Nodo * getSiguiente();
        Nodo * getAnterior();
        char* getCaracter();


    protected:

    private:
};


#endif // NODO_H
