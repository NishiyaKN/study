#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro;

    // Alocar memoria para um unico inteiro
    ponteiro = (int *)malloc(sizeof(int));

    if(ponteiro == NULL){
        printf("Falha na alocacao de memoria.\n");
        return 1;
    }

    // Atribuir um valor ao inteiro alocado
    *ponteiro = 42;

    // Usar o valor alocado
    printf("O valor alocado e: %d\n", *ponteiro);

    // iberar a memoria alocada
    free(ponteiro);

    return 0;
}
