#include <stdio.h>
int main(){
	double preco,total;
	int qt;
	
	printf("Digite o preco do produto: ");
	scanf("%lf",&preco);
	
	printf("Digite a quantidade do produto: ");
	scanf("%d",&qt);
	
	if(qt >= 10){
		preco = preco * qt;
		total = preco - (preco * 0.1);
	}
	else{
		preco * qt;
		total = preco * qt;
	}
	
	printf("Preco: %.2lf\nQuantidade: %d\nTotal: %.2lf",preco,qt,total);
}
