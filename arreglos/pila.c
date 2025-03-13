#include "pila.h"

Pila vacia(){

}

bool es_vacia(Pila p){

}

void apilar(Pila *p, Dato d)
{
    if(p->cima < TAM-1){
        p->cima++;
        p->datos[p->cima]=d;
    } else
    printf("La pila está llena\n");
}

void desapilar(Pila *p)
{
    if(p->cima != -1){
        _____________________________
    }else
        printf("La pila está vacía\n");
}

Dato cima(Pila p)
{
    return ______________________________
}

void print_pila(Pila p)
{
    
    if(es_vacia(p)){
        printf("[]\n");
        return;
    
    }
    printf("[ ");
    for(int i = p.cima; i > -1; )
    printf("]\n");
}