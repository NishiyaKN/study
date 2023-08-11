#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char nome[40];
	
	printf("Entre com o seu nome: \n");
	
	scanf("%s", &nome);
	
	printf("\nO nome entrado foi: %s", nome);
	
	return 0;
}
