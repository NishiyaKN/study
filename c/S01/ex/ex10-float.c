#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float n;
	
	printf("Entre com um valor numerico float: \n");
	
	scanf("%f",&n);
	
	printf("\nO valor entrado foi: %.3f",n);
	
	return 0;
}
