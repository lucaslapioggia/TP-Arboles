#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

typedef struct nodoArbol {
     persona dato;
     struct nodoArbol * izq;
     struct nodoArbol * der;
} nodoArbol;

typedef struct {
     int legajo;
     char nombre[20];
     int edad;
} persona;

#endif // ARBOL_H_INCLUDED
