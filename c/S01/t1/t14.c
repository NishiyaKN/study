#include <stdio.h>
int main(){
    double celsius, farenheit;

    printf("Digite a temperatura em Celsius\n");
    scanf("%lf",&celsius);

    farenheit = (9 * celsius + 160) / 5;

    printf("%.2lf C = %.2lf F\n",celsius,farenheit);
}
