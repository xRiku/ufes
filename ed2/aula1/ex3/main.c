#include "stack.h"

#define DOUBLE 1
#define CHAR 2

int main (int argc, char** argv){
    Stack *sc = createStack();
    Stack *sd = createStack();
    // Stack *sd = createStack();
    double op;
    double *d = malloc(sizeof(double)*(argc-1));
    for (int i = 0; i < argc - 1; i++){
        if (*argv[i+1] != '(' && *argv[i+1] != ')'){
            if(!isSymbol(*argv[i+1])){
                d[i] = atof(argv[i+1]);
                push(sd, &d[i], DOUBLE);
            }else{
                push(sc, argv[i+1], CHAR);
            }
        }
        if (*argv[i+1] == ')'){
            char * c = pop(sc);
            double *a = pop(sd);
            double *b = pop(sd);
            switch(*c){
                case '+':
                    op = *b + *a;
                    break;
                case '-':
                    op = *b - *a;
                    break;
                case '*':
                    op = *b * *a;
                    break;
                case '/':
                    op = *b / *a;
                    break;
            } 
            push(sd, &op, DOUBLE);
        }
    }
    printStack(sd);
    deleteStack(sc);
    deleteStack(sd);
    free(d);
}