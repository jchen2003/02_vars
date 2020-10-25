all : vars.o
	gcc -o vars vars.o

vars.o :
	gcc -c vars.c

run:
	./vars

clean:
	rm vars.o