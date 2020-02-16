#include "PilaZ.h"

PilaZ::PilaZ()
{
     this->TOP= NULL;
}
 void PilaZ::push(Nodo * nuevo)
 {
     if(this->estaVacia()){
        this->TOP = nuevo;
     }else{
         nuevo->setSiguiente(this->TOP);
         this->TOP = nuevo;

     }
 }
 bool PilaZ::estaVacia()
{
    if (this->TOP == NULL){
        return true;
    }else {
        return false;
    }
    return true;
}

 Nodo * PilaZ ::pop()
{
    if (this->estaVacia())
    {
        return NULL;
    }else{
       Nodo * aux = this->TOP;
        this->TOP = this->TOP->getSiguiente();
        aux->setSiguiente(NULL);    }
}
