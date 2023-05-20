#include <stdio.h>
int main(){
    int n1,n2,maior;
    printf("Digite o primeiro numero ");
    scanf("%d",&n1);

    printf("Digite o segundo numero ");
    scanf("%d",&n2);
    
    if (n1 == n2){
        printf("Os valores sao iguais\n");
        return 1;
    }
    if (n1 < n2){
        maior = n2;
    }
    else{
        maior = n1;
    }
    printf("O maior numero e: %d\n",maior);
}
