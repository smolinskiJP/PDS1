#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0
#define TAM_NOME 100 + 1

typedef enum Meses_e{
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
} Meses;

typedef struct Data_t{
    int dia;
    Meses mes;
    int ano;
} Data;

typedef struct Evento_t{
    Data data;
    char nome[TAM_NOME];
    char local[TAM_NOME];
} Evento;

void cadastrar_eventos(Evento * eventos, int n){
    for(int i = 0; i < n; i++){
        scanf(" %s %s %d %d %d", eventos[i].nome, eventos[i].local, &eventos[i].data.dia, &eventos[i].data.mes, &eventos[i].data.ano);
    }
}

int mesmaData(Evento e, Data d){
    if(e.data.ano != d.ano) return 0;
    if(e.data.mes != d.mes) return 0;
    if(e.data.dia != d.dia) return 0;
    return 1;
}

void imprimir_eventos(Evento * eventos, Data d, int n){
    int numE = 0;
    for(int i = 0; i < n; i++){
        if(mesmaData(eventos[i], d)){
            numE++;
            printf("%s %s\n", eventos[i].nome, eventos[i].local);
        }
    }
    if(!numE) printf("Nenhum evento encontrado!");
}

int main(int argc, char ** argv){

    Evento *eventos;
    int n;
    Data data;

    scanf(" %d", &n);
    eventos = (Evento*)malloc(n * sizeof(Evento));
    cadastrar_eventos(eventos, n);
    scanf(" %d %d %d", &data.dia, &data.mes, &data.ano);
    imprimir_eventos(eventos, data, n);

    free(eventos);
    return SUCESSO;
}
