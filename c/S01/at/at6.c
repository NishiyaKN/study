#include <stdio.h>
#include <locale.h>

int main(){
	int a,b,r;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro lado \n");
	scanf("%d",&a);
	
	printf("Digite o segundo lado \n");
	scanf("%d",&b);
	
	if(a%2 == 1 && b%2 == 1){
		printf("Valores entrados invalidos");
		return 1;
	} 	
	r = a * b;
	printf("A area do retangulo e: %d",r);
}
