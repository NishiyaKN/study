#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ponteiro que aponta para o arquivo.
    FILE *file;

    // Especifica o caminho completo para o Desktop do usuario.
    // Modifique "YourUsername" para o nome de usduario correto.
    char *filePath = "/home/yori/study/c/filemanip/a.txt";
    char ch;

    // Abre um arquivo em modo de escrita
    file = fopen(filePath,"r");

    // Verifica se o arquivo foi aberto com sucesso.
    if(file == NULL){
        printf("Error ao abrir o arquivo!\n");
        return -1;
    }

    // Le cada caractere do arquivo ate o fim do arquivo (EOF).
    while((ch = fgetc(file)) != EOF){
        printf("%c", ch); // Imprime caractere.
    }

    // Fecha o arquivo.
    fclose(file);
}


