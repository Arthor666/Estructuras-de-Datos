#ifndef __LIGADA_H__
#define __LIGADA_H__

#include <stdio.h>
#include <stdlib.h>

struct lista_doble {
  int dato;
  struct lista_doble*siguiente;
  struct lista_doble*anterior;
};

void inserta();
void inicializa();
void muestra();
int borrar();
int reemplaza();

struct lista* eliminar(struct lista* lista);
struct lista* agregar(struct lista* lista, int dato);
void mostrar(struct lista* lista);
#endif
