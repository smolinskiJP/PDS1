#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUCESSO 0

int ehPrimo(int p){
    for(int i = 2; i < p/2; i++){
        if(p % i == 0) return 0;
    }
    return 1;
}

void primo(int m, int * p1, int *p2){
    int ant;
    *p1 = *p2 = m;

    int i = 2;
    while(*p1 == m){
        if(ehPrimo(i)){
            if(i >= m) {
                *p1 = ant;
            }
            else ant = i;
        }
        i++;
    }
    i = m;
    while(*p2 == m){
        if(ehPrimo(i)){
            *p2 = i;
        }
        i++;
    }
}

int main(int argc, char ** argv){

    int m, p1, p2;

    scanf(" %d", &m);
    if(m < 3) exit(1);

    primo(m, &p1, &p2);
    printf("%d\n%d", p1, p2);

    return SUCESSO;
}
