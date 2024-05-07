#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define MAX_STRING (50 + 1)

int main(int argc, char ** argv){
	char string[MAX_STRING], alvo, trocado;
	
	fgets(string, MAX_STRING, stdin);
	int tamanho = strlen(string) - 1; //ignora o \n final
	
	scanf(" %c %c", &alvo, &trocado);
	
	for(int i = 0; i < tamanho; i++){
		if(string[i] == alvo) {
			string[i] = trocado;
			break;
		}
	}
	
	printf("%s", string);

    return SUCESSO;
}
