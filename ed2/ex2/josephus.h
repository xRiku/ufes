#ifndef _JOSEPHUS_
#define _JOSEPHUS_

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    struct Node *next;
} Node;

typedef struct{
    Node *head, *tail;
    int length;
} List;

List* createList();


void freeList(List *l);

#endif