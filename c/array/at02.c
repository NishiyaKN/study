#include <stdio.h>
int main(){
    int A[5],i,maior=0,pos;
    for(i=0;i<5;i++){
        printf("Digite a nota de mais %d alunos\n",5-i);
        scanf("%d",&A[i]);
    }
    maior = A[0];
    for(i=0;i<5;i++){
        if(A[i] > maior){
            maior = A[i];
            pos = i;
        }
    }
    printf("Maior numero: %d\nPosicao no array: %d\n",maior,pos);
}
