#include <stdio.h>
int main(){
	double temp;
	scanf("%lf",&temp);
	if(temp < 35.3){
		printf("Baixa");	
	}
	else if(temp >= 35.4 && temp <= 37.2){
		printf("Normal");
	}
	else{
		printf("Alta");
	}
}
