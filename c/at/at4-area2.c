#include <stdio.h>

int main(){
		
	int lado1;
	int lado2;
	
	printf("Digite o tamanho do primeiro lado do quadrado \n");
	scanf("%d", &lado1);
	
	printf("Digite o tamanho do segundo lado do quadrado \n");
	scanf("%d", &lado2);
		
	int a = lado1*lado2;
	
	printf("A area eh: %d",a);
	
	return 0;
	
}
