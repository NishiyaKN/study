#include <stdio.h>
int main(){
	int a1[10],a2[10],i,j=0;
	printf("Digite 10 valores do primeiro array\n");
	for(i=0;i<10;i++){
		scanf("%d",&a1[i]);
	}
	printf("\nDigite 10 valores do segundo array\n");
	for(i=0;i<10;i++){
		scanf("%d",&a2[i]);
	}	
	
	printf("\nNumeros que aparecem em ambos os arrays:\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if (a1[i] == a2[j]){
				printf("%d\n",a1[i]);
				break;
			}
		}
	}
}

