#include "stack.h"

struct element{
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

Element *createElement(void *item){
    Element *e = malloc(sizeof(Element));
    e->item = item;
    return e;
}

void push(Stack *s, void *item){
    if (s->head == NULL){
        s->head = createElement(item);
        s->head->next = NULL;
    } else{
        Element *e = createElement(item);
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
    for (int i = 0; i < s->height; i++){
        char *n = e->item;
        printf("%c ", *n);
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
