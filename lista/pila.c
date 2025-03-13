#include "pila.h"
#include <stdlib.h>

Pila *vacia()
{
    Pila *p;
    p = (Pila*)malloc(sizeof(Pila));
    p->cima = NULL;
    p->len = 0;
    return p;
}

bool es_vacia(Pila *p){
    return p->cima == NULL;
    //return p->len ==0;
}

void apilar(Pila *p, Dato d)
{
    nodo *nuevo = crear_nodo(d);
    nuevo->sig = p->cima;
    p->cima = nuevo;

}

void desapilar(Pila *p)
{ 
    if(!es_vacia(p))
    {
        nodo *temp = p->cima;
        p->cima = p->cima->sig;
        temp->sig = NULL;
        borrar_nodo (temp);
        }else
                printf("La pila está vacía\n");
}

Dato cima(Pila *p){
    return p->cima->dato;
}

void print_pila(Pila p)
{
    
    if(es_vacia(&p)){
        printf("[]\n");
        return;         
    }
    printf("[ ");
    for (nodo *temp = p.cima; temp !NULL; temp = temp->sig);
            printf("%d ", temp->dato);
    printf("]\n");
}