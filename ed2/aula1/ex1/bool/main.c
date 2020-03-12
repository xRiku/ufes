#include "sieve.h"


int main(int argc, char** argv){
    int N = atoi(argv[1]);
    bool *n = createArray(N - 1);
    markArray(n, N);
    // printSieve(n, N);
    freeArray(n);
}
