#include <stdio.h>
int main(){
	double soma=0;
	int n,i=1,par=0;
	while(i <= 10){
		printf("Digite o N%d\n",i);
		scanf("%d",&n);
		if(n % 2 == 0){
			soma = soma + n;
			par++;
		}
		i++;
	}
	printf("A media aritmetica e: %lf\ntem %d pares",soma / par,par);
	return 0;
}
