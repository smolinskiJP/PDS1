#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define TAM_MAX 8
#define NOME_TAM (50 + 1)

typedef struct produto_t{
    char nome[NOME_TAM];
    char marca[NOME_TAM];
    float preco;
} Produto;

typedef struct marca_t{
    char nome[NOME_TAM];
    int quantidade;
    float precoTotal;
} Marca;

float mediaTotal(Marca * marcas, int tam){
    float precoTotal = 0;
    int quantidadeTotal = 0;
    for(int i = 0; i < tam; i++){
        precoTotal += marcas[i].precoTotal;
        quantidadeTotal += marcas[i].quantidade;
    }

    return precoTotal/quantidadeTotal;
}

int main(int argc, char ** argv){
    Produto produtos[TAM_MAX];
    Marca quantidadeMarca[TAM_MAX];
    int marcaTam = 0;

    for(int i = 0; i < TAM_MAX; i++){
        scanf(" %s %s %f", produtos[i].nome, produtos[i].marca, &produtos[i].preco);
    }

    for(int i = 0; i < TAM_MAX; i++){
        int existe = 0;
        for(int j = 0; j < marcaTam; j++){
            if(!strcmp(produtos[i].marca, quantidadeMarca[j].nome)){
                quantidadeMarca[j].quantidade++;
                quantidadeMarca[j].precoTotal += produtos[i].preco;
                existe = 1;
            }
        }
        if(!existe){
            strcpy(quantidadeMarca[marcaTam].nome, produtos[i].marca);
            quantidadeMarca[marcaTam].quantidade = 1;
            quantidadeMarca[marcaTam].precoTotal = produtos[i].preco;
            marcaTam++;
        }
    }

    for(int i = 0; i < marcaTam; i++){
        printf("%s %d\n", quantidadeMarca[i].nome, quantidadeMarca[i].quantidade);
    }
    
    printf("media total %.2f\n", mediaTotal(quantidadeMarca, marcaTam));

    for(int i = 0; i < marcaTam; i++){
        printf("media %s %.2f\n", quantidadeMarca[i].nome, quantidadeMarca[i].precoTotal/quantidadeMarca[i].quantidade);
    }

    return SUCESSO;
}
