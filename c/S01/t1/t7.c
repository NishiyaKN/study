#include <stdio.h>
int main(){
    int folhas;
    double valor;

    printf("Digite o numero de folhas\n");
    scanf("%d",&folhas);

    if(folhas > 200){
        valor = 100 + (folhas - 200) * 0.3;
        printf("Valor total: %.2lf\n",valor);
        return 0;
    }
    valor = folhas * 0.5;
    printf("Valor total: %.2lf\n",valor);
    return 0;
}
