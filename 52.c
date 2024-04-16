#include <stdio.h>
#define SUCESSO 0
#define TAM 1000

int main(int argc, char **argv)
{
	int matriz[TAM][TAM], tamL, tamC, max;
	
	scanf(" %d", &tamL);
	scanf(" %d", &tamC);
	for(int i = 0; i < tamL; i++){
		for(int j = 0; j < tamC; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	
	max = matriz[0][0];
	
	for(int i = 0; i < tamL; i++){
		for(int j = 0; j < tamC; j++){
			if(matriz[i][j] > max) max = matriz[i][j];
		}
	}
	
	printf("%d", max);
	
	return SUCESSO;
}

