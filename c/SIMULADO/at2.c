#include <stdio.h>
int main(){
	int i = 6,X,Y,R,W,T;
	scanf("%d",&X);
	scanf("%d",&Y);
	
	while (i >= 0){
		if(i % 2 == 0)
		++X;
		else
		++Y;
		
		--i;
	}
	W = ++X;
	T = Y++;
	R = W + T;
	
	printf("%d",R);
}
