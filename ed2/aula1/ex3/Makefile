all: link clean


link: stack.o main.o
	gcc -o test stack.o main.o

stack.o: stack.c stack.h
	gcc -c stack.c

main.o: main.c stack.h
	gcc -c main.c

clean:
	rm *.o 