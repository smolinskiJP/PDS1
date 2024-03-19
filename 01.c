#include <stdio.h>
#define SUCESSO 0

int main(int argc, char **argv)
{
	float total = 500.0;
	total *= 1.01;
	total+=200.0;
	total*=1.01;
	total+= -50;
	total*=1.01;
	
	printf("Total: %.2f\n", total);
	
	return SUCESSO;
}
