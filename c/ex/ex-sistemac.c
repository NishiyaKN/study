#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n;
	
	printf("Este programa exibe alguns numeros inteiros aleatorios...\n\n");
	printf("Entre com a quantidade de numeros a serem exibidos: ");
	
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		if (i%6==0)
		printf("\n");
		
		printf("%10d",rand());
	}
	return 0;
}
