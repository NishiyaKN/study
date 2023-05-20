#include <stdio.h>
int main(){
    char nome[30];
    double salario, vendas ,final;

    printf("Digite o nome do vendedor:\n");
    scanf("%[^\n]s",nome);
    // %[^\n]s pega todos os char digitado, exceto \n (pois representa o backspace)
    // necessario para nomes compostos
    printf("Digite o salario fixo do vendedor:\n");
    scanf("%lf",&salario);

    printf("Digite o total de vendas do vendedor:\n");
    scanf("%lf",&vendas);

    final = salario + ( vendas/100*20);

    printf("Nome: %s\n",nome);
    printf("Salario fixo: %.2lf\n",salario);
    printf("Salario final: %.2lf\n",final);

    return 0;

}

