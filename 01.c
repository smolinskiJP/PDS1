#include <stdio.h>
#define SUCESSO 0

int main(int argc, char **argv)
{
	float total = 500.0;
	//rendimento mes 1
	total *= 1.01;
	//movimentacao mes 1
	//rendimento mes 2
	total*=1.01;
	//movimentacao mes 2
	total+=200.0;
	//rendimento mes 3
	total*=1.01;
	//movimentacao mes 3
	total+= -50;
	//rendimento mes 4
	total*= 1.01;
	
	printf("Total: %.2f\n", total);
	
	return SUCESSO;
}
