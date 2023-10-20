#include <stdio.h>
typedef struct{
    char nome[50];
    int matricula;
    int idade;

} Aluno;
void imprimeAluno(Aluno a);
int main(){
    Aluno a[5];
    int i;
    for(i=0;i<5;i++){
        fgets(a[i].nome,50,stdin);
        scanf("%d",&a[i].matricula);
        scanf("%d",&a[i].idade);
        getchar();
        imprimeAluno(a[i]);
    }
}
void imprimeAluno(Aluno a){
    printf("O aluno %s de matricula %d tem %d anos\n",a.nome,a.matricula,a.idade);
}
