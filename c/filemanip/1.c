#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ponteiro que aponta para o arquivo
    FILE *file;

    // Especifica o caminho completo para o Desktop do usuario.
    // Modifique "YourUsername" para o nome de usduario correto.
    char *filePath = "/home/yori/study/c/filemanip/a.txt";

    // Abre um arquivo em modo de escrita
    file = fopen(filePath,"w");
}

