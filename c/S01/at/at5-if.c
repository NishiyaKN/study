#include <stdio.h>

int main(){
	
	int lado;
	
	printf("Digite o tamanho do lado de um quadrado \n");
	
	scanf("%d", &lado);
	
	if (lado%2  != 0 ){
		printf("Valor invalido");
		return 1;
	}
	
	int a = lado*lado;
	
	printf("A area eh: %d",a);
	
	return 0;

}
