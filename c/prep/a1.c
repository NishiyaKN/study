#include <stdio.h>
int main(){
    int i, arr[5];
    for(i=0;i<5;i++){
        printf("Digite mais %d numeros: ",5-i);
        scanf("%d",&arr[i]);
    }
    printf("--------------\n");
    for(i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}
