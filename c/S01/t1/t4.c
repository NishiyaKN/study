#include <stdio.h>
int main(){
    char nome[40];
    double n1,n2,n3,final;

    printf("Digite o nome do aluno\n");
    scanf("%[^\n]s",nome);

    printf("Digite a primeira nota do aluno\n");
    scanf("%lf",&n1);

    printf("Digite a segunda nota do aluno\n");
    scanf("%lf",&n2);

    printf("Digite a terceira nota do aluno\n");
    scanf("%lf",&n3);

    final = ((n1 * 2) + (n2 * 4) + (n3 * 6))/12;

    printf("Nome: %s\n",nome);
    printf("Nota final: %.2lf\n",final);
}
