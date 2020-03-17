#include "stack.h"

struct element{
    int id;
    void *item;
    struct element *next;
};

struct stack{
    struct element *head;
    int height;
};

Stack * createStack(){
    Stack * s = malloc(sizeof(Stack));
    s->height = 0;
    s->head = NULL;
}

Element *createElement(void *item, int id){
    Element *e = malloc(sizeof(Element));
    e->item = item;
    e->id = id;
    return e;
}

void push(Stack *s, void *item, int id){
    if (s->head == NULL){
        s->head = createElement(item, id);
        s->head->next = NULL;
    } else{
        Element *e = createElement(item, id);
        e->next = s->head;
        s->head = e;
    }
    s->height++;
}

void pop(Stack *s){
    Element *e = s->head;
    s->head = s->head->next;
    free(e);
    s->height--;
}


void printStack(Stack *s){
    Element *e = s->head;
    double *d;
    char *n;
    for (int i = 0; i < s->height; i++){
        switch(e->id){
            case 1:
                d = e->item;
                printf("%lf ", *d);
                break;
            case 2:
                n = e->item;
                printf("%c ", *n);
                break;
        }
        e = e->next;
    }
    putchar('\n');
    printf("Altura %d\n", s->height);
}

void deleteStack(Stack *s){
    if (s->height == 0){
        free(s);
        return;
    }else{
        while(s->height != 0){
            pop(s);
        }
        free(s);
        return;
    }
}

int isSymbol(char c){
    switch (c){
        case '+':
        case '-':
        case '*':
        case '/':
        case ')':
            return 1;
        default:
            return 0;    
    }
}
