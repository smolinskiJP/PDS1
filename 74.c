#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define FALSE 0
#define TRUE 1
#define MAX_STRING (50 + 1)

int ehSubstring(char * str, char * sub){
	int tamStr = strlen(str), tamSub = strlen(sub);
	for(int i = 0; i < tamStr - tamSub + 1; i++){
		if(str[i] == sub[0]){
			int ehSubs = TRUE;
			for(int j = 0; j < tamSub; j++) {
				if(str[i + j] != sub[j]) {
					ehSubs = FALSE;
				}
			}
			if(ehSubs) return TRUE;
		}
	}
	
	return FALSE;
}

int main(int argc, char ** argv){
	char str[MAX_STRING], sub[MAX_STRING];
	
	fgets(str, MAX_STRING, stdin);
	fgets(sub, MAX_STRING, stdin);
	
	str[strlen(str) - 1] = '\0';
	sub[strlen(sub) - 1] = '\0';
	
	if(ehSubstring(str, sub)) printf("É substring");
	else printf("Não é substring");

    return SUCESSO;
}
