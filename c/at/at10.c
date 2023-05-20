#include <stdio.h>
int main(){
	int a,b,m;
	printf("Digite o primeiro numero:\n");
	scanf("%d",&a);
	printf("Digite o segundo numero:\n");
	scanf("%d",&b);
	
	if (a <= 0 && b <= 0){
		printf("Valores digitados invalidos");
		return 1;
	}
	
	if (a == b){
		printf("Valores digitados iguais");
		return 1;
	}
	
	if (a < b){
		m = b;
	}
	else{
		m = a;
	}
	
	printf("O maior valor e: %d", m);
}
