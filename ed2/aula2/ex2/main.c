#include "bst.h"
#include <time.h>


int main(int argc, char **argv){
    srand(time(NULL)); // should only be called once
    int r = rand(); // returns a pseudo-random integer between 0 and RAND_MAX
    BST * root = createTree();
    for (int i = 0; i < atoi(argv[1]); i++){
        r = rand();
        insertNode(root, createNode(r));
    }
    printf("%d\n", treeHeight(root));
    // printInOrder(root);
    deleteTree(root);
}