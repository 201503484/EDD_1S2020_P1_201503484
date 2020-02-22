#include "PilaZ.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
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
void PilaZ::imprimir(){
    if(this->estaVacia()){
        std::cout<< "la pila esta vacia"<< std::endl;
    }else{
        Nodo * aux = this->TOP;
        while(aux != NULL){
             std::cout<<aux->cod<<std::endl;
             aux = aux->siguiente;
        }
    }
}
