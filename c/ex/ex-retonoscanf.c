#include <stdio.h>
#define true 1

int main(){
	int valor, retorno, soma = 0;
	
	printf("\nEntre com um valor qualquer: ");
	
	while (true){
		retorno = scanf("%d",&valor);
		if(retorno == true)
		{
			soma = soma + valor;
			printf("\nEntre com outro valor qualquer: ");
		}
		else
			break;
	}
	
	printf("Soma = %d\n", soma);
	return 0;
}
