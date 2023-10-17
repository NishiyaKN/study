#include <stdio.h>

double fatorial(int n);

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("O fatorial de %d eh: %.0lf",n,fatorial(n));
}

double fatorial(int n){
    if (n == 1 | n == 0){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}
