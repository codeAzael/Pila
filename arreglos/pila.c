#include "pila.h"

Pila vacia()
{
    Pila p;
    p.len = TAM;
    p.cima = -1;
    return p;
}

bool es_vacia(Pila p)
{
    return p.cima == -1;
}

void apilar(Pila *p, Dato d)
{
    if (p->cima < TAM - 1)
    {
        p->cima++;
        p->datos[p->cima] = d;
    }
    else
        printf("La pila está llena\n");
}

void desapilar(Pila *p)
{
    if (p->cima != -1)
    {
        p->cima--;
    }
    else
        printf("La pila está vacía\n");
}

Dato cima(Pila p)
{
    return p.datos[p.cima];
}

void print_pila(Pila p)
{

    if (es_vacia(p))
    {
        printf("[]\n");
        return;
    }
    printf("[ ");
    for (int i = p.cima; i > -1; i--){
        printf("%d ", p.datos[i]);
    }
        printf("]\n");
}