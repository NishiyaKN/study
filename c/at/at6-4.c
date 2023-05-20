#include <stdio.h>

int main () {
int A, B, R;

printf("Digite o primeiro numero\n");
scanf("%d", &A);

printf("Digite o segundo numero\n");
scanf("%d", &B);

if (A > 2){
	if (B > 5){
		R = A + B;
		printf("R=%d",R);
		return 0;
	}
	else{
		R = A - B;
		printf("R=%d",R);
		return 0;
	}
}
	else if(B < 10){
		R = B + 2;
		printf("R=%d",R);
		return 0;
	}

	else{
	R = A + 1;
	printf("R=%d",R);
	return 0;
	}
}
