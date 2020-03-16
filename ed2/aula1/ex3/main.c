#include "stack.h"

int main (int argc, char** argv){
    
    Stack *sc = createStack();
    Stack *sd = createStack();
    pushChar(sc, 'c');
    printStack(sc);
    // pushDouble(sd);
}