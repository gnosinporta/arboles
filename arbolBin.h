#ifndef ARBOLBIN_H_INCLUDED
#define ARBOLBIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>







//estructura principal

typedef struct{
    int dato;
    struct nodoArbol *i;
    struct nodoArbol *d;
}nodoArbol;






//prototipados

nodoArbol * crearNodoArbol(int dato);
nodoArbol * inicArbol();
nodoArbol * insertar(nodoArbol * A, int dato);
nodoArbol * buscar(nodoArbol * A, int dato);
void preorden(nodoArbol * A);
void inorden(nodoArbol * A);
void postorden(nodoArbol * A);
nodoArbol * borrar(nodoArbol * A, int dato);
nodoArbol * NMD(nodoArbol * A);
nodoArbol * NMI(nodoArbol * A);
int cantNiveles(nodoArbol * A);
int cantidadHojas(nodoArbol * A);
int cantidadNodos(nodoArbol * A);







#endif // ARBOLBIN_H_INCLUDED
