#include <stdio.h>

int main(){
    int arr[2][3],i,j,soma=0,soma1=0,soma2=0;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("Digite um numero: ");
        scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<2;i++){
        printf("\n\nLinha %d \n",i);
        for(j=0;j<3;j++){
        printf("%d\t",arr[i][j]);
        }
    }

    for(j=0;j<3;j++){
        soma1+=arr[0][j];
    }
    printf("\n\nSoma da linha 0: %d",soma1);

    for(j=0;j<3;j++){
        soma2+=arr[1][j];
    }
    printf("\nSoma da linha 1: %d",soma2);

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            soma += arr[i][j];
        }
    }
    printf("\n\nA soma total: %d\n",soma);
}

