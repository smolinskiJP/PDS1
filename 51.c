#include <stdio.h>
#define SUCESSO 0
#define TAM 1000

int main(int argc, char **argv)
{
	int aeds[TAM], calculo[TAM], numAeds, numCalc;
	
	scanf(" %d", &numAeds);
	if(numAeds >= TAM) printf("Muitos alunos, digite a matrícula de até %d alunos", TAM-1);
	else for(int i = 0; i < numAeds; i++){
		scanf(" %d", &aeds[i]);
	}
	
	scanf(" %d", &numCalc);
	if(numCalc >= TAM) printf("Muitos alunos, digite a matrícula de até %d alunos", TAM-1);
	else for(int i = 0; i < numCalc; i++){
		scanf(" %d", &calculo[i]);
	}
	
	for(int i = 0; i < numAeds; i++){
		for(int j = 0; j < numCalc; j++){
			if(aeds[i] == calculo[j]) printf("%d\n", aeds[i]);
		}
	}
	
	return SUCESSO;
}
