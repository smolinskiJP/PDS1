#include <stdio.h>
#define SUCESSO 0
#define TAM 10

int main(int argc, char **argv)
{
	int vetor[TAM];
	for(int i = 0; i < TAM; i++){
		scanf(" %d", &vetor[i]);
	}
	printf("\n");
	for(int i = TAM-1; i >=0; i--){
		printf("%d\n", vetor[i]);
	}
	return SUCESSO;
}
