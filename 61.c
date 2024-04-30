#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0
#define TAMANHO 10000

int main (int argc, char **argv){
	
	int vetor[TAMANHO], entrada, saida;
	scanf(" %d", &entrada);
	scanf(" %d", &saida);
	
	for(int i = 2; i < saida; i++) vetor[i] = 1;
	
	for(int i = 2; i < saida; i++) if(vetor[i] == 1) for(int j = 2 * i; j < saida; j += i) vetor[j] = 0;
	
	for(int i = entrada; i < saida; i++) if(vetor[i]) printf("%d\n", i);
	
	return SUCESSO;
}

