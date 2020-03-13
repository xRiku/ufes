#include "bst.h"


int main(int argc, char **argv){
    BST * root = createTree();
    for (int i = 0; i < argc-1; i++){
        insertNode(root, createNode(atoi(argv[i+1])));
    }
    printInOrder(root);
    deleteTree(root);
}