#include <stdio.h>
int main(){
    int idade;
    printf("Digite a idade do jogador\n");
    scanf("%d",&idade);

    if(idade <= 13){
        printf("Idade: %d\nCategoria: infantil\n",idade);
        return 0;
    }
    if(idade > 13 && idade <= 17){
        printf("Idade: %d\nCategoria: juvenil\n",idade);
        return 0;
    }
    if(idade > 17){
        printf("Idade: %d\nCategoria: senior\n",idade);
        return 0;
    }
}
