#ifndef _BST_
#define _BST_

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

typedef Node* BST;

BST * createTree();

void insertNode(BST *tree, Node *node);

Node * createNode(int key);

void printInOrder(BST *n);

void deleteTree(BST *root);

#endif