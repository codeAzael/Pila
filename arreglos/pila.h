#ifndef __PILA_H__
#define __PILA_H__
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef int Dato;

typedef struct
{
    Dato datos[TAM];
    int cima;
    int len;
} Pila;

Pila vacia();
bool es_vacia(Pila);
void apilar(Pila *, Dato);
void desapilar(Pila *);
Dato cima(Pila);
void print_pila(Pila);

#endif