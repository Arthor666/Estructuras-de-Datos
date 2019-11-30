#include "lista_simple.h"

int main(){
  struct lista_simple *cabeza = NULL;
  int opc=0;
  do{
    printf("\nQue deseas hacer ?");
    printf("\n1) Insertar en la lista");
    printf("\n2) Borrar de la lista");
    printf("\n3) Mostrar la lista");
    printf("\n4) Reemplazar algun dato\n");
    scanf("%d",&opc);
    switch (opc) {
      case 1:
        cabeza=inserta(cabeza);
      break;
      case 2:
      cabeza=borrar(cabeza);
      break;
      case 3:
      muestra();
      break;
      case 4:
      cabeza=reemplaza(cabeza);
      break;
    }
  }while (opc!= 0);
  return 0;
}
