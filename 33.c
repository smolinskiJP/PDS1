#include <stdio.h>
#define SUCESSO 0

void numeroNotas(int total){
	printf("100: %d\n", total/100);
	total -= (total/100) * 100;
	printf("50: %d\n", total/50);
	total -= (total/50) * 50;
	printf("20: %d\n", total/20);
	total -= (total/20) * 20;
	printf("10: %d\n", total/10);
	total -= (total/10) * 10;
	printf("5: %d\n", total/5);
	total -= (total/5) * 5;
	printf("2: %d\n", total/2);
	total -= (total/2) * 2;
	printf("1: %d\n", total);
}

int main(int argc, char** argv){
	
	int num;
	
	scanf(" %d", &num);
	numeroNotas(num);
	
	return SUCESSO;
}
