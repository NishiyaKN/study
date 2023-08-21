#include <stdio.h>

int printMsg(void);

int main(){
    printf("Inicio do programa");
    int codRetorno;

    codRetorno = printMsg();
    printf("\ncodRetorno = %d",codRetorno);
    printf("\nFim do programa");
    return 0;
}

int printMsg(void){
    printf("\nHello World");
    return 99;
}
