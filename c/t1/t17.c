#include <stdio.h>
int main(){
	double n1,n2,n3,n4,media;
	printf("Digite a primeira nota\n");
	scanf("%lf",&n1);
	
	printf("Digite a segunda nota\n");
	scanf("%lf",&n2);
	
	printf("Digite a terceira nota\n");
	scanf("%lf",&n3);
	
	printf("Digite a quarta nota\n");
	scanf("%lf",&n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	if (media >= 5){
		printf("O aluno esta aprovado\nMedia: %.2lf\n",media);
		return 0;
	}
	printf("O aluno esta reprovado\nMedia: %.2lf\n",media);
	return 0;
}
