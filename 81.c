#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define TAM_MAX 4
#define NOME_TAM (50 + 1)
#define TAM_OPERACAO (10 + 1)

typedef struct pessoa_t{
    char nome[NOME_TAM];
    int idade;
    float salario;
} Pessoa;

int stringToOp(char * string){
    if(!strcmp(string, "inserir")) return 0;
    if(!strcmp(string, "mostrar")) return 1;
    return -1;
}

int indexNome(char * nome, Pessoa * funcionarios, int tam){
    for (int i = 0; i < tam + 1; i++) if(!strcmp(nome, funcionarios[i].nome)) return i;
    return -1;
}

int main(int argc, char ** argv){

    Pessoa func[TAM_MAX], temp;
    char opStr[TAM_OPERACAO], nomeMostrar[NOME_TAM];;
    int opInt, index = 0, indexFunc;

    while (scanf(" %s", opStr) != EOF){
        opInt = stringToOp(opStr);
        if(opInt == 0){
            scanf(" %s %d %f", temp.nome, &temp.idade, &temp.salario);
            if(index == TAM_MAX) printf("Espaco Insuficiente\n");
            else{
                func[index] = temp;
                printf("Registro %s %d %.2f inserido\n", func[index].nome, func[index].idade, func[index].salario);
                index++;
            }
        } else if(opInt == 1){
            scanf(" %s", nomeMostrar);
            indexFunc = indexNome(nomeMostrar, func, index);
            if(indexFunc >= 0) printf("Registro %s %d %.2f\n", func[indexFunc].nome, func[indexFunc].idade, func[indexFunc].salario);
            else printf("Registro Ausente\n");
        }
    }

    return SUCESSO;
}
