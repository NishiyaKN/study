#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ponteiro que aponta para o arquivo.
    FILE *file;

    // Especifica o caminho completo para o Desktop do usuario.
    // Modifique "YourUsername" para o nome de usduario correto.
    char *filePath = "/home/yori/study/c/filemanip/a.txt";

    // Abre um arquivo em modo de escrita
    file = fopen(filePath,"w");

    // Verifica se o arquivo foi aberto com sucesso.
    if(file == NULL){
        printf("Error ao abrir o arquivo!\n");
        exit(1); // Encerra o programa com o codigo de erro 1.
    }

    // Escreve a string no arquivo.
    fprintf(file, "Hello World\n");

    // Fecha o arquivo.
    fclose(file);

    printf("Arquivo 'a.txt', criado com sucesso\n");
}

