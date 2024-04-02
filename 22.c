#include <stdio.h>
#define SUCESSO 0

int main(int argc, char** argv){
	
	int num;
	scanf(" %d", &num);
	printf("%d\n", num << 1);
	printf("%d", num >> 1);
	
	return SUCESSO;
}
