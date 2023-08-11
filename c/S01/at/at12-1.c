#include <stdio.h>

int main(){
	int valor;
	printf("------- Inicio do Programa -------\n");
	printf("Entre com um valor numerico inteiro:\n");
	
	scanf("%d",&valor);
	printf("\nValor entrado: %d\n\n",valor);
	
	if(valor > 10)
		printf("Valor entrado maior que 10\n\n");
	else
		printf("Valor entrado nao e maior que 10!\n\n");
	
	printf("------- Fim de Programa -------");
	return 0;
}
