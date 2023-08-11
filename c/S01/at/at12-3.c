#include <stdio.h>
int main(){
	double n1,n2,n3;
	printf("Digite a primeira nota\n");
	scanf("%lf",&n1);
	
	printf("Digite a segunda nota\n");
	scanf("%lf",&n2);
	
	printf("Digite a terceira nota\n");
	scanf("%lf",&n3);
	
	printf("Nota 1:%.2lf\nNota 2: %.2lf\nNota 3: %.2lf\n\nMedia: %.2lf\n",n1,n2,n3,(n1+n2+n3)/3);
	if ((n1+n2+n3)/3 >= 6){
		printf("Aprovado");
		return 0;
	}
	else{
		printf("Reprovado");
		return 0;
	}
}
