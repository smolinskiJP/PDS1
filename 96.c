#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0

void leMatriz(int ** matriz, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf(" %d", &matriz[i][j]);
        }
    }
}

int main(int argc, char ** argv){

    int ** matriz, n, m;

    scanf(" %d %d", &n, &m);
    matriz = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        matriz[i] = (int*)malloc(m * sizeof(int));
    }

    leMatriz(matriz, n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        free(matriz[i]);
    }
    free(matriz);
    return SUCESSO;
}
