#include <stdio.h>
#include <stdio.h>
int main(){
    int i, arr[5], acima = 0, soma = 0;
    double media;
    for(i=0;i<5;i++){
        printf("digite mais %d numeros", 5 - i);
        scanf("%d",&arr[i]);
        soma = soma + arr[i];
    }
    media = soma / 5;
    for(i=0;i<5;i++){
        if(arr[i]>media){
            acima++;
        }
    }
    printf("%lf",media);
    printf("quantidade de numeros acima da media: %d",acima);
}
