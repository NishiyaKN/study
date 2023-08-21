#include <stdio.h>
int main(){

    int nota[5],soma = 0,acima = 0,i;
    double media;
    for(i=0;i<5;i++){
        printf("Digite a nota de mais %d aluno(s)\n",5-i);
        scanf("%d",&nota[i]);
    }
    for(i=0;i<5;i++){
        soma += nota[i];
    }
    media = soma / 5.0;

    for(i=0;i<5;i++){
        if(nota[i] > media){
            acima++;
        }
    }

    printf("A media e: %.2f\n",media);
    printf("Alunos acima da media: %d\n",acima);
    printf("Nota dos alunos\n");
    for(i=0;i<5;i++){
        printf("Aluno %d: %d\n",i+1,nota[i]);
    }
}
