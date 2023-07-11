#include <stdio.h>
int main(){
	int i,n,maior=0;
		while(n != 999){
		printf("Digite o N%d\n",i);
		scanf("%d",&n);
		if(n > maior && n != 999){
			maior = n;
		}
	}

	printf("O maior valor e: %d",maior);
}

