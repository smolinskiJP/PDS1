#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0

void imprime(int * vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void multiplica(int * vetor, int n, double v){
    for(int i = 0; i < n; i++){
        vetor[i] *= v;
    }
}

int main(int argc, char ** argv){

    int *vet, n;
    double v;

    scanf(" %d", &n);
    vet = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf(" %d", &vet[i]);
    }
    scanf(" %lf", &v);

    imprime(vet, n);
    multiplica(vet, n, v);
    imprime(vet, n);
    multiplica(vet, n, 1/v);
    imprime(vet, n);

    free(vet);
    return SUCESSO;
}
