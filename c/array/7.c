#include <stdio.h>
int main(){
    int arr[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero: ");
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<4;i++){
        printf("\nLinha %d ---> \n",i);
        for(j=0;j<4;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    
}
