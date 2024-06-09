#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUCESSO 0
#define ERRO 1
#define TAM_LINHA 500 + 1

int main(int argc, char ** argv){

    FILE * inFile = stdin, * outFile = stdout;
    char ** columns, line[TAM_LINHA];
    int numCol = 0;

    if (inFile == NULL || outFile == NULL) return ERRO; //verifica se o stdin e stdout existem

    fscanf(inFile, " %d ", &numCol); //pega a quantidade de colunas que vai ter na tabela
    columns = (char **)malloc(numCol * sizeof(char *));
    
    fgets(line, TAM_LINHA, inFile); //pega a primeira linha

    char *mask = strtok(line, " "); //pega a primeira mascara
    for (int i = 0; i < numCol; i++) { //roda para pegar todas as mascaras
        columns[i] = (char *)malloc((strlen(mask) + 1) * sizeof(char)); //aloca o tamanho da mascara na coluna
        strcpy(columns[i], mask); //copia a mascara para a coluna
        mask = strtok(NULL, " "); //atualiza com a proxima mascara
    }


    while(fgets(line, TAM_LINHA, inFile)) { //pega as linhas enquanto não houver erro
        line[strlen(line) - 1] = '\0'; //retira o \n do final
        int i = 0;
        char* cell = strtok(line,";"); //pega a primera celula
        while(cell){ //enquanto a celula nao for nula
            fprintf(outFile, columns[i++], cell); //imprime a celula e incrementa a coluna
            fprintf(outFile, "\t");
            cell = strtok(NULL, ";"); //atualiza a celula
        }
        fprintf(outFile, "\n");
    }


    //fecha os arquivos e libera a memoria alocada
    for (int i = 0; i < numCol; i++) {
        free(columns[i]);
    }
    free(columns);
    fclose(inFile);
    fclose(outFile);

    return SUCESSO;
}