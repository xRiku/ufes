#ifndef _STACK_
#define _STACK_

#include <stdio.h>
#include <stdlib.h>


typedef struct element Element;
typedef struct stack Stack;


Stack * createStack();

Element *createElement(void *item);

void push(Stack *s, void *c);

void pop(Stack *s);

void printStack();

void deleteStack(Stack *s);

#endif


