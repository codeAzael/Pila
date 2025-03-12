#ifndef __PILA_H__
#define __PILA_H__
#include <stdbool.h>

typedef int Dato;

typedef struct{
    Dato *datos;
    int len;
    int cima;
} Pila;

Pila vacia(int tam);
bool es_vacia(Pila);
void apilar(Pila *, Dato);
void desapilar(Pila*);
Dato cima(Pila);
void print_pila(Pila);

#endif