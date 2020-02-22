#include "Lista_Doble.h"
Lista_Doble::Lista_Doble()
{
    this->primero=NULL;
    this->ultimo=NULL;

}

<<<<<<< HEAD
void Lista_Doble ::insertarInicio(char* nuevo)
=======
void Lista_Doble ::insertar(Nodo * nuevo)
>>>>>>> parent of 50ab151... Merge pull request #1 from andreadsaenz/Pruebita
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

<<<<<<< HEAD
void Lista_Doble ::borrarPrimerElemento()
{
    if(estaVacia()==true)
    {
        std::cout<<"No se puede eliminar. Lista vacia." <<std::endl;
    }
    else{
        if (primero==ultimo)
        {
            primero=ultimo=NULL;
        }else{
            Nodo *temp = primero;
            primero = primero->siguiente;
            primero->anterior=NULL;
            delete temp;
            std::cout <<"Elemento eliminado."<<std::endl;
        }
    }

}

void Lista_Doble:: borrarUltimoElemento()
{
    if(estaVacia()==true){
        std::cout<<"No se puede eliminar. Lista vacia."<<std::endl;

    }else{
        if(primero==ultimo){
            primero=ultimo-NULL;
        }else{
            Nodo *temp = ultimo;
            ultimo = ultimo->anterior;
            ultimo->siguiente= NULL;
            delete temp;
            std::cout <<"Elemento eliminado."<<std::endl;
        }
    }
}

void Lista_Doble::ingresarFinal(char*elemento)
{
    Nodo *temp = new Nodo(elemento);
    if (estaVacia()==true)
    {
        primero=ultimo=temp;
    }else{
        ultimo->siguiente=temp;
        temp->anterior=ultimo;
        ultimo=temp;
    }

}

void Lista_Doble::imprimir()
{

    if(estaVacia()==true){

        std::cout<<"No hay elementos en la lista"<<std::endl;

=======
void Lista_Doble::imprimir(){
    if(this->estaVacia()){
        std::cout<< "la lista esta vacia"<< std::endl;
>>>>>>> parent of 50ab151... Merge pull request #1 from andreadsaenz/Pruebita
    }else{
        Nodo * aux = this->primero;

        while(aux != NULL){
             std::cout<<aux->cod << std::endl;
             aux = aux->siguiente;
        }
    }
}
