#include "lista_simple.h"


struct lista_simple * inserta(struct lista_simple *cabeza){
  int dato=0;
  printf("Dameel valor a insertar\n");
  scanf("%d",&dato );
  if(cabeza==NULL){
      cabeza=inicializa(cabeza);
      cabeza->dato=dato;
  }else if(cabeza->contador<cabeza->longitud){
    &(cabeza+cabeza->contador)->dato=dato;
    cabeza->contador=cabeza->contador+1;
  }else{
    struct lista_simple *auxiliar=cabeza;
    cabeza=(struct lista_simple *)malloc(sizeof(struct lista_simple)*cabeza->longitud*2);
    cabeza->longitud=cabeza->longitud*2;
    int i;
    for(i=0;i<auxiliar->longitud;i++){
        cabeza=inserta(cabeza, *(auxiliar+i)->dato);

    }
  }
  return cabeza;

}

struct lista_simple * inicializa(struct lista_simple *cabeza){
  cabeza= (struct lista_doble*)malloc(sizeof(struct lista_doble)*5);
  cabeza->contador=0;
  caabeza->longitud=5;
}

void muestra(struct lista_simple *cabeza){
  int i=0;
  for(i;i<cabeza->longitud;i++){
    printf("%d",*(cabeza+i)->dato);
  }
}

struct lista_simple * borrar(struct lista_simple *cabeza ){
  int dato=0;
  printf("Dame el dato pls");
  scanf("%d", &dato);
  for(i;i<cabeza->longitud;i++){
    if(*(cabeza+i)->dato==dato){
      
    }
  }
  return cabeza;
}
