#include <stdio.h>
int main(){
	int i,j,arr[3][4],soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("[%d][%d] = %d\n",i,j,arr[i][j]);
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			soma += arr[i][j];
		}
		printf("Soma da linha %d: %d\n",i,soma);
		soma = 0;
	}
}
