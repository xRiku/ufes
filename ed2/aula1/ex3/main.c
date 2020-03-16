#include "stack.h"

int main (int argc, char** argv){
    Stack *sc = createStack();
    // Stack *sd = createStack();
    for (int i = 0; i < argc - 1; i++){
        if (*argv[i+1] != '('){
            // pushChar(sc, argv[i+1]);
            push(sc, argv[i+1]);
            pop(sc);
        }
    }
    deleteStack(sc);
}