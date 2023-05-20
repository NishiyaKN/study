#include <stdio.h>

int main() {
    int a1[10],a2[10],a3[10],i,j,repetido;

    printf("Digite os 10 numeros do primeiro array\n");
    for(i=0;i<10;i++){
        scanf("%d",&a1[i]);
    }

    printf("Digite os 10 numeros do segundo array\n");
    for(i=0;i<10;i++){
        scanf("%d",&a2[i]);
    }

    for(i=0;i<10;i++){
        a3[i] =  a1[i];
    }
    for(i=0;i<10;i++){
        a3[i+10] =  a2[i];
    }

    printf("Numeros repetidos:\n");
    for(i=0;i<20;i++){
        repetido = 0;
        for(j=0;j<20;j++){
            if (i != j && a1[i] == a1[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            printf("%d\n", a3[i]);
        }
    }

    return 0;
}
