#include <stdio.h>

int main (){
	int C = 0, S = 10;
	
	while (C<=5){
		C++;
		S = S + 2;
	}
	
	S = S + C;
	printf("O valor de S e: %i",S);
	return 0;
}
