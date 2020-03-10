#include "sieve.h"

bool * createArray(int N){
    bool *n = malloc(sizeof(bool)*N);
    fillArray(n, N);
    return n;
}


void fillArray(bool *n, int N){
    for( int i = 0; i < N; i++){
        n[i] = true;
        // printf("%d ", i + 2);
    }
    putchar('\n');
}

bool marked(bool b){
    return b == true;
}

void markArray(bool *n, int N){
    for (int i = 0; i < N; i++){
         if (marked(n[i])){  // se é primo
            for ( int j = 2*(i+2); j < N + 2; j += i+2){
                // printf("[[%d]]\n", j);
                n[j - 2] = false;
            }
         }
     }
}

void printSieve(bool *n, int N){
    putchar('{');
    for (int i = 0; i < N; i++){
        if (marked(n[i])){
            printf("%d ", i + 2);
        }
    }
    putchar('}');
    putchar('\n');
}


void freeArray(bool *n){
    free(n);
}
