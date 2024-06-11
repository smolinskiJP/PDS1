#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SUCESSO 0
#define TAM 50
#define LINHA 5000

typedef struct palavra_t{
	char string[TAM];
	int repet;
}Palavra;

int main(int argc, char ** argv){
	FILE * inFile = fopen("in.txt","r");
	Palavra * palavras;
	char buffer[LINHA], *word;
	int tamanho = 0;
	
	if(inFile == NULL) exit(1);
	
	while(fgets(buffer, LINHA, inFile)){
		for(int i = 0; i < strlen(buffer); i++) if(buffer[i] == '\n') buffer[i] = '\0';
		for(int i = 0; i < strlen(buffer); i++){
			if(isalpha(buffer[i])) buffer[i] = tolower(buffer[i]);
			else buffer[i] = ' ';
		}
		int existe = 0;
		word = strtok(buffer, " ");
		for(int i = 0; i < tamanho; i++){
			if(!strcmp(word, palavras[i].string)){
				palavras[i].repet++;
				existe = 1;
			}
		}
		if(!existe){
			tamanho++;
			palavras = (Palavra*)realloc(palavras, sizeof(Palavra) * tamanho);
			palavras[tamanho - 1].repet = 1;
			strcpy(palavras[tamanho - 1].string, word);
		}
		while((word = strtok(NULL, " ")) != NULL){
			int existe = 0;
			for(int i = 0; i < tamanho; i++){
				if(!strcmp(word, palavras[i].string)){
					palavras[i].repet++;
					existe = 1;
				}
			}
			if(!existe){
				tamanho++;
				palavras = (Palavra*)realloc(palavras, sizeof(Palavra) * tamanho);
				palavras[tamanho - 1].repet = 1;
				strcpy(palavras[tamanho - 1].string, word);
			}
		}
	}
	
	FILE * outFile = fopen("out.txt", "w");
	for(int i = 0; i < tamanho; i++){
		fprintf(outFile, "%s \t %d\n", palavras[i].string, palavras[i].repet);
	}
	
	free(palavras);
	fclose(outFile);
	fclose(inFile);
	return SUCESSO;
}
