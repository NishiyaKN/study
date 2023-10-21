#include <stdio.h>
typedef struct{
    char nome[50];
    double nota;
} Aluno;
double calcMedia(Aluno a[]);
int main(){
    Aluno a[3];
    int i;
    for(i=0;i<3;i++){
        fgets(a[i].nome,50,stdin);
        scanf("%lf",&a[i].nota);
        getchar();
    }
    double media = calcMedia(a);
    printf("Media: %lf",media);
}
double calcMedia(Aluno a[]){
    double soma = 0;
    int i;
    for(i=0;i<3;i++){
        soma += a[i].nota;
    }
    return soma/3.0;
}
