#include <stdio.h>
int main(){
	int array[10],i;
	double media=0,soma=0,impar=0;
	for(i=0;i<10;i++){
		scanf("%d",&array[i]);
		if(array[i] % 2 != 0){
			soma += array[i];
			impar++;
		}
	}
	
	media = soma / impar;
	
	printf("Media aritmetica dos impares: %.2lf",media);
}
