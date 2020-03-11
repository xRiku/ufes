#ifndef _JOSEPHUS_
#define _JOSEPHUS_

#include <stdio.h>
#include <stdlib.h>

typedef struct n{
    int numb;
    struct n *next;
} Node;

typedef struct{
    Node *head;
    Node *tail;
    int length;
} List;

List* createList();

void fillList(List *l, int N);

void appendList(List *l);

void selectLeader(List *l, int M);

void printList(List *l);

void freeList(List *l);

#endif