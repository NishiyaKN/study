#include <stdio.h>
int main(){
	int n,i=1,t=0;
	while(i <= 10){
		printf("Digite o N%d\n",i);
		scanf("%d",&n);
		if(n % 2 == 0){
			t = t + n;
		}
		i++;
	}
	printf("Soma: %d",t);
	return 0;
}
