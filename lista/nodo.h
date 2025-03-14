#ifndef __NODO_H__
#define __NODO_H__

typedef int Dato;

struct _nodo
{
    int dato;
    struct _nodo *sig;
};

typedef struct _nodo nodo;

nodo *crear_nodo(int);
void borrar_nodo(nodo *);
void print_nodo(nodo *);

#endif