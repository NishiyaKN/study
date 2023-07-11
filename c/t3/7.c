#include <stdio.h>
int main(){
    int i,arr[6];
    printf("Digite 6 numeros\n");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    printf("Ordem reversa dos 6 numeros:\n");
    for(i=5;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}
