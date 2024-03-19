#include <stdio.h>
#define SUCESSO 0
#define TAM 10

int main(int argc, char **argv)
{
	int vetorE[TAM], vetorS[TAM];
	for(int i = 0; i < TAM; i++){
		scanf(" %d", &vetorE[i]);
		vetorS[TAM-(i+1)] = vetorE[i];
	}
	printf("\n");
	for(int i = 0; i < TAM; i++){
		printf("%d\n", vetorS[i]);
	}
	return SUCESSO;
}
