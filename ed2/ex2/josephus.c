#include "josephus.h"

List * createList(){
    List *l = malloc(sizeof(List));
    l->head = l->tail = NULL;
    l->length = 0;
}


void freeList(List *l){
    Node *p = l->head;
    Node *v;
    for (int i = 0; i < l->length; i++){
        v = p;
        p = p->next;
        free(v);
    }
    free(l);
}

void fillList(List *l, int N){
    for (int i = 0; i < N; i++){
        appendList(l);
    }
}

void appendList(List *l){
    if (l->head == NULL){
        l->head = malloc(sizeof (Node));
        l->head->numb = 1;
        l->tail = l->head;
        l->tail->next = NULL;
        l->length++;
    } else{
        int temp = l->tail->numb;
        l->tail->next = malloc(sizeof(Node));
        l->tail = l->tail->next;
        l->tail->numb = temp + 1;
        l->tail->next = l->head;
        l->length++;
    }
}

void selectLeader(List *l, int M){

}

void removeElement(List *l, int n){
    Node *p = l->head;
    Node *v = p;
    Node *b = v;
    for (int i = 0; i < l; i++){
        if (l->head == n){
            l->head = l->head->next;
            l->tail = l->head;
            free(p);
        }
    }
}

void printList(List *l){
    Node *p = l->head;
    for (int i = 0; i < l->length; i++){
        printf("Node \t%d\n", p->numb);
        p = p->next;
    }
}