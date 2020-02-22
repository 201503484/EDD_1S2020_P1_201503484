#include "ListaSimple.h"

ListaSimple::ListaSimple()
{
    primero=ultimo=NULL;

}
bool ListaSimple::vacio()
{
    return (primero==NULL);
}

void ListaSimple::ingresarInicio(char* elemento)
{
    Nodo *temp = new Nodo(elemento);
    if(vacio()== true)
    {
        primero=ultimo=temp;
    }
    else{
        temp->siguiente=primero;
        primero=temp;
    }
}
void ListaSimple::ingresarUltimo(char* elemento)
{
    Nodo *temp = new Nodo(elemento);
    if(vacio()== true)
    {
        primero=ultimo=temp;
    }
    else{
        ultimo->siguiente=temp;
        ultimo=temp;
    }
}

void ListaSimple::eliminarInicio()
{
    if (vacio()==true)
    {
        std::cout<<"No se puede eliminar. Lista vacia."<<std::endl;

    } else {
        if (primero == ultimo){
            primero=ultimo=NULL;
            std::cout<<"elemento eliminado"<<std::endl;
        }
        else
        {
            Nodo *temp = primero;
            primero=primero->siguiente;
            delete temp;
             std::cout<<"Elemento eliminado"<<std::endl;
        }
    }
}

void ListaSimple::eliminarUltimo()
{
    if (vacio()==true)
    {
        std::cout<<"No se puede eliminar. Lista vacia."<<std::endl;

    } else {
       Nodo *aux = primero;
       while(aux!=NULL)
       {
           if(primero==ultimo)
           {
               primero=ultimo=NULL;
               std::cout<<"Elemento eliminado"<<std::endl;
           }
       }
    }
}
