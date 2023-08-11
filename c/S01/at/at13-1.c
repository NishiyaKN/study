#include <stdio.h>
int main(){
	int N, i = 1;
	printf("\n--------- Inicio do Programa ---------\n");
	printf("\nEntre com um valor numerico inteiro: \n");
	scanf("%d",&N);
	
	if ( N < 10){
		printf("\nValor Invalido...");
	}
	else{
		while ( i <= N ){
			printf("\n%d. USCS", i);
			i++;
		}
	}
	printf("\n--------- Fim de Programa ---------");
}
