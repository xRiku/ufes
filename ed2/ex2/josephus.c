#include "josephus.h"

List * createList(){
    List *l = malloc(sizeof(List));
    l->head = l->tail = NULL;
}


void freeList(List *l){
    free(l);
}