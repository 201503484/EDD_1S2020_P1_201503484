#include <Nodo.h>

Nodo::Nodo(char* c)
{
    this->cod = c;
    this->anterior = NULL;
    this->siguiente = NULL;

}

void Nodo::setSiguiente(Nodo* sig)
{
    this->siguiente = sig;
}

void Nodo ::setAnterior(Nodo * ant)
{
    this->anterior = ant;
}
void Nodo ::setCaracter(char* car1)
{
    this->cod = car1;
}

Nodo * Nodo :: getSiguiente()
{
    return this->siguiente;
}
Nodo * Nodo ::getAnterior()
{
    return this->anterior;
}
char* Nodo:: getCaracter(){
    return this->cod;
}
