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
    double *d;
    if (id == 1){
        d = malloc(sizeof(double));
        double *d2 = item;
        *d = *d2;
    }
    char *c;
    if (id == 2){
        c = malloc(sizeof(char));
        char *c2 = item;
        *c = *c2;
    }
    if (s->head == NULL){
        if (id == 1){
            s->head = createElement(d, id);
        }
        if (id == 2){
            s->head = createElement(c, id);
        }
        s->head->next = NULL;
    } else{
        Element *e = NULL;
        if (id == 1){
            e = createElement(d, id);
        }
        if (id == 2){
            e = createElement(c, id);
        }
        // Element *e = createElement(item, id);
        e->next = s->head;
        s->head = e;
    }
    s->height++;
}

void * pop(Stack *s){
    Element *e = s->head;
    s->head = s->head->next;
    s->height--;
    void *ret = e->item;
    free(e);
    return ret;
}

int getHeight(Stack *s){
    return s->height;
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
            return 1;
        default:
            return 0;    
    }
}
