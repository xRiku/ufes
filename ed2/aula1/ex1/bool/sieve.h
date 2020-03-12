#ifndef _SIEVE_
#define _SIEVE_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool * createArray(int N);

void fillArray(bool *n, int N);

void markArray(bool *n, int N);

void printSieve(bool *n, int N);

void freeArray(bool *n);




#endif