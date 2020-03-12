#include "bst.h"

struct node{
    int key;
    struct node *l;
    struct node *r; 
};

BST * createTree(){
    BST * root = malloc(sizeof(BST));
    if ( root != NULL ){
        *root = NULL;
    }
    return root;
}

void insertNode(BST *root, Node *node){
    Node *p = *root;
    if (root != NULL){
        if (*root == NULL){
            *root = node;
        }
        while(p->l != NULL || p->r != NULL){
            if (node->key < p->key){
                if (p->l == NULL){
                    break;
                }
                p = p->l;
            }else{
                if (node->key > p->key){
                    if (p->r == NULL){
                        break;
                    }
                    p = p->r;
                }
            }
        }
        if (node-> key < p->key){
            p->l = node;
        } else if (node->key > p->key){
            p->r = node;
        }
    }
}

Node * createNode(int key){
    Node *n = malloc(sizeof(Node));
    n->key = key;
    n->l = NULL;
    n->r = NULL;
    return n;
}

void deleteTree(BST *root){
    if( root = NULL){
        
    }
    free(root);
}

void printInOrder(BST *root) {
    if(root != NULL){
        if ((*root)->l != NULL){
            printInOrder(&((*root)->l)); 
        }
        printf("%d\n", (*root)->key);
        if((*root)->r != NULL){
            printInOrder((&(*root)->r));
        }
    }
} 




/* int insere_ArvBin(ArvBin* raiz, int valor)
{
    if (raiz != NULL)
    {
        tNo *novo = malloc(sizeof(tNo));
        novo->esq = NULL;
        novo->dir = NULL;
        novo->info = valor;
        tNo *aux = (*raiz);

        if ((*raiz) == NULL)
        {
            (*raiz) = novo;
            return 1;
        }

        while (aux->esq != NULL || aux->dir != NULL)
        {
            if (valor < aux->info)
            {
                if (aux->esq == NULL)
                {
                    break;
                }
                aux = aux->esq;
            }
            else if (valor > aux->info)
            {
                if (aux->dir == NULL)
                {
                    break;
                }
                aux = aux->dir;
            }
            else
            {
                return 0; // Valor já presente na árvore
            }

        }

        if (valor < aux->info)
        {
            aux->esq = novo;
            return 1;
        }
        else if (valor > aux->info)
        {
            aux->dir = novo;
            return 1;
        }

    }
    else
    {
        return 0;
    }
} */