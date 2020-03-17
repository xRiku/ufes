#include "josephus.h"

struct node{
    int numb;
    struct node *next;
};

struct list{
    Node *head;
    Node *tail;
    int length;
};

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
        if (counter == M-1){
            if (p == l->head){
                l->head = l->head->next;
                l->tail->next = l->head;
                free(p);
                p = l->tail;
                l->length--;
            } else {
                if (p == l->tail){
                    l->tail = link;
                    l->tail->next = l->head;
                    free(p);
                    p = l->tail;
                    l->length--;
                } else{
                    link->next = p->next;
                    free(p);
                    p = link;
                    l->length--;
                }
            }
            counter = 0;
        } else {
            counter++;
            link = p;
        }
    }
}

void printList(List *l){
    Node *p = l->head;
    for (int i = 0; i < l->length; i++){
        printf("%d\n", p->numb);
        p = p->next;
    }
}