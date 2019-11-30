run: a.out
	./a.out
a.out: main.o lista_simple.o
	gcc main.o lista_simple.o
main.o: main.c
		gcc main.c -c
contigua.o: ligada_simple.c
	gcc lista_simple.c -c
clear:
rm -f *.o a.out
