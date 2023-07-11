#include <stdio.h>
int main(){
	int R = 0, W = 0, N;
	scanf("%d", &N);
	while (N > 0){
		N-=2;
		R = R + 10;
		W = N % 2;
		if ( W == 1)
		R = ++R - 1;
		else
		R = ++R + 1;	
	}
	printf("%d",R);
}
