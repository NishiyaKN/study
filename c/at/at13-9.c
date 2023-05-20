#include <stdio.h>
int main(){
	int n,i,t=0;
	for(i=1;i<=10;i++){
		printf("Digite o numero N%d: \n",i);
		scanf("%d",&n);
		t = t + n;
	}
	printf("\nO valor final e: %d",t);
}
