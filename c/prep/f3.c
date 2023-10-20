#include <stdio.h>
double calcMedia(double n1,double n2);
int main(){
    double n1,n2;
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    printf("media: %lf", calcMedia(n1,n2));
}
double calcMedia(double n1, double n2){
    if(n1<n2){
        return n1;
    }
    else{
        return n2;
    }
}

