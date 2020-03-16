#include "stack.h"

int main (int argc, char** argv){
    Stack *sc = createStack();
    Stack *sd = createStack();
    // Stack *sd = createStack();
    for (int i = 0; i < argc - 1; i++){
        if (*argv[i+1] != '('){
            if(!isSymbol(*argv[i+1])){
                double d = atof(argv[i+1]);
                push(sd, &d);
                printf("%lf\n", d);
            }else{
                push(sc, argv[i+1]);
            }
        }
    }
    printStack(sd);
    // printf("************\n");
    // printStack(sc);
    deleteStack(sc);
    deleteStack(sd);
}