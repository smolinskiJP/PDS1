#include <stdio.h>
#define SUCESSO 0
#define HORA_ANO 24*365

int main (){
	int horas;
	scanf(" %d", &horas);
	printf("%d\n", horas * HORA_ANO);
	return SUCESSO;
}
