#include <stdio.h>
#include <string.h>
#define SUCESSO 0
#define TAM_MAX 5
#define NOME_TAM (50 + 1)
#define TAM_OPERACAO (10 + 1)

typedef struct pessoa_t{
    char nome[NOME_TAM];
    int idade;
    float salario;
    char rua[NOME_TAM];
    int numero;
    char estado[NOME_TAM];
} Pessoa;

int stringToOp(char * string){
    if(!strcmp(string, "inserir")) return 0;
    if(!strcmp(string, "mostrar")) return 1;
    if(!strcmp(string, "alterar")) return 2;
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
            scanf(" %s %d %f %s %d %s", temp.nome, &temp.idade, &temp.salario, temp.rua, &temp.numero, temp.estado);
            if(index == TAM_MAX) printf("Espaco insuficiente\n");
            else{
                func[index] = temp;
                printf("Registro %s %d %.2f %s %d %s inserido\n", func[index].nome, func[index].idade, func[index].salario, func[index].rua, func[index].numero, func[index].estado);
                index++;
            }
        } else if(opInt == 1){
            scanf(" %s", nomeMostrar);
            indexFunc = indexNome(nomeMostrar, func, index);
            if(indexFunc >= 0) printf("Registro %s %d %.2f %s %d %s\n", func[indexFunc].nome, func[indexFunc].idade, func[indexFunc].salario, func[indexFunc].rua, func[indexFunc].numero, func[indexFunc].estado);
            else printf("Registro ausente\n");
        } else if(opInt == 2){
            scanf(" %s %d %f %s %d %s", temp.nome, &temp.idade, &temp.salario, temp.rua, &temp.numero, temp.estado);
            indexFunc = indexNome(temp.nome, func, index);
            if(indexFunc >= 0){
                func[indexFunc] = temp;
                printf("Registro %s %d %.2f %s %d %s alterado\n", temp.nome, temp.idade, temp.salario, temp.rua, temp.numero, temp.estado);
            } else printf("Registro ausente para alteracao\n");
        }
    }

    return SUCESSO;
}
