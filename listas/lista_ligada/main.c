#include "ligada.h"

int main(){
	int opc=0;
	do{
		printf("\nQue quieres hacer ?\n");
		printf("1)Insertar a la lista\n");
		printf("2)Borrar de la lista\n");
		printf("3)Mostrar la lista\n");
		printf("4)Buscar en la lista\n");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				inserta();
			break;
			case 2:
				borrar();
			break;
			case 3:
				mostrar();
			break;
			case 4:
				buscar();
			break;
		}
	}while(opc!=0);
	return 0;
}
