#include <stdio.h>

int main(){
	
	int lado;
	
	printf("Digite o tamanho do lado de um quadrado \n");
	
	scanf("%d", &lado);
	
	int p = lado*4;
	
	printf("O perimetro eh: %d",p);
	
	return 0;
}
