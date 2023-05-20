#include <stdio.h>

int main() {
	
	int A,B,C,R1,R2,Q1,Q2,V;
	
	A=10; B=20; C=3;
	
	Q1 = B/A; //2
	Q2 = B/3; //6
	R1 = A%C; //1
	R2 = B%C; //2
	
	V = Q1 + Q2 + R1 + R2;
	printf("V = %d", V);
	
}
