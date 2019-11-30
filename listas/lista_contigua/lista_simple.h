#ifndef __LISTA_H__
#define __LISTA_H__


#include<stdlib.h>
#include<stdio.h>

struct lista_simple {
  int dato;
  int contador;
  int longitud;
};
struct lista_simple* inserta(struct lista_doble *);
struct lista_simple* inicializa(struct lista_doble *);
struct lista_simple* muestra(struct lista_doble *);
struct lista_simple* borrar(struct lista_doble *);

#endif
