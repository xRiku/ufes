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
            return;
        }
        while(p->l != NULL || p->r != NULL){
            if (node->key < p->key){
                if (p->l == NULL){
                    break;
                }
                p = p->l;
            }else if (node->key > p->key){
                if (p->r == NULL){
                    break;
                }
                    p = p->r;
            }else{
                return;
            }
        }
        if (node-> key < p->key){
            p->l = node;
        } else if (node->key > p->key){
            p->r = node;
        }else{
            return;
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
    deleteNode(root);
    free(root);
}

void deleteNode(BST *root){
    if ((*root)->l != NULL){
        deleteNode(&((*root)->l)); 
    }
    if((*root)->r != NULL){
        deleteNode((&(*root)->r));
    }
    free(*root);
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
