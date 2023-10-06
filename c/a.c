#include <stdio.h>
struct ponto{
	int x,y;
};
int main(){
    struct ponto q;
    struct ponto *p;
    p = &q;
    (*p).x = 10;
    printf("%d",(*p).x);
}
