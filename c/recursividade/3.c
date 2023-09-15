#include <stdio.h>
int fibonacci(int);
int main(){
    int n=40;
    printf("Fibonacci de %d = %d",n ,fibonacci(n));
}

int fibonacci(int n){
    printf("\nFuncao fibonacci chamada para n = %d",n);
    if(n<=1){
        return n;
    }
    else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

