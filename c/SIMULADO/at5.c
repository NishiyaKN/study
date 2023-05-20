#include <stdio.h>
int main(){
	int R = 0, W = 0, N, i;
	scanf("%d",&N);
	for (i = 0; i < N ; i++){
		R = R + 5;
		W = N % 2;
		if ( W == 1)
		R = ++R -1;
		else
		R = ++R + 1;
	}
	printf("%d",R);
}
