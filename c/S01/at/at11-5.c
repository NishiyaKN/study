#include <stdio.h>
int main(){
	double f;
	printf("Digite a temperatura em F\n");
	scanf("%lf",&f);
	printf("F: %.2lf\nC: %.2lf",f,(f - 32)/1.8);
}
