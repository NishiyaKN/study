#include <stdio.h>

struct aluno{
    char nome[30];
    double nota;
};

int main(){
    int i;
    struct aluno a[3];
    for(i=0;i<3;i++){
        printf("\nDigite o nome do aluno %d: ",i+1);
        fgets(a[i].nome,30,stdin);
        printf("Digite a nota aluno %d: ",i+1);
        scanf("%lf",&a[i].nota);
        getchar();
    }

    for(i=0;i<3;i++){
        printf("\nAluno %d:\nNome: %sNota: %.2lf\n",i+1,a[i].nome,a[i].nota);
    }
}
