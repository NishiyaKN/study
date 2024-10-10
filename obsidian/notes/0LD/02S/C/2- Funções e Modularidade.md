Modularizar um programa é dividir suas funcionalidades em diversas funções. 
Refinamento sucessivo (top-down) consiste em repetidamente decompor o problema em sub-problemas;

Declaramos uma fução dessa maneira: `tipo_retorno nome(tipo_argumento nome_argumento)`.
Podemos usar `void` para funções que não retornam nada ou que não recebem nenhum parâmetro:
```c
void hello(void){
	printf("Hello");
}
```

Em C, as funções devem ser declaradas antes de serem usadas, mas podemos declarar **protótipos** que ficam acima da função `main` que as executará:
```c
double quadrado(double x);
int main(){
	double y;
	y = quadrado(3.5);
}
double quadrado(double x){
	return x*x;
}
```

- Em C existe o conceito de **variáveis locais e variáveis globais**.
- As globais devem ser declaradas fora de qualquer função, **inclusive da main**.
- Passagem de parâmetros por valor - mudanças realizadas em variáveis passadas como parâmetros dentro da função que as recebe **não afetam a variável fora desse escopo**.
- Passagem de parâmetros por referência - podemos utilizar **ponteiros** para passar o endereço da variável e, desse modo, **modificar diretamente o conteúdo** dela dentro da função.
