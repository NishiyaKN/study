#include <stdio.h>
int main(){
	int a1[10],a2[10],i,j,ambos;
	printf("Digite 10 valores do primeiro array\n");
	for(i=0;i<10;i++){
		scanf("%d",&a1[i]);
	}
	printf("\nDigite 10 valores do segundo array\n");
	for(i=0;i<10;i++){
		scanf("%d",&a2[i]);
	}	
	
	printf("\nNumeros que nao aparecem em ambos os arrays:\n");
	for(i=0;i<10;i++){
        ambos = 0;
		for(j=0;j<10;j++){
			if (a1[i] == a2[j]){
                ambos = 1;
				break;
			}
		}
        if(!ambos){
            printf("%d\n",a1[i]);
        }
	}

	for(i=0;i<10;i++){
        ambos = 0;
		for(j=0;j<10;j++){
			if (a1[j] == a2[i]){
                ambos = 1;
				break;
			}
		}
        if(!ambos){
            printf("%d\n",a2[i]);
        }
	}
}


