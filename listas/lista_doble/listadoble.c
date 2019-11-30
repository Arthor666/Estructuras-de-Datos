#include "ligada.h"
struct lista_doble *cabeza = NULL;
void inserta(){
  int dato=0;
  printf("Dameel valor a insertar\n");
  scanf("%d",&dato );
  if(cabeza==NULL){
      inicializa();
      cabeza->dato=dato;
  }else {
    struct lista_doble *auxiliar=(struct lista_doble*)malloc(sizeof(struct lista_doble));
    auxiliar->dato=dato;
    auxiliar->siguiente=NULL;
    auxiliar->anterior=cabeza;
    cabeza->siguiente=auxiliar;
    cabeza=auxiliar;
  }

}

void inicializa(){
  cabeza= (struct lista_doble*)malloc(sizeof(struct lista_doble));
  cabeza->siguiente=NULL;
  cabeza->anterior=NULL;
}

void muestra(){
  struct lista_doble *aux= cabeza;
  do{
    printf("%d,",aux->dato );
    aux=aux->anterior;
  }while (aux!=NULL);
}

int borrar(){
  int dato=0;
  struct lista_doble *aux=cabeza;
  printf("Dame el dato que quieres borrar\n" );
  scanf("%d",&dato );
  if(aux->dato==dato){
    aux->anterior->siguiente=NULL;
    cabeza=aux->anterior;
    free(aux);
    printf("El dato ha sido eliminado");
    return 0;
  }else{
    do {
      if(aux->dato==dato){
        if(aux->anterior==NULL){
          aux->siguiente->anterior=NULL;
          free(aux);
          printf("El dato ha sido eliminado");
          return 0;
        }else{
          aux->anterior->siguiente=aux->siguiente;
          aux->siguiente->anterior=aux->anterior;
          free(aux);
          printf("El dato ha sido eliminado");
          return 0;
        }
      }
      aux=aux->anterior;
    } while(aux!=NULL);
    printf("El dato no esta en la lista");
    return 0;
  }
}

int reemplaza(){
  int dato=0,reemplazo=0;
  printf("Dame el dato que en el cual vas a reemplazar\n");
  scanf("%d",&dato);
  printf("\nDame el dato que va a reemplazar su lugar\n");
  scanf("%d",&reemplazo);
  struct lista_doble *aux=cabeza;
  do {
    if(aux->dato==dato){
      aux->dato=reemplazo;
      return 0;
    }
    aux=aux->anterior;
  } while(aux!=NULL);
}
