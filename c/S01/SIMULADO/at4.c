#include <stdio.h>
int main(){
	int x, y, z ,trab;
	scanf("%d",&x);
	scanf("%d",&y);
	
	z = x+=y;
	trab = !!!x + !!y + x%y + !!z;
	printf("%d",trab);
}
