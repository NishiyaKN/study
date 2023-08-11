#include <stdio.h>

int main(){
	int a,b,m;
	
	printf("Digite o primeiro numero\n");
	scanf("%d",&a);
	
	printf("Digite o segundo numero\n");
	scanf("%d",&b);
	
	if (a <= 0 && b <= 0){
		printf("Valores entrados invalidos\n");
		return 1;
	}
	
	if (a > b){
		m = a;
	}
	else{
		m = b;
	}
	printf("O valor maior e %d", m);
}
