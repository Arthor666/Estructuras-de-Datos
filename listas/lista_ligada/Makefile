run: a.out
	./a.out
a.out: main.o lista_ligada.o
	gcc main.o lista_ligada.o
main.o: main.c
	gcc main.c -c
contigua.o: lista_ligada.c
	gcc lista_ligada.c -c
clear:
	rm -f *.o a.out
