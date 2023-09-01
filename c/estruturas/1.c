#include <stdio.h>
#include <string.h>

int main(){
    struct aluno{
        int cod;
        char nome[50];
    };

    struct aluno aluno1;
    struct aluno aluno2;
    struct aluno Test;

    aluno1.cod = 1;
    strcpy(aluno1.nome,"Enrico");

    aluno2.cod = 2;
    strcpy(aluno2.nome,"Glenda");

    fgets(Test.nome,50,stdin);
    scanf("%d",&Test.cod);

    printf("Aluno %d: %s\n",aluno1.cod,aluno1.nome);
    printf("Aluno %d: %s\n",aluno2.cod,aluno2.nome);
    printf("Aluno %d: %s\n",Test.cod,Test.nome);
};

