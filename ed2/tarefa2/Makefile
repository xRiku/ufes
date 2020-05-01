all: link clean


link: union_find.o main.o
	gcc -o test union_find.o main.o

union_find.o: union_find.c union_find.h
	gcc -c union_find.c

main.o: main.c union_find.h
	gcc -c main.c

clean:
	rm *.o