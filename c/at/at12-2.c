#include <stdio.h>
int main(){
	int n;
	printf("Digite um numero\n");
	scanf("%d",&n);
	if(n % 2 == 0){
		printf("O numero %d e par",n);
		return 0;
	}
	else{
		printf("O numero %d e impar",n);
		return 0;
	}
}
