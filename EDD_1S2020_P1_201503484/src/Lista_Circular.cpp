#include "Lista_Circular.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
Lista_Circular::Lista_Circular()
{
        primero=ultimo=NULL;

}
void Lista_Circular::ingresarInicio(char* elemento)
{
    Nodo * temp = new Nodo(elemento);
    if(this->estaVacio()){
        primero = ultimo = temp;
        ultimo->siguiente= primero;
    }else{
        ultimo->siguiente=temp;
        temp->siguiente=primero;
        primero=temp;
    }
}
void Lista_Circular::ingresarFinal(char* elemento)
{
    Nodo *temp = new Nodo(elemento);
    if (estaVacio()== true)
    {
        primero = ultimo=temp;
        ultimo->siguiente=primero;
    }else{
        ultimo->siguiente=temp;
        ultimo=temp;
        temp->siguiente=primero;
    }
}
void Lista_Circular:: imprimir()
{
    if(estaVacio()==true)
    {

    }else
    {
        Nodo * aux = primero;
        bool seguir = true;
        while (seguir)
        {
           std::cout<<aux->cod << "___";
            if(aux==ultimo)
            {
                seguir = false;
            }
            aux = aux->siguiente;
        }
    }
}
bool Lista_Circular::estaVacio()
{
    if (this->primero == NULL){
        return true;
    }else {
        return false;
    }
    return true;
}
