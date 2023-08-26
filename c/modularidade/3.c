#include <stdio.h>
int printMsg(int n);

int main() {
    printf("Inicio do programa 3");
    int codRetorno, n;
    printf("\nEntre com um valor inteiro: ");
    scanf("%d",&n);
    codRetorno = printMsg(n);
    printf("\ncodRetorno = %d", codRetorno);
    printf("\nFim do programa 3");
    return 0;
}

int printMsg(int n){
    int i;
    if (n <= 0){
        printf("Valor invalido");
        return 1;
    }
    for (i=0;i<n;i++){
        printf("\nHello world");
    }
    printf("\nTexto impresso %d vezes",n);
return 0;
}
