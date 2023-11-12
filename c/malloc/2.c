#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p_array; // ponteiro para array
    int tamanho = 5,i;

    // Alocar memoria para um array de inteiros 
    p_array = (int *)malloc(tamanho * sizeof(int));

    if(p_array == NULL){
        printf("Falha na alocacao de memoria\n");
        return 1;
    }

    // Inicializar o array com valores
    for(i=0;i<tamanho;i++){
        p_array[i] = i * 2;
    }

    printf("Valores do array alocados: ");
    for(i=0; i < tamanho; i++){
        printf("\n%d",p_array[i]);
    }
    printf("\n");

    free(p_array);
}
