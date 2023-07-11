#include <stdio.h>
int main() {
    int num,i,pares = 0;
    for (i = 1; i <= 10; i++){
        scanf("%d",&num);
        if(num%2==0){
            pares++;
        }
    }
    printf("numero de pares: %d",pares);
}
