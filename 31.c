#include <stdio.h>
#define SUCESSO 0

int maior(int a, int b, int c){
	if((a > b) && (a > c)) return a;
	else if ((b > c)) return b;
	else return c;
}


int main(int argc, char** argv){
	
	int a, b, c;
	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);
	
	printf("%d", maior(a, b, c));
	
	return SUCESSO;
}
