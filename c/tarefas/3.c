#include <stdio.h>

struct aluno{
    char nome[30];
    double nota;
};

double media(struct aluno a[]);

int main(){
    struct aluno a[3];
    int i;
    for(i=0;i<3;i++){
        printf("\nDigite o nome do aluno %d: ",i+1);
        fgets(a[i].nome,30,stdin);
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%lf",&a[i].nota);
        getchar();
    }
    printf("Media dos alunos: %.2lf\n",media(a));
}

double media(struct aluno a[]){
    int i;
    double soma = 0,media;
    for(i=0;i<3;i++){
        soma = soma + a[i].nota;
    }
    media = soma / 3;
    return media;
}
