#include <stdio.h>
int main(){
	int l1,l2;
	printf("Entre com o primeiro lado: ");
	scanf("%d",&l1);

	printf("Entre com o segundo lado: ");
	scanf("%d",&l2);
		
	printf("Lado 1: %d\nLado 2: %d\nPerimetro: %d\nArea: %d\n",l1,l2,l1*2 + l2*2, l1*l2);
	
	return 0;
}
