#include <stdio.h>
int main(){
	int a,d;
	printf("Digite um numero\n");
	scanf("%d",&a);
	if (a <= 0){
		printf("Valor invalido\n");
		return 1;
	}
	d = a * 2;
	printf("O dobro de %d eh %d\n",a,d);
	return 0;
}
