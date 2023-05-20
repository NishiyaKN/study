#include <stdio.h>
int main(){
    double arr1[10], arr2[10]; 
    int i;
    for(i=0;i<10;i++){
        scanf("%lf",&arr1[i]);
        arr2[i] = arr1[i] * arr1[i];
    }

    printf("Array 1:\n\n");
    for(i=0;i<10;i++){
        printf("%lf\n",arr1[i]);
    }

    printf("Array 2:\n\n");
    for(i=0;i<10;i++){
        printf("%lf\n",arr2[i]);
    }
}
