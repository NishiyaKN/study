#include <stdio.h>
int main(){
	double c;
	printf("Digite a temperatura em C\n");
	scanf("%lf",&c);
	printf("C: %.2lf\nF: %.2lf",c,1.8*c+32);
}
