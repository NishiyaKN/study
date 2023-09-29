#include <stdio.h>
int main(){
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    // recebe o endereco de inteiro
    pp = &p2;
    printf("Endereco em pp: %p \n",pp);
    // recebe o endereco de um ponteiro para inteiro
    pp = &p1;
    printf("Endereco em pp: %p \n",pp);
    // recebe o endereco guardado em p1 (endereco de p2)
    pp = p1;
    printf("Endereco em pp: %p \n",pp);
}
