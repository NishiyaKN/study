#include <stdio.h>
int main(){
	int numero1, numero2, soma;
	printf("Entre com o primeiro numero: ");
	scanf("%d",&numero1);
	
	printf("Entre com o segundo numero: ");
	scanf("%d",&numero2);
	
	soma = numero1 + numero2;
	printf("Valores entrados: %d e %d\n",numero1,numero2);
	printf("Soma = %d\n",soma);
	
	return 0;
}
