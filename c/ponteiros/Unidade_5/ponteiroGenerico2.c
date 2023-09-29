#include <stdio.h>
int main(){
    void * p1;
    int c = 10;

    p1 = &c;

    printf("Conteudo do ponteiro p1: %d\n", *(int *) p1);

    double x = 8.0;
    p1 = &x;
    
    printf("Conteudo do ponteiro p1: %f\n", * (double *) p1);
    return 0;
}

