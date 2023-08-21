#include <stdio.h>
int main(){
    printf("\n**************");
    printf("\nInicio do Programa 06\n");

    int tab[4][3],i,j;

    tab[0][0] = 35;
    tab[0][1] = 26;
    tab[0][2] = 12;
    tab[1][0] = 52;
    tab[1][1] = 74;
    tab[1][2] = 27;
    tab[2][0] = 93;
    tab[2][1] = 28;
    tab[2][2] = 49;
    tab[3][0] = 44;
    tab[3][1] = 60;
    tab[3][2] = 98;

    for(i=0;i<4;i++){
        printf("\nLinha %d ---> ",i);
        for(j=0;j<3;j++){
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
    printf("Fim do programa 06");
    printf("\n**************");

    return 0;
}
