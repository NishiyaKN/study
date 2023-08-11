#include <stdio.h>

int main(){
		
	int lado1;
	int lado2;
	
	printf("Digite o tamanho do primeiro lado do quadrado \n");
	scanf("%d", &lado1);
	
	printf("Digite o tamanho do segundo lado do quadrado \n");
	scanf("%d", &lado2);
		
	int p = (lado1*2) + (lado2*2);
	
	printf("O perimetro eh: %d",p);
	
	return 0;
	
}
