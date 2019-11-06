#include "arbolBin.h"

//definiciones

nodoArbol * crearNodoArbol(int dato){

    nodoArbol * aux = (nodoArbol*)malloc(sizeof(nodoArbol));

    aux->dato = dato;
    aux->d = NULL;
    aux->i = NULL;

    return aux;
}


nodoArbol * inicArbol(){
    return NULL;
}


nodoArbol * insertar(nodoArbol * A, int dato){
    if(A == NULL)
        A = crearNodoArbol(dato);
    else
    {
        if(dato > A->dato)
            A->d = insertar(A->d, dato);
        else
            A->i = insertar(A->i, dato);
    }

    return A;
}



nodoArbol * buscar(nodoArbol * A, int dato){

    nodoArbol * rta = NULL;

    if(A != NULL)
    {
        if(dato == A->dato)
            rta = A;
        else
        {
            if(dato > A->dato)
                rta = buscar(A->d, dato);
            else
                rta = buscar(A->i, dato);
        }
    }

    return rta;
}



void preorden(nodoArbol * A){
    if(A != NULL)
    {
        printf("%d", A->dato);
        preorden(A->i);
        preorden(A->d);
    }
}




void inorden(nodoArbol * A){
    if(A != NULL)
    {
        inorden(A->i);
        printf("%d", A->dato);
        inorden(A->d);
    }
}



void postorden(nodoArbol * A){
    if(A != NULL)
    {
        postorden(A->i);
        postorden(A->d);
        printf("%d", A->dato);
    }
}


nodoArbol * borrar(nodoArbol * A, int dato){
    if (A != NULL)
    {
        if(dato == A->dato)
        {
            if(A->i != NULL)
            {
                nodoArbol * masDer = NMD(A->i);
                A->dato = masDer->dato;
                A->i = borrar(A->i, masDer->dato);
            }
            else
            {
                if (A->d != NULL)
                {
                    nodoArbol * masIzq = NMI(A->d);
                    A->dato = masIzq->dato;
                    A->d = borrar(A->d, masIzq->dato);
                }
                else
                {
                    free(A);
                    A = NULL;
                }
            }
        }
        if(dato > A->dato)
            A->d = borrar(A->d, dato);
        if(dato < A->dato)
            A->i = borrar(A->i, dato);
    }
    return A;
}


nodoArbol * NMD(nodoArbol * A){
    nodoArbol * masDer = A;
    if(A->d != NULL)
        masDer = NMD(A->d);
    return masDer;
}





nodoArbol * NMI(nodoArbol * A){
    nodoArbol * masIzq = A;
    if(A->i != NULL)
        masIzq = NMI(A->i);
    return masIzq;
}



int cantNiveles(nodoArbol * A){

    int izq, der, niveles=0;

    if (A != NULL)
    {
        izq = 1 + cantNiveles(A->i);
        der = 1 + cantNiveles(A->d);

        if (izq > der)
        {
            niveles = izq;
        }
        else
        {
            niveles = der;
        }
    }

    return niveles;
}
