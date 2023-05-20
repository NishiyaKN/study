#include <stdio.h>
int main(){
	int array[10],i;
	double media=0,maior=0,menor=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&array[i]);
		if(maior == 0){
			maior = array[i];
		}
		if(menor == 0){
			menor = array[i];
		}
		
		if(menor > array[i]){
			menor = array[i];
		}
		if(maior < array[i]){
			maior = array[i];
		}
	}
	
	media = (maior + menor) / 2;
	printf("Maior: %lf\nMenor: %lf\nMedia: %.2lf",maior,menor,media);
}
