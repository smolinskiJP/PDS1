#include <stdio.h>
#define SUCESSO 0
#define TAM 1000

int main(int argc, char **argv)
{
	int matriz[TAM][TAM], tamL, tamC;
	
	scanf(" %d", &tamL);
	scanf(" %d", &tamC);
	for(int i = 0; i < tamL; i++){
		for(int j = 0; j < tamC; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	
	
	
	for(int i = 0; i < tamL; i++){
		for(int j = 0; j < tamC; j++){
			matriz[i][j] *= -1;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return SUCESSO;
}

