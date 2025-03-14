#ifndef __PILA_H__
#define __PILA_H__
#include <stdbool.h>
#include "nodo.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    nodo *cima; // Cuenta cuantos nodos hay en la pila
    nodo *len;
} Pila;

Pila *vacia();
bool es_vacia(Pila *);
void apilar(Pila *, Dato);
void desapilar(Pila *);
Dato cima(Pila *);
void print_pila(Pila);

#endif