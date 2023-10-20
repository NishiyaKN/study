#include <stdio.h>
int main(){
    printf("Inicio do programa\n");
    int a = 5;
    int * p;

    p = &a; // ponteiro p recebe o endereco de a

    printf("Conteudo de a: %d\n", *p);
    printf("Fim do programa\n");
}
