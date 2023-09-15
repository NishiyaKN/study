#include <stdio.h>
int somaRec(int[], int);
int main(){
    int tab[5] , i;
    for(i=0;i<5;i++){
        tab[i] = i;
        printf("Soma dos elementos = %d",somaRec(tab,5));
    }
}
int somaRec(int A[], int n){
    printf("\nFuncao executada para n = %d",n);
}

