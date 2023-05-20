#include <stdio.h>
int main(){
	int a1[10],i,qtdPar=0,qtdImpar=0,iPar=0,iImpar=0;
	for (i=0;i<10;i++){
		printf("Digite o n %d\n", i+1);
		scanf("%d",&a1[i]);
		if (a1[i] % 2 == 0){
			qtdPar++;
		}
		else{
			qtdImpar++;
		}
	}
	
	int a2[qtdPar],a3[qtdImpar];
	
	for (i=0;i<10;i++){
		if (a1[i] % 2 == 0){
			a2[iPar] = a1[i];
			iPar++;
		}
		else{
			a3[iImpar] = a1[i];
			iImpar++;
		}
	}
	
	printf("\n");
	for (i=0;i<10;i++){
	printf("Array 1 na posicao %d: %d\n",i, a1[i]);
	}
	
	printf("\n");
	for (i=0;i<qtdPar;i++){
	printf("Array 2 (pares) na posicao %d: %d\n",i, a2[i]);
	}
	
	printf("\n");
	for (i=0;i<qtdImpar;i++){
	printf("Array 3 (impares) na posicao %d: %d\n",i, a3[i]);
	}
}
