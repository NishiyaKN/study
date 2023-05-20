#include <stdio.h>
int main(){
	int N, i, Maior = 0, Soma = 0;
	for (i = 0; i < 10;i++){
		scanf("%d",&N);
		if(N>Maior){
			Maior=N;
		}
		Soma+=N;
	}
	printf("Dobro do maior: %d",Maior*2);
	printf("Soma: %d",Soma);
	return 0;
}
