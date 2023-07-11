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
		if(n1 > n2){
			printf("O numero %d e maior que %d",n1,n2);
		}
		else{
			printf("O numero %d e maior que %d",n2,n1);
		}
	}
}
