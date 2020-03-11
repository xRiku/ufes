all: link clean



link: josephus.o main.o
	gcc -o test josephus.o main.o

josephus.o: josephus.h 
	gcc -c josephus.c

main.o: josephus.h
	gcc -c main.c

clean:
	rm *.o