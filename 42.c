#include <stdio.h>
#define SUCESSO 0

int main(int argc, char** argv){
	int num, soma = 0;
	scanf(" %d", &num);
	
	for(int i = 0; i <= num; i++){
		soma += i;
	}
	
	printf("%d\n", soma);
	
	return SUCESSO;
}
