#include <stdio.h>
#define SUCESSO 0

int ehDivisivel(int divisor, int dividendo){
	return (dividendo % divisor == 0);
}

int main(int argc, char** argv){
	
	int x, y, z;
	
	scanf(" %d", &x);
	scanf(" %d", &y);
	scanf(" %d", &z);
	
	if(ehDivisivel(y, x) && ehDivisivel(z, x)) printf("O número é divisível");
	else printf("O número não é divisível");
	
	return SUCESSO;
}
