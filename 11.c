#include <stdio.h>
#define SUCESSO 0

int main (){

  float tempC, tempF;
  scanf(" %f", &tempC);
  tempF = 1.8*tempC + 32;
  printf("%.0f\n", tempF);
  return SUCESSO;
}
