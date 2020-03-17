#ifndef _STACK_
#define _STACK_

#include <stdio.h>
#include <stdlib.h>


typedef struct element Element;
typedef struct stack Stack;


Stack * createStack();

Element *createElement(void *item, int id);

void push(Stack *s, void *item, int id);

void pop(Stack *s);

void printStack();

void deleteStack(Stack *s);

int isSymbol(char c);

#endif


