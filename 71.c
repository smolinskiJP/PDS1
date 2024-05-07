#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define MAX_STRING (50 + 1)

int main(int argc, char ** argv){
	char string1[MAX_STRING], string2[MAX_STRING];
	
	fgets(string1, MAX_STRING, stdin);
	for(int i = 0; string1[i] != '\0'; i++) if (string1[i] == '\n') string1[i] = '\0'; //tira o \n do final
	fgets(string2, MAX_STRING, stdin);
	
	strcat(string1, string2);
	printf("%s", string1);

    return SUCESSO;
}
