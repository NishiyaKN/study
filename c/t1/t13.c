#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero\n");
    scanf("%d",&n);

    if (n >= 100 && n <= 200){
        printf("O numero %d esta entre 100 e 200\n",n);
        return 0;
    }

    printf("O numero %d nao esta entre 100 e 200\n",n);
    return 0;
}
