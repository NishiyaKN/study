#include <stdio.h>

int func(int arr[],int size);

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

int func(int arr[], int len){
   if(arr[0] > arr[1] && arr[0] > arr[2]){
       return arr[0];
   } 
   else if(arr[1] > arr[0] && arr[1] > arr[2]){
       return arr[1];
   }
   else{
       return arr[2];
   }
}
