#include "ligada.h"



int main(){
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
        inserta();
      break;
      case 2:
      borrar();
      break;
      case 3:
      muestra();
      break;
      case 4:
      reemplaza();
      break;
    }
  }while (opc!= 0);
  return 0;
}
