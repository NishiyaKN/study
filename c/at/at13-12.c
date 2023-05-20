#include <stdio.h>
int main(){
	int i,n,maior=0;
	for(i=1;i<=10;i++){
		printf("Digite o N%d\n",i);
		scanf("%d",&n);
		if(n > maior){
			maior = n;
		}
	}
	printf("O maior valor e: %d",maior);
}
