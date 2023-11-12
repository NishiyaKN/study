#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int * numeros;

    // Solicita ao usuario o tamanho do array
    printf("Informe o tamanho do array de numeros: ");
    scanf("%d",&tamanho);

    numeros = (int *)malloc(tamanho * sizeof(int));

    if(numeros == NULL){
        printf("Falha da alocacao de memoria");
        return 1;
    }
    int i;

    // Preenche o array com valores
    for(i=0;i<tamanho;i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d",&numeros[i]);
    }

    // Exibe os valores do array
    printf("Valores informados:\n");
    for(i=0;i<tamanho;i++){
        printf("\n%d",numeros[i]);
    }
    printf("\n");

    free(numeros);
}
