#include "josephus.h"

int main(int argc, char **argv){
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);
    printf("%d %d\n", N, M);
    List *l = createList();
    if (l->head == NULL){
        printf("Pelo menos isso\n");
    }
}