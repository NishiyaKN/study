#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;

    char *filePath = "/home/yori/study/c/filemanip/a.txt";
    char dadosParaAdicionar[] = "Novos dados\n";

    file = fopen(filePath,"a");
    if(file == NULL){
        printf("Error ao abrir o arquivo!\n");
        exit(1);
    }
    fputs(dadosParaAdicionar,file);
    
    fclose(file);
}



