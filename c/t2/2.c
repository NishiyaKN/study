#include <stdio.h>
int main(){
	int a1[10],i,somaPar=0;
	for (i=0;i<10;i++){
		printf("Digite o n %d\n", i+1);
		scanf("%d",&a1[i]);
		if (a1[i] % 2 == 0){
			somaPar += a1[i];
		}
	}
	
	printf("A soma de todos os pares entrados e: %d",somaPar);
	return 0;
}
