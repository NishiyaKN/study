#include <stdio.h>
int main(){
    double n1,n2,n3,media;

    printf("Digite o primeiro numero\n");
    scanf("%lf",&n1);

    printf("Digite o segundo numero\n");
    scanf("%lf",&n2);

    printf("Digite o terceiro numero\n");
    scanf("%lf",&n3);

    media = (n1 + n2 + n3) / 3;
    printf("Media aritmetica: %.2lf\n",media);
}
