#include <stdio.h>
int func(int,int);

int main(){
    int n1,n2,maior;
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    maior = func(n1,n2);
    printf("O maior numero eh: %d\n",maior);
}

int func(int n1, int n2){
    if(n1<n2){
        return n2;
    }
    else{
        return n1;
    }
}
