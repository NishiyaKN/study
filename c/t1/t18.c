#include <stdio.h>
int main(){
	int n1,n2,resultado;
	printf("Digite o primeiro numero\n");
	scanf("%d",&n1);
	printf("Digite o segundo numero\n");
	scanf("%d",&n2);
	
	if(n1 > n2){
		resultado = n1 - n2;
	}
	else{
		resultado = n2 - n1;
	}
	printf("Diferenca do maior pelo menor: %d\n",resultado);	
}
