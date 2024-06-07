#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SUCESSO 0

int main(int argc, char ** argv){
    
    FILE * inFile = stdin, *outFile = stdout;
    if (inFile == NULL || outFile == NULL) exit(1);

	char caractere;
	while(fscanf(inFile, " %c\n", &caractere) != EOF){
        //caractere = fgetc(inFile);
        if(isalpha(caractere)) 
            fprintf(outFile, "%c", tolower(caractere));
    }
	return SUCESSO;
}