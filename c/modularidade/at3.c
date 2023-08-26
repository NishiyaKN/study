#include <stdio.h>
// The first element of an array holds the first memory address of the array, so you can pass it's value
// and then access it's memory address inside the body of the other function
int func(int *arr,int size);

int main(){
    int arr[3],i,soma;
    for(i=0;i<3;i++){
        printf("Digite mais %d valores: ",3 - i);
        scanf("%d",&arr[i]);
    }
    soma = func(arr,3);
    printf("A soma dos valores digitado eh: %d\n",soma);
}

int func(int *ptr, int len){
    int sum = 0, i;
    for(i=0;i<len;i++){
        sum += *(ptr+i);
    }
    return sum;
}
