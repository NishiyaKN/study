#include <stdio.h>
int main(){
    int arr[8],i;

    for(i=0;i<8;i++){
        printf("Digite o numero %d do array de 8 posicoes\n",i);
        scanf("%d",&arr[i]);
    }

    printf("Soma da primeira e ultima posicao do array: %d\n", arr[0]+arr[7]);
}
