#include <stdio.h>

struct aluno{
    char nome[30];
    double nota;
};

double media(double *notas);

int main(){
    struct aluno a[3];
    int i;
    double *notas;
    notas = &a[0].nota;
    for(i=0;i<3;i++){
        printf("Digite o nome do aluno %d: ",i+1);
        fgets(a[i].nome ,30,stdin);
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%lf",notas + i);
        getchar();
    }
    printf("Media dos alunos: %.2lf\n",media(notas));
}

double media(double *notas){
    int i;
    double soma = 0,media;
    for(i=0;i<3;i++){
        soma += *(notas +i);
    }
    media = soma / 3;
    return media;
}

