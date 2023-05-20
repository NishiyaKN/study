#include <stdio.h>

int main () {
	int i = 1, soma = 0;
	
	while (i <= 10) {
		soma = soma + i;
		i = i +1;
	}
	printf("Soma = %d\n", soma);
	return 0;
}
