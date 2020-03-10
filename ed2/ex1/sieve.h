#ifndef _SIEVE_
#define _SIEVE_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* typedef struct {
    int numb;
    bool mark;
} Node;
 */

bool * createArray(int N);

void fillArray(bool *n, int N);

void markArray(bool *n, int N);

void printSieve(bool *n, int N);

/* void printCrint(Node *n; int N){
    for (int i = 0; i < N; i++){
        
    }
} */

void freeArray(bool *n);




#endif