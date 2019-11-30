#ifndef __LIGADA_H__
#define __LIGADA_H__

#include <stdlib.h>
#include<stdio.h>

struct lista_ligada{
	int dato;
	struct lista_ligada *siguiente;
};
void inserta();
void inicializa();
int mostrar();
int borrar();
int buscar();

#endif
