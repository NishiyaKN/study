#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char * string;

    // Alocar memoria para uma string
    string = (char *)malloc(50 * sizeof(char));

    if(string == NULL){
        printf("Falha na alocacao de memoria\n");
        return 1;
    }
    strcpy(string, "Ola, mundo!");

    // Usar a string alocada
    printf("A mensagem e: %s\n", string);

    free(string);
}

