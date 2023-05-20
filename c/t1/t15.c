#include <stdio.h>
int main(){
    double celsius, farenheit;

    printf("Digite a temperatura em Farenheit\n");
    scanf("%lf",&farenheit);

    celsius = ((farenheit - 32) * 5) / 9;

    printf("%.2lf F = %.2lf C\n",farenheit,celsius);
}
