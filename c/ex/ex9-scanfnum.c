#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Entre com um valor numerico inteiro: \n");
	
	scanf("%d",&n);
	
	printf("O valor entrado foi: %d\n\n",n);
	
	return 0;
}
