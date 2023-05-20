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
        for(j=i+1;j<10;i++){
            if(arr[i] == arr[j]){
                repete = 1;
                break;
            }
        }
        if(repete){
            int ambos = 0;
            for(i=0;i<10;i++){
                if(arr[i] == arr[j]){
                    ambos = 1;
                    break;
                }
            }
            if(ambos){
                printf("%d\n",arr[i]);
            }
        }
    }

}
