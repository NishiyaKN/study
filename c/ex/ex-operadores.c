#include <stdio.h>
#define true 1

int main (){
	int A,B;
	
	printf("\nEntre com um valor numerico:");
	scanf("%d",&A);
	
	printf("\nEntre com outro um valor numerico:");
	scanf("%d",&B);
	
	A++;
	B++;
	
	printf("\nSomando um aunidade em cada variavel...\n");
	
	printf("A = %d\n",A);
	printf("B = %d\n",B);
	
	return 0;
}
