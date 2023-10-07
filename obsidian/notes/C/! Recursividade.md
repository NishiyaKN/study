Recursão ocorre quando uma função chama a si mesma repetidas vezes. Para gerar uma resposta, deve haver alguma condição de término. Um exemplo disso é o cálculo de um fatorial:
```c
int fatorial(int n){
	if(n < 1){
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

