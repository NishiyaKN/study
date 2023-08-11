#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	double n;
	
	printf("Entre com um valor numerico double: \n");
	
	scanf("%lf", &n);
	
	printf("\nO valor entrado foi: %.2f", n);
	
	return 0;
}
