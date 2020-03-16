#ifndef _STACK_
#define _STACK_

#include <stdio.h>
#include <stdlib.h>


typedef struct element Element;
typedef struct stack Stack;


Stack * createStack();

void pushChar(Stack *s, char c){
    Element *e = s->head;
    if (s->head == NULL){
        s->head = malloc(sizeof(Element));
        s->height++;
        s->head->item = c;
        s->head->next = NULL;
    } else{
        e->next = malloc(sizeof(Element));
        s->height++;
        s->head = e->next;
        s->head->item = c;
        s->head->next = NULL;
    }

}

void printStack();

#endif

