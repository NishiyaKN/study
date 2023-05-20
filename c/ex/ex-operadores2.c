#include <stdio.h>

int main(){
	int B,A = 10;
	B = A++;
	printf("B = %d\n",B);
	printf("A = %d\n",A);
	return 0;
}
