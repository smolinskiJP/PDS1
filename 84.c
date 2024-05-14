#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define TAM_MAX 10
#define NUM_NOTAS 3
#define NOME_TAM (50 + 1)

typedef struct aluno_t{
    char nome[NOME_TAM];
    char sobrenome[NOME_TAM];
    int matricula;
    float notas[NUM_NOTAS];
} Aluno;

float totalNota(float * notas){
    float total = 0;
    for(int i = 0; i < NUM_NOTAS; i++) total+= notas[i];
    return total;
}

int achaXara(int melhor, Aluno * turma){
    for(int i = 0; i < TAM_MAX; i++) if(!strcmp(turma[i].nome, turma[melhor].nome) && i != melhor) return i;
    return -1;
}

int melhorAluno(Aluno * turma){
    int melhorNota = 0;
    for(int i = 0; i < TAM_MAX; i++) if(totalNota(turma[i].notas) > totalNota(turma[melhorNota].notas)) melhorNota = i;
    return melhorNota;
}

int piorAluno(Aluno * turma){
    int piorNota = 0;
    for(int i = 0; i < TAM_MAX; i++) if(totalNota(turma[i].notas) < totalNota(turma[piorNota].notas)) piorNota = i;
    return piorNota;
}

int passouTudo(Aluno aluno){
    if(aluno.notas[0] < 60 || aluno.notas[1] < 60 || aluno.notas[2] < 60) return 0;
    return 1;
}

int main(int argc, char ** argv){

    Aluno turma[TAM_MAX];
    int melhorAlunoIndice, piorAlunoIndice, xaraIndice, condicao;
    float mediaNotaMaior = 0;

    for(int i = 0; i < TAM_MAX; i++){
        scanf(" %s %s %d %f %f %f", turma[i].nome, turma[i].sobrenome, &turma[i].matricula, &turma[i].notas[0], &turma[i].notas[1], &turma[i].notas[2]);
    }

    melhorAlunoIndice = melhorAluno(turma);

    for(int i = 0; i < NUM_NOTAS; i++){
        mediaNotaMaior += turma[melhorAlunoIndice].notas[i];
    }
    mediaNotaMaior /= 3;

    printf("Melhor Aluno: %s %s\n"
        "Matrícula: %d\n"
        "Média: %.2f\n", 
        turma[melhorAlunoIndice].nome, 
        turma[melhorAlunoIndice].sobrenome, 
        turma[melhorAlunoIndice].matricula, 
        mediaNotaMaior
    );

    piorAlunoIndice = piorAluno(turma);
    xaraIndice = achaXara(melhorAlunoIndice, turma);
    
    if(xaraIndice < 0) condicao = 0;
    else if(passouTudo(turma[xaraIndice])) condicao = 1;
    else condicao = 2;

    if(piorAlunoIndice == xaraIndice) condicao = 3;

    if(condicao == 0) printf("Situação: O melhor aluno não tem xará");
    else if(condicao == 1) printf("Situação: O melhor aluno é amigo do seu xará");
    else if(condicao == 2) printf("Situação: O melhor aluno evita seu xará");
    else printf("Situação: O melhor aluno quer mudar de nome");



    return SUCESSO;
}
