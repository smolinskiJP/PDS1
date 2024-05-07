#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define FALSE 0
#define TRUE 1
#define MAX_STRING (50 + 1)

int countString(char * str, char alvo){
	int count = 0;
	for(int i = 0; i < strlen(str); i++) if(str[i] == alvo) count++;
	return count;
}

int main(int argc, char ** argv){
	char str[MAX_STRING], alvo;
	
	fgets(str, MAX_STRING, stdin);
	scanf(" %c", &alvo);
	
	str[strlen(str) - 1] = '\0';
	
	printf("%d", countString(str, alvo));

    return SUCESSO;
}
