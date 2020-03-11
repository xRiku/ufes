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
        l->tail->next = NULL;
        l->tail->next = malloc(sizeof(Node));
        l->tail = l->tail->next;
        l->tail->numb = temp + 1;
        l->tail->next = l->head;
        l->length++;
    }
}

void setLeader(List *l, int M){
    int counter = 0;
    Node *p = l->head;
    Node *link = p;
    for (; l->length != 1; p = p->next){
        if (counter == 4){
            printf("%d\n", p->numb);
            removeElement(l, p, link);
            counter = 0;
        } else {
            counter++;
            link = p;
        }
    }
}

void removeElement(List *l, Node *dead, Node *link){
    if (l->head == dead){
        l->head = l->head->next;
        l->tail->next = l->head;
        free(dead);
        dead = link->next;
        l->length--;
        return;
    } else {
        if (dead == l->tail){
            l->tail = link;
            l->tail->next = l->head;
            free(dead);
            dead = dead->next;
            l->length--;
            return; 
        } else{
            link->next = dead->next;
            free(dead);
            dead = link->next;
            l->length--;
            return;
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