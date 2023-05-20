#include <stdio.h>
int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if (idade >= 18 && idade <=67){
		printf("Voce pode doar sangue");
		return 0;
	}
	else{
		printf("Voce nao pode doar sangue");
		return 0;
	}
}
