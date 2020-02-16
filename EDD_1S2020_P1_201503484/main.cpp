#include <iostream>
#include <math.h>
#include <stdio.h>
#include <Nodo.h>
#include <PilaZ.h>
#include <Lista_Doble.h>
using namespace std;

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

        Nodo * prueba = new Nodo(2);
        prueba->setCaracter(5);
        Lista_Doble * lista = new Lista_Doble();
        lista->insertar(new Nodo(8));
        lista->insertar(new Nodo(80));
        lista->insertar(new Nodo(20));


        printf( "\n   el dato ingresado %d",prueba->cod);
        printf( "\n   el dato ingresado lista /////// %d",lista->primero->cod);
        printf( "\n   segundo dato /////// %d",lista->primero->siguiente->cod);
        printf( "\n   ");
        lista->imprimir();
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
        /* La opción sólo puede ser 1, 2, 3 ó 4 */

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   El doble de %d es %d\n\n", n, n * 2 );
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
