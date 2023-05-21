#include <stdio.h>
int main(){
    int i,arr[10],j,repete;
    printf("Digite 10 numeros\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Numeros que se repetem:\n");
    for(i=0;i<10;i++){
        repete=0;
        for(j=0;j<10;j++){
            if(arr[i] == arr[j] && i != j){
                repete = 1;
            }
            if(repete){
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
}
