#include <stdio.h>
int main(){
	int arr[4][4],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				arr[i][j] = 0;
			}
			else{
				arr[i][j] = 99;
			}
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("[%d]",arr[i][j]);
		}
	}
	
}
