#include <stdio.h>
int main(){
	int n,i,arr[10],counter=0;
	double soma = 0;
	for(i=0;i<10;i++){
		scanf("%d",&n);
		arr[i] = n;
		if(n<0){
			soma += n;
			counter++;
		}
	}

    printf("\nNumeros negativos:\n");
	for(i=0;i<10;i++){
		if(arr[i] < 0){
			printf("%d\n",arr[i]);
		}
	}
	printf("\nMedia: %.2lf",soma/counter);
}
