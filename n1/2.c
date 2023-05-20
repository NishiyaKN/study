#include <stdio.h>
int main() {
    int num,pares = 0,i;
    double soma;
    for (i=1;i<=10;i++){
        scanf("%d",&num);
        if(num % 2 == 0){
            soma += num;
            pares++;
        }
    }
    printf("media dos pares: %lf",soma / pares);
}
