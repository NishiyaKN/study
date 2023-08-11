#include <stdio.h>
int main(){
	int n, i = 0;
	printf("Digite um numero maior que 0\n");
	scanf("%d",&n);
	
	if (n <= 0){
		printf("\nValor invalido\n");
		return 1;
	}
	else{
		while (i <= n){
			printf("%d\n",i);
			i++;
		}
	}
}
