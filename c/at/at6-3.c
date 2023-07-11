#include <stdio.h>

int main (){

int C = 2, S = 8;

while(C <= 5){
	C = C + 1;
	S = S + 2;
}

if (C == 5)
	S = S - C;

S = S + C;
printf("O valor de S e: %d",S);
return 0;
}
