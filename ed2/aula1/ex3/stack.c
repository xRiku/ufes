#include "stack.h"

struct element{
    void *item;
    struct element *next;
};

struct stack{
    struct element *head;
    int height;
};

Stack * createStack(){
    Stack * s = malloc(sizeof(Stack));
    s->height = 0;
    s->head = NULL;
}

void printStack(Stack *s){
    Element *e = s->head;
    for (int i = 0; i < s->height; i++){
        printf("%c\n", e->item);
        e = e->next;
    }
}
