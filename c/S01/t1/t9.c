#include <stdio.h>
int main(){
    int n1,n2,menor;

    printf("Digite o primeiro numero\n");
    scanf("%d",&n1);

    printf("Digite o segundo numero\n");
    scanf("%d",&n2);

    if(n1 < n2){
        menor = n1;
        printf("O menor numero e: %d\n", menor);
        return 0;
    }

    menor = n2;
    printf("O menor numero e: %d\n", menor);
    return 0;
}
