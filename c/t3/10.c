#include <stdio.h>
int main(){
    int arr1[10],i,arr2[10];
    for(i=0;i<10;i++){
        scanf("%d",&arr1[i]);
        if(arr1[i] < 0){
            arr2[i] = 0;
        }
        else{
            arr2[i] = arr1[i];
        }
    }
    printf("Array 2: \n");
    for(i=0;i<10;i++){
        printf("%d\n",arr2[i]);
    }
}
