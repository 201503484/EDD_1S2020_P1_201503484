#ifndef NODO_H
#define NODO_H
#include "iostream"

class Nodo
{
 public:
        int cod;
        Nodo * siguiente;
        Nodo * anterior;

        //Metodos//
        Nodo(int c);
        void setSiguiente(Nodo * siguiente);
        void setAnterior(Nodo * anterior);
        void setCaracter(int cod);

        Nodo * getSiguiente();
        Nodo * getAnterior();
      //  int getCaracter();


    protected:

    private:
};

#endif // NODO_H
