#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define MAX_STRING (50 + 1)

int main(int argc, char ** argv){
	char string[MAX_STRING], gnirts[MAX_STRING];
	
	fgets(string, MAX_STRING, stdin);
	int tamanho = strlen(string) - 1; //ignora o \n final
	gnirts[tamanho] = '\0';
	
	for(int i = 0; i < tamanho; i++){
		gnirts[i] = string[tamanho-(i + 1)];
	}
	
	printf("%s", gnirts);

    return SUCESSO;
}
