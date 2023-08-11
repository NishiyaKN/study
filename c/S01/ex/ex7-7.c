#include <stdio.h>
int main(){
	int arr[4][4],i,j,n;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite o numero na linha %d da coluna %d\n",i,j);
			scanf("%d",&n);
			arr[i][j] = n;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("[%d] [%d] = %d\n",i,j,arr[i][j]);
		}
	}
}
