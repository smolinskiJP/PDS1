#include <stdio.h>
#define SUCESSO 0
#define PI 3.14

int main (){
	float raio, area;
	scanf(" %f", &raio);
	raio /= 2.0;
	area = raio*raio*PI;
	printf("%.2f\n", area);
	printf("%.2f\n", area/8.0);
	return SUCESSO;
}
