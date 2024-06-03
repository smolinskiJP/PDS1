#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUCESSO 0

void media(double * vet, int n, int *i){
    double total = 0, dist;
    for(int j = 0; j < n; j++){
        total += vet[j];
    }
    total /= n;

    *i = 0;
    dist = fabs(total - vet[*i]);

    for(int j = 0; j < n; j++) {
        double diferenca = fabs(total - vet[j]);
        if(diferenca < dist){
            *i = j;
            dist = fabs(total - vet[*i]);
        }
    }
}

int main(int argc, char ** argv){

    double * vet;
    int n, i;

    scanf(" %d", &n);
    vet = (double*)malloc(n * sizeof(double));
    for(int j = 0; j < n; j++){
        scanf(" %lf", &vet[j]);
    }

    media(vet, n, &i);

    printf("%d", i);

    free(vet);

    return SUCESSO;
}
