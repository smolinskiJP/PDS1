#include <stdio.h>
#define SUCESSO 0

int main(int argc, char** argv){
	
	int num, multi2 = 0, multi3 = 0, multi5 = 0, multiTodos = 0;
	
	scanf(" %d", &num);
	
	for(int i = 1; i <= num; i++){
		if(i % 2 == 0) multi2++;
		if(i % 3 == 0) multi3++;
		if(i % 5 == 0) multi5++;
		if((i % 2 ==0) && (i % 3 == 0) && (i % 5 == 0)) multiTodos++;
	}
	
	printf("Múltiplos de 2: %d\n", multi2);
	printf("Múltiplos de 3: %d\n", multi3);
	printf("Múltiplos de 5: %d\n", multi5);
	printf("Múltiplos de todos: %d\n", multiTodos);
	
	return SUCESSO;
}
