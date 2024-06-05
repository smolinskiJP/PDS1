#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0

void leVetor(int * vet, int n){
    for(int i = 0; i < n; i++){
        scanf(" %d", &vet[i]);
    }
}

int main(int argc, char ** argv){

    int * vet, n;

    scanf(" %d", &n);
    vet = (int*)malloc(n * sizeof(int));
    leVetor(vet, n);
    for(int i = 0; i < n; i++){
        printf("%d\n", vet[i]);
    }

    free(vet);
    return SUCESSO;
}
