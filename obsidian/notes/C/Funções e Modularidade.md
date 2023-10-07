Modularizar um programa é dividir suas funcionalidades em diversas funções. 

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

Em C existe o conceito de **variáveis locais e variáveis globais**.

Uma coisa interessante que podemos fazer em C é a passagem de argumentos **por referência**. Normalmente, ao passarmos uma variável como argumento para uma função, essa variável não é modificada durante a execução da função, entretanto, podemos utilizar **ponteiros** para passar o endereço da variável e, desse modo, **modificar diretamente o conteúdo** dela dentro da função.
