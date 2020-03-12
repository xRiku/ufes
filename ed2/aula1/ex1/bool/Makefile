all: link clean


run:
	time ./test 1000000000

link: sieve.o main.o
	gcc -o test sieve.o main.o

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

main.o: main.c sieve.h
	gcc -c main.c


clean:
	rm *.o