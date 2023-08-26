#include <stdio.h>
int soma(int,int);

int main(){
    int n1,n2,result;
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    result = soma(n1,n2);
    printf("Soma dos numeros: %d\n",result);
}

int soma(int n1,int n2){
    int result = n1 + n2;
    return result;
}
