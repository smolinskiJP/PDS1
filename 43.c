#include <stdio.h>
#define SUCESSO 0
#define START 233
#define END 457

int main(int argc, char** argv){
	
	int i = START;
	
	do{
		printf("%d\n", i);
		if(i > 300 && i < 400) i += 3;
		else i += 5;
	}while(i <= END);
	
	return SUCESSO;
}
