#include <stdio.h>
double calcMedia(double notas[]);
int main(){
    double notas[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%lf",&notas[i]);
    }
    double media = calcMedia(notas);
    printf("%lf",media);
}
double calcMedia(double notas[]){
    double soma = 0;
    int i;
    for(i=0;i<3;i++){
        soma += notas[i];
    }
    double media = soma / 3.0;
    return media;
}
