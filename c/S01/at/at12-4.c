#include <stdio.h>
int main(){
	double n1,n2,n3,media;
	printf("Digite a primeira nota\n");
	scanf("%lf",&n1);
	
	printf("Digite a segunda nota\n");
	scanf("%lf",&n2);
	
	printf("Digite a terceira nota\n");
	scanf("%lf",&n3);
	
	media = (n1*2+n2*3+n3*4)/9;
	
	printf("Nota 1: %.2lf\nNota 2: %.2lf\nNota 3: %.2lf\n\nMedia: %.2lf\n",n1,n2,n3,media);
	if (media >= 5){
		printf("Aprovado");
		return 0;
	}
	else{
		printf("Reprovado");
		return 0;
	}
}
