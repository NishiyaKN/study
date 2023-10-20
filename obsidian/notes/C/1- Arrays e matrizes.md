```c
int a[4];
int var;
a[1] = 3;
var = a[0];
```
## Matriz
![[Pasted image 20231015100326.png|280]]
Exemplo de programa que recebe 16 numeros em uma matriz 4x4 e depois imprime todos os valores
```c
int main(){
    int arr[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<4;i++){
        printf("\nLinha %d ---> \n",i);
        for(j=0;j<4;j++){
            printf("%d\n",arr[i][j]);
        }
    }
}
```
