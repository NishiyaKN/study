#include <stdio.h>
int fatorial(int n);
int main(){
    int n;
    scanf("%i",&n);
    printf("%i",fatorial(n));
}
int fatorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }
}
