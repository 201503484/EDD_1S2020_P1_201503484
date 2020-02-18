#include <iostream>
#include <math.h>
#include <stdio.h>
#include <Nodo.h>
#include <PilaZ.h>
#include <Lista_Doble.h>
#include <stdlib.h>
using namespace std;
bool estado = false;
void buscar_y_reemplazar(string&Frase, string buscar, string reemplazar)
{
    int pos = Frase.find(buscar);

        while  (pos != -1){
        Frase.replace(pos,buscar.size(),reemplazar);
        pos = Frase.find(buscar, pos + reemplazar.size());
        estado = true;
        }


}

char * cambio(string&frase,int tamano)
{
    if(!(frase.empty()) && tamano!=0)
    {
        char * arrayChar = new char[tamano];
        for(int i = 0; i<tamano; i++)
        {
            arrayChar[i]= frase[i];
        }
        return arrayChar;
    }

}

int main()
{


        printf( "\n   UNIVERSIDAD DE SAN CARLOS DE GUATEMALA");
        printf( "\n   FACULTAD DE INGENIERIA");
        printf( "\n   ESTRUCTURAS DE DATOS");
        printf( "\n   PRACTICA 1");
        printf( "\n   Maria Andrea Duarte Saenz");
        printf( "\n   201503484                ");
        printf( "\n");
        printf( "\n");
        int n, opcion;
        string aux, frasecompleta,frase,p1,p2;

    do
    {

        printf( "\n   MENU");
        printf( "\n   1. Crear archivo.", 163 );
        printf( "\n   2. Abrir archivo.", 163 );
        printf( "\n   3. Archivos recientes.", 163 );
        printf( "\n   4. Salir." );
       do
        {
            printf( "\n   Introduzca opci%cn (1-4): ", 162 );
            scanf( "%d", &opcion );

        } while ( opcion < 1 || opcion > 4 );

        switch ( opcion )
        {
            case 1: system("cls");
                    printf("-------------------------------------------EDITOR DE TEXTO -----------------------------------------------\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("       ^w(Buscar y reemplazar)                 ^c(Reportes)                                    ^s(Guardar)\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("\n");
                    getline(cin, aux);
                    printf(" ");
                    getline(cin,frasecompleta);
                    break;

            case 2: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   La mitad de %d es %f\n\n", n, ( float ) n / 2 );
                    break;

            case 3: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   El cuadrado de %d es %d\n\n", n, ( int ) pow( n, 2 ) );
         }

         /* Fin del anidamiento */

    } while ( opcion != 4 );

    return 0;
}
