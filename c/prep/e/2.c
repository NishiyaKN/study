#include <stdio.h>
typedef struct{
    char nome[50];
    double nota;
} Aluno;

int main(){
    Aluno a[3];
    int i;
    for(i=0;i<3;i++){
        fgets(a[i].nome,50,stdin);
        scanf("%lf",&a[i].nota);
        getchar();
    }
    for(i=0;i<3;i++){
        printf("Nome: %s \nNota: %lf\n",a[i].nome, a[i].nota);
    }
}
