#include <stdio.h>

void imprime(int[], int);
int maxRecursivo(int[],int);
int main(){
    printf("\nInicio");
    int tab[] = {44,6,8,1,4,9,10,94}, n = 8;
    imprime(tab,8);
    printf("Maior valor: %d\n",maxRecursivo(tab, n));
    printf("Fim\n");
}

void imprime(int v[], int n){
    int i;
    printf("\n\nArray: ");
    for(i=0;i<n;i++){
        printf("\n%d  ",v[i]);
    }
    printf("\n");
}
int maxRecursivo(int A[],int n){
    if (n==1){
        return A[0];
    }
    else{
        int x = maxRecursivo(A,n-1);
        if(x<A[n-1]){
            return A[n-1];
        }
        else{
            return x;
        }
    }

}

