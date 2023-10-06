#include <stdio.h>
int fibonacci(int n);

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    printf("Resultado: %d\n",fibonacci(n));
}

int fibonacci(int n){
    if(n > 0){
        n = n * fibonacci(n - 1);
        return n;
    }
        return 1;
}

