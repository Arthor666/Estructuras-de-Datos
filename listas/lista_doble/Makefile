run: a.out
	./a.out
a.out: main.o listadoble.o
	gcc main.o listadoble.o
main.o: main.c
	gcc main.c -c
contigua.o: listadoble.c
	gcc listadoble.c -c
clear:
	rm -f *.o a.out
