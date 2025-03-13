#include "pila.h"
#include <stdlib.h>


Pila vacia(int tam)
{
    Pila p;
    p.len = len;
    p.datos = (Dato*)malloc(sizeof(Dato)*p.len);
    p.cima = -1
}

bool es_vacia(Pila p){
    return p.cima == -1
}

void apilar(Pila *p, Dato d)
{
    if(p->cima < p->len-1){
        p->cima++;
        p->datos

        }else
        printf("La pila está llena\n");
}

void desapilar(Pila *p)
{
    if(p->cima != -1){
        ______________________________________
    }else
        printf("La pila está vacía\n");
}

Dato cima(Pila p)
{
    return p.datos(p.cima);

}

void print_pila(Pila p)
{
    
    if(es_vacia(p)){
        ________________________________________
        _______________________________________
    }
    printf("[ ");
    ________________________________________
    ________________________________________
    ________________________________________
    printf("]\n");
}