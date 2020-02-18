#include "Lista_Doble.h"
Lista_Doble::Lista_Doble()
{
    this->primero=NULL;
    this->ultimo=NULL;

}

void Lista_Doble ::insertar(Nodo * nuevo)
{
    if(this->estaVacia()){
        this->primero = nuevo;
        this->ultimo = nuevo;
    }else{
        if (this->primero == this->ultimo){
            this->ultimo->setSiguiente(nuevo);
            nuevo ->setAnterior(this->ultimo);
            this->ultimo = nuevo;
        }else{
            //RECORRER
            Nodo * pivote = this -> primero;
            do {
                pivote = pivote->siguiente;
            }while(pivote->siguiente != NULL);
            pivote->setSiguiente(nuevo);
            nuevo->setAnterior(pivote);
            this->ultimo = nuevo;

        }

    }
}

bool Lista_Doble::estaVacia()
{
    if (this->primero == NULL){
        return true;
    }else {
        return false;
    }
    return true;
}

void Lista_Doble::imprimir(){
    if(this->estaVacia()){
        std::cout<< "la lista esta vacia"<< std::endl;
    }else{
        Nodo * aux = this->primero;

        while(aux != NULL){
             std::cout<<aux->cod << std::endl;
             aux = aux->siguiente;
        }
    }
}
