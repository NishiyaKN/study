#include <stdio.h>
#include <string.h>

int main(){
    struct Aluno{
        int cod;
        char nome[20];
        int idade;
    };

    struct Aluno cc[3];
    int i;

    cc[0].cod = 10;
    strcpy(cc[0].nome,"Giovani");
    cc[0].idade = 18;

    cc[1].cod = 20;
    strcpy(cc[1].nome,"Gustavo");
    cc[1].idade = 19;

    cc[2].cod = 30;
    strcpy(cc[2].nome,"Murilo");
    cc[2].idade = 19;

    for(i=0;i<3;i++){
        printf("Aluno %d\nCodigo: %d\nNome: %s\nIdade: %d\n\n",i+1,cc[i].cod,cc[i].nome,cc[i].idade);
    };
};
