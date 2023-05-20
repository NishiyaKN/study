#include <stdio.h>
int main(){
    int i,n,c1=0,c2=0,branco=0,nulo=0;
    for(i=0;i<10;i++){
        scanf("%d",&n);
        if(n == 1){
            c1++;
        }
        if(n == 2){
            c2++;
        }
        if(n == 3){
            branco++;
        }
        if(n == 4){
            nulo++;
        }
    }

    printf("\nCandidato 1: %d\nCandidato 2: %d\nVotos em branco: %d\nVotos nulos: %d\nVencedor: Candidato ",c1,c2,branco,nulo);
    if(c1>c2){
        printf("1");
    }
    else{
        printf("2");
    }
}
