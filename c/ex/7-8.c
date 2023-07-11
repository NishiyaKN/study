#include <stdio.h>
int main(){
	int m1[12][12],i,j,n,m2[12][12];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m1[i][j]);
			m2[i][j] = m1[i][j] * 2;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Array M1:[%d][%d] = %d\n",i,j,m1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Array M2:[%d][%d] = %d\n",i,j,m2[i][j]);
		}
	}
}
