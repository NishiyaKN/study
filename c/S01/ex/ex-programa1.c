#include <stdio.h>

int main(){
	int i=1,j=2,k=3;
	
	printf("A expressao => (i < (j-k)) retornou %d", (i < (j-k)));
	
	if(i < (j-k))
	printf("\n\n ---- Expressao avalidada como TRUE ----\n\n");
	
	else
	
	printf("\n\n ---- Expressao avalidada como FALSE ----\n\n");
	return 0;
}

