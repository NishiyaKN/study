#include <stdio.h>
int main(){
    int arr[2][3],i,j,soma=0;

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

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            soma += arr[i][j];
        }
    }
    printf("\n\nA soma dos valores eh: %d\n",soma);
}
