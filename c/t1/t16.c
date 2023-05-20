#include <stdio.h>
int main(){
    int a,b,c;
    
    printf("Digite o primeiro numero\n");
    scanf("%d",&a);

    printf("Digite o primeiro numero\n");
    scanf("%d",&b);

    printf("Digite o primeiro numero\n");
    scanf("%d",&c);

	if(a < b && a < c){
		if ( b < c){
			printf("\n%d\n%d\n%d",a,b,c);
			return 0;
		}
		else{
			printf("\n%d\n%d\n%d",a,c,b);
			return 0;	
		}
	}
	
	if(b < a && b < c){
		if ( a < c){
			printf("\n%d\n%d\n%d",b,a,c);
			return 0;
		}
		else{
			printf("\n%d\n%d\n%d",b,c,a);
			return 0;	
		}
	}
	
	if(c < b && c < a){
		if ( a < b){
			printf("\n%d\n%d\n%d",c,a,b);
			return 0;
		}
		else{
			printf("\n%d\n%d\n%d",c,b,a);
			return 0;	
		}
	}
	return 1;	
}
