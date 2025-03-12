#ifndef __PILA_H__
#define __PILA_H__
#include <stdbool.h>

#define TAM 100
typedef int Dato;

typedef struct{
    Dato datos[TAM];
    int cima;
} Pila;

Pila vacia();
bool es_vacia(Pila);
void apilar(Pila *, Dato);
void desapilar(Pila*);
Dato cima(Pila);
void print_pila(Pila);

#endif