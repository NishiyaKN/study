#include <stdio.h>

int main(){
	int i=7, j=7;
	double x=0.0, y = 999.9;
	
	int result;
	
	result = ! (i-j) + 1;
	// i-j = 0, mas como ta sendo negado ele vira 1
	printf("\n\nresult = %d", result);
	
	return 0;
}
