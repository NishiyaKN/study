#include <stdio.h>
int main(){
	int n1,n2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	if (n1 == n2){
		printf("Valores entrados iguais");
		return 0;
	}
	else{
		printf("Valores entrados diferentes");
		return 0;
	}
}
