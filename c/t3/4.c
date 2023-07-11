#include <stdio.h>
int main(){
int sexo[1000],idade[1000],altura[1000],i,alturaF=0,idadeM=0;
double idadeTotal, somaAlturaF = 0, somaIdadeM = 0, percentual = 0;
    for(i=0;i<1000;i++){
        printf("Digite o sexo 0 (F) ou 1 (M)\n");
        scanf("%d",&sexo[i]);
        printf("Digite a idade\n");
        scanf("%d",&idade[i]);
        printf("Digite a altura\n");
        scanf("%d",&altura[i]);
    }
    for(i=0;i<1000;i++){
        idadeTotal += idade[i];
        if(sexo[i] == 0){
           somaAlturaF += altura[i]; 
           alturaF++;
        }
        if(sexo[i] == 1){
            somaIdadeM += idade[i];
            idadeM++;
        }
        if(idade[i] >= 18 && idade[i] <=35){
            percentual++;
        }
    } printf("Media de idade: %.2lf\nMedia altura mulheres: %.2lf\nMedia idade homens: %.2lf\nPercentual de pessoas entre 18 e 35 anos: %.2lf",idadeTotal/1000,somaAlturaF/alturaF,somaIdadeM/idadeM,percentual/1000*100);
}
