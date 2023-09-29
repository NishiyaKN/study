#include <stdio.h>

int main(){
    int original[5] = {10,20,30,40,50};
    int copia[5];
    int *ptr_original, *ptr_copia;

    // Atribuindo os enderecos dos primeiros elementos dos arrays
    ptr_original = original;
    ptr_copia = copia;

    // Copiando valores do array original para o array cipia usando
    for(int i = 0; i < 5; i++){
        *(ptr_copia + i) = *(ptr_original + i);
    }

    // Imprimindo os valores do array copia
    printf("Valores copiados para o array 'copia': \n");
    for(int i = 0; i < 5; i++){
        printf("%d ",copia[i]);
    }

    printf("\n");
    return 0;
}
