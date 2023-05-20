#include <stdio.h>
int main(){
    char nome[40];
    double n1,n2,n3,media;

    printf("Digite o nome do aluno\n");
    scanf("%[^\n]s",nome);

    printf("Digite a primeira nota\n");
    scanf("%lf",&n1);

    printf("Digite a segunda nota\n");
    scanf("%lf",&n2);

    printf("Digite a terceira nota\n");
    scanf("%lf",&n3);

    media = (n1 + n2 + n3) / 3;

    printf("Nome do aluno: %s\n",nome);
    printf("Media aritmetica: %.2lf\n",media);
}
