#include "bst.h"


int main(int argc, char **argv){
    BST * root = createTree();
    printf("%d\n", argc-1);
    for (int i = 0; i < argc-1; i++){
        insertNode(root, createNode(atoi(argv[i+1])));
    }
    printInOrder(root);
    deleteTree(root);
    free(root);
}