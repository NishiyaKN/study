#include <stdio.h>
int main(){
	double a,b,h;
	printf("Digite a medida da base\n");
	scanf("%lf",&b);
	
	printf("Digite a medida da altura\n");
	scanf("%lf",&h);
	
	a = (b * h) / 2;
	
	printf("A area do triangulo e: %.2lf",a);
}
