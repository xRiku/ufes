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
                free(node);
                return;
            }
        }
        if (node-> key < p->key){
            p->l = node;
        } else if (node->key > p->key){
            p->r = node;
        }else{
            free(node);
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

int treeHeight(BST *root){
    int height;
    if (*root == NULL){
        height = -1;
    }else{
        if (((*root)->r == NULL) && ((*root)->l == NULL)){
            return 0;
        }else{
            int lDepth = treeHeight(&(*root)->l); 
            int rDepth = treeHeight(&(*root)->r); 
            if (lDepth > rDepth){
                return(lDepth+1); 
            }
            else {
                return(rDepth+1);
            }
        }
    }
    return height;
}