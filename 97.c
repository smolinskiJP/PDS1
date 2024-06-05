#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0

void leVetor(int * vet, int n){
    for(int i = 0; i < n; i++){
        scanf(" %d", &vet[i]);
    }
}

void somaVetor(int * vet1, int * vet2, int * resultado, int n){
    for(int i = 0; i < n; i++){
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main(int argc, char ** argv){

    int *vet1, *vet2, *resultado, n;

    scanf(" %d", &n);

    vet1 = (int*)malloc(n * sizeof(int));
    vet2 = (int*)malloc(n * sizeof(int));
    resultado = (int*)malloc(n * sizeof(int));
    
    leVetor(vet1, n);
    leVetor(vet2, n);
    
    somaVetor(vet1, vet2, resultado, n);
    for(int i = 0; i < n; i++){
        printf("%d\n", resultado[i]);
    }

    free(vet1);
    free(vet2);
    free(resultado);
    return SUCESSO;
}
