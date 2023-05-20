#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero\n");
    scanf("%d",&n);

    if (n >= 200 && n <= 300){
        printf("O numero %d esta entre 200 e 300\n",n);
        return 0;
    }

    printf("O numero %d nao esta entre 200 e 300\n",n);
}
