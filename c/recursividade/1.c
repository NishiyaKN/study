#include <stdio.h>
int fatorial(int n);

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("O fatorial de %d e %d\n",num,fatorial(num));
}

int fatorial(int n){
    printf("\nFunção Fatorial executada para n = %d", n);
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}
