#include <stdio.h>
#define SUCESSO 0

int main(int argc, char** argv){
	
	int a, b;
	
	scanf(" %d %d", &a, &b);
	
	printf("AND: %d OR: %d XOR: %d", a&&b, a||b, a^b);
	
	return SUCESSO;
}
