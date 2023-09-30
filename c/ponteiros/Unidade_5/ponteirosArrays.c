#include <stdio.h>
int main(){
    int mat[2][2] = {{1,2},{3,4}};
    int *p;
    int i;

    p = &mat[0][0]; // aponta para o primeiro elemento
    /* p = mat; */
    for(i=0;i<4;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}
