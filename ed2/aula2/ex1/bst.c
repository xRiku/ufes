#include "bst.h"


struct node{
    int key;
    struct Node *l;
    struct Node *r; 
}

BST * createTree(){
    BST * root = malloc(sizeof(BST));
    if ( root != NULL ){
        *root = NULL;
    }
    return root;
}

void deleteTree(BST *root){
    if( root = NULL){
    }
    free(root);
}

