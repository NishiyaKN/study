#include <stdio.h>
int main(){
	int n,i;
	printf("Digite um numero maior que 9\n");
	scanf("%d",&n);
	
	if (n < 10){
		printf("\nValor invalido\n");
		return 1;
	}
	else{
		for(i=1;i<=n;i++){
			printf("USCS\n");
		}
	}
}
