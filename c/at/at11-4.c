#include <stdio.h>
int main(){
	double sal, au;
	printf("Entre com o salario atual:\n");
	scanf("%lf",&sal);
	
	printf("Entre com a porcentagem de aumento:\n");
	scanf("%lf",&au);
	
	printf("Salario atual: %.2lf\nAumento: %.2lf\nSalario futuro:%.2lf",sal,au,sal+sal*au/100);
	
	return 0;
}
