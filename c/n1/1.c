#include <stdio.h>
int main(){
    int num, i;
    double soma;
    for (i=1;i<=10;i++){
        scanf("%d",&num);
        soma += num;
    }
        printf("Media: %lf",soma / 10);
}
