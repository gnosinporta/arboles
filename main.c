#include <stdio.h>
#include <stdlib.h>

#include "arbolBin.h"

#define UN_INT 10
#define UN_INT2 5
#define UN_INT3 15



int main()
{
    printf("Uso de la libreria de arboles binarios\n\n");

    //creacion de un nodo

    nodoArbol * nodo = crearNodoArbol(UN_INT);

    //conversion de ese nodo a raiz de un arbol

    nodoArbol * arbol = nodo;

    //inserto dos ramas en el arbol

    arbol = insertar(arbol, UN_INT2);
    arbol = insertar(arbol, UN_INT3);

    //lo muestro preorden

    preorden(arbol); printf("\n");

    //lo muestro inorden

    inorden(arbol); printf("\n");

    //lo muestro postorden

    postorden(arbol); printf("\n");

    //mido cantidad de niveles

    printf("%i", cantNiveles(arbol));  printf("\n"); 

    //mido cantidad de Hojas

    printf("%i", cantHojas(arbol));  printf("\n");

    //mido cantidad de nodos

    printf("%i", cantNodos(arbol));  printf("\n");


    // NO ANDA BORRAR NODO


/*
    //borro el nodo izquierdo

    arbol = borrar(arbol, UN_INT2);  printf("\n");

    //lo muestro inorden

    inorden(arbol); printf("\n");
*/




    /*printf("creacion de un nodo\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");*/
    return 0;
}
