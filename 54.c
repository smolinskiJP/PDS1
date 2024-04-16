#include <stdio.h>
#define SUCESSO 0
#define TAM 10

int main(int argc, char **argv)
{
	int vetor[TAM], rotev[TAM];
	
	for(int i = 0; i < TAM; i++){
		scanf(" %d", &vetor[i]);
	}
	
	for(int i = 0; i < TAM; i++){
		rotev[TAM-(i + 1)] = vetor[i];
	}

	for(int i = 0; i < TAM; i++){
		printf("%d\n", rotev[i]);
	}

	return SUCESSO;
}

