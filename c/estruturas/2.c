#include <stdio.h>
#include <string.h>

int main(){
    struct Produto{
        int cod;
        char desc[30];
        double preco;
    };

    struct Produto produto1;
    struct Produto produto2;
    struct Produto produto3;

    produto1.cod = 10;
    strcpy(produto1.desc, "Mouse");
    produto1.preco = 500.00;

    produto2.cod = 20;
    strcpy(produto2.desc, "Placa de video RX 3080");
    produto2.preco = 4900.00;

    produto3.cod = 30;
    strcpy(produto3.desc, "Placa mae ASUS Rog Strix Z790-A");
    produto3.preco = 3200.00;

    printf("Produto 1\nCod: %d\nDescricao: %s\nPreco: %.2f\n\n",produto1.cod,produto1.desc,produto1.preco);
    printf("Produto 2\nCod: %d\nDescricao: %s\nPreco: %.2f\n\n",produto2.cod,produto2.desc,produto2.preco);
    printf("Produto 3\nCod: %d\nDescricao: %s\nPreco: %.2f\n\n",produto3.cod,produto3.desc,produto3.preco);
};
