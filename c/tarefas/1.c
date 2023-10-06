#include <stdio.h>

double calcula(double notas[]);

int main(){
    double notas[3];
    int i;
    for(i = 0;i < 3;i++){
        printf("Digite a nota %d: ",i+1);
        scanf("%lf",&notas[i]);
    }
    printf("Media: %.2lf\n",calcula(notas));
}

double calcula(double notas[]){
    double soma,media;
    int i;
    for(i = 0; i < 3; i++){
        soma = soma + notas[i];
    }
    media = soma / 3;
    return media;
}
