#include <stdio.h>

int main(){
    int array[5] = {1,2,3,4,5};
    int *ptr;

    ptr = array; // Aponta para o primeiro elemento do array

    printf("Elemento do array:\n");

    for(int i = 0; i < 5; i++){ // navegando pelos indices
        printf("%d ", *(ptr + i));// pega o ponteiro e soma com o indice (aritmetica de ponteiros)
        printf("%p\n",ptr);
        // somando vai andando pra frente, subtraindo vai pra tras
    }
    printf("\n");
    return 0;
}
