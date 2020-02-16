#ifndef PILAZ_H
#define PILAZ_H
#include <iostream>
#include <Nodo.h>
class PilaZ
{
      public:
        Nodo * TOP;

        void push(Nodo * nuevo);
        Nodo * pop();
        PilaZ();

        bool estaVacia();

    protected:

    private:
};

#endif // PILAZ_H
