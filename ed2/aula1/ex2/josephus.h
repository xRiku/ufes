#ifndef _JOSEPHUS_
#define _JOSEPHUS_

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

typedef struct list List;

List* createList();

void fillList(List *l, int N);

void appendList(List *l);

void setLeader(List *l, int M);

void printList(List *l);

void freeList(List *l);

#endif