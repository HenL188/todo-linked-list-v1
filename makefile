all: clean program

program: main.o logtic.o
	gcc -o main main.o logtic.o

main.o:
	gcc -c main.c

logtic.o:
	gcc -c logtic.c

clean:
	rm -rf *.o
