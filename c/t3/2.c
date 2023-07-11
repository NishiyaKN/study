#include <stdio.h>
int main(){
    int n,i,soma=0;
    for(i=0;i<150;i++){
        scanf("%d",&n);
        soma += n;
    }
    printf("Total: %d",soma);
}
