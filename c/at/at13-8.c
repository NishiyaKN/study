#include <stdio.h>
int main(){
	int n,i;
	printf("Escreva um numero:\n");
	scanf("%d",&n);
	if (n <= 0){
		printf("Valor invalido");
		return 1;
	}
	for (i=0;i<=n;i++){
		printf("%d\n",i);
	}
}
