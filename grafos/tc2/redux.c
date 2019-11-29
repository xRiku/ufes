#include <stdio.h>
#include <stdlib.h>

#define inf 9999999

void preenche_matriz(int **matriz, int u, int v, int c){
    matriz[u-1][v-1] = c;
    matriz[v-1][u-1] = c;
    // matriz[u][v] = c;
    // matriz[v][u] = c;
}

void imprime_matriz(int **matriz, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%2d ", matriz[i][j]);
        }
        putchar('\n');
    }
}

int print_MST(int *pai, int **matriz, int N)  
{  
    int custoMin = 0;  
    for (int i = 1; i< N; i++) { 
		custoMin += matriz[i][pai[i]];
    }
	printf("%d\n" , custoMin);
} 

int chave_min(int* chave, int *visitado, int N)  
{ 
    int min = inf;
    int min_index;

    for (int i = 0; i < N; i++) { 
        if (visitado[i] == 0 && chave[i] < min) { 
        	// vertex should not be visited
            min = chave[i];
			min_index = i;  
        }
    }    
    return min_index;  
}  


int prim(int **matriz, int N){
    int peso = 0;
    int *pai = malloc(sizeof(int) * N);
    int *chave = malloc(sizeof(int) * N);
    int *visitado = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++){
        chave[i] = inf;
        visitado[i] = 0;
        pai[i] = -1;
    }

    chave[0] = 0;
    pai[0] = -1;

    for (int i = 0; i < N; i++){
        int k = chave_min(chave, visitado, N);

        visitado[k] = 1;
        for (int j = 0; j < N; j++){
            if (matriz[k][j] != 0 && visitado[j] == 0 && matriz[k][j] < chave[j]){
                pai[j] = k;
                chave[j] = matriz[k][j];
                peso = matriz[k][j];
            }
        }
    }
    print_MST(pai, matriz, N);
}


int main(){
    int N, M, u, v, c;
    scanf("%d %d", &N, &M);
    int **matriz = malloc(sizeof(int*)*N);
    for (int i = 0; i < N; i++){
        matriz[i] = malloc(sizeof(int)*N);
        for (int j = 0; j < N; j++){
            matriz[i][j] = 0;
        }
    }
    // imprime_matriz(matriz, N);
    for (int i = 0; i < M; i++){
        scanf("%d %d %d", &u, &v, &c);
        preenche_matriz(matriz, u, v, c);
    }
    // imprime_matriz(matriz, N);
    // printf("Matriz preenchida.\n");
    prim(matriz, N);
}