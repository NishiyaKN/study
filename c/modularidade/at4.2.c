#include <stdio.h>

int func(int *arr,int size);

int main(){
    int arr[3],i,maior;
    for(i=0;i<3;i++){
        printf("Digite mais %d valores: ",3 - i);
        scanf("%d",&arr[i]);
    }
    maior = func(arr,3);
    printf("O maior valor eh: %d\n",maior);
    return 0;
}

int func(int *ptr, int len){
   if(ptr[0] > ptr[1] && ptr[0] > ptr[2]){
       return ptr[0];
   } 
   else if(ptr[1] > ptr[0] && ptr[1] > ptr[2]){
       return ptr[1];
   }
   else{
       return ptr[2];
   }
}

