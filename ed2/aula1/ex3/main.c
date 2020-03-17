#include "stack.h"

#define DOUBLE 1
#define CHAR 2

int main (int argc, char** argv){
    Stack *sc = createStack();
    Stack *sd = createStack();
    // Stack *sd = createStack();
    double *d = malloc(sizeof(double)*(argc-1));
    for (int i = 0; i < argc - 1; i++){
        if (*argv[i+1] != '('){
            if(!isSymbol(*argv[i+1])){
                d[i] = atof(argv[i+1]);
                push(sd, &d[i], DOUBLE);
            }else{
                push(sc, argv[i+1], CHAR);
            }
        }
    }
    printStack(sd);
    printStack(sc);
    deleteStack(sc);
    deleteStack(sd);
    free(d);
}