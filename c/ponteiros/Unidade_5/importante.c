#include <stdio.h>
int main(){
    int *p;
    int c = 10;

    p = &c;
    printf("%d\n",*p);
    (*p)++; // se colocar apenas p++ ele vai na proxima area da memoria, que esta vazio, se fosse array ele iria pra proxima posicao
    printf("%d\n",*p);

    *p = (*p) * 10;
    printf("%d\n",*p);
}
