#include <stdio.h>
int main(){
    int i,arr[15],n;
    double soma=0;
    for(i=0;i<15;i++){
        scanf("%d",&n);
        soma += n;
    }

    printf("Media: %.2lf",soma/15);
}
