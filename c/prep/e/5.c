#include <stdio.h>
int main(){
    int arr[5];
    int *p;
    p = arr;
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&*(p+i));
    }
    for(i=0;i<5;i++){
        printf("%d",*(p+i));
    }
}
