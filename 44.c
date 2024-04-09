#include <stdio.h>
#define SUCESSO 0

int main(int argc, char** argv){
	
	int n, x0, x1;
	
	scanf(" %d", &n);
	scanf(" %d", &x0);
	scanf(" %d", &x1);
	
	printf("X0: %d\n", x0);
	printf("X1: %d\n", x1);
	
	for(int i = 2; i <= n; i++){
		printf("X%d: %d\n", i, 4*x1 - 2*x0);
		int swap = x0;
		x0 = x1;
		x1 = 4*x1 - 2*swap;
	}
}
