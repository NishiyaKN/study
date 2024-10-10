Recursão ocorre quando uma função chama a si mesma repetidas vezes. Para gerar uma resposta, deve haver alguma condição de término. Um exemplo disso é o cálculo de um **fatorial**:
```c
int fatorial(int n){
	if(n <= 1){
		return 1; // fatorial de 0 ou 1 = 1
	}
	else{
		return n * fatorial(n-1);
	}
}
```
Em funções recursivas, sempre existem dois casos:
- **Casos básicos** - definidos de maneira não-recursiva, fixa, como `n=0` no caso do fatorial
- **Casos recursivos** - definidos de maneira recursiva, utilizando da própria função

![[Pasted image 20231007082217.png|450]]
___
## Recursão linear
É a forma mais simple de recursão. Uma única chamada recursiva é feita de cada vez.
Esse tipo de recursão é útil quando se deseja obter o primeiro ou último elemento de uma lista no qual os elementos restantes têm a mesma estrutura da estrutura original.
___
## Soma recursiva em array
```c
int somaRec(int A[],int n); // é passado o array e a quantidade de elementos nele
	if(n == 0){
		return A[0];
	}
	else{
		return somaRec(A,n-1) + A[n-1]
	}
```
![[Pasted image 20231007190001.png|500]]
___
## Série de Fibonacci
Sequência de números naturais na qual os primeiros dois termos são 0 e 1, e cada termo subsequente é a soma dos dois precedentes.
```c
int fibonacci(int n){
	if(n <= 1){
		return n; // caso basico
	}
	else{
		return (fibonacci(n-1) + fibonacci(n-2)); // caso recursivo
	}
}
```