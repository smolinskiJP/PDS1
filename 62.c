#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0
#define TAMANHO 801

int main (int argc, char **argv){
	
	int vetor[TAMANHO], n;
	
	vetor[0] = 0;
	vetor[1] = 1;
	
	for(int i = 2; i < TAMANHO; i++){
		vetor[i] = vetor[i - 1] + vetor[i - 2];
	}
	
	scanf(" %d", &n);
	while (n >= 0) {
		printf("%d\n", vetor[n]);
		scanf(" %d", &n);
	}
	
	
	return SUCESSO;
}
