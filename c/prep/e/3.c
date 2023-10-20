#include <stdio.h>
int fibonacci(int n);
int main(){
    int n;
    scanf("%d",&n);
    int res = fibonacci(n);
    printf("%d",res);
}
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
