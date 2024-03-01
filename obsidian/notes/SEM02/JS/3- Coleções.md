# Coleções
## Introdução
Uma coleção é uma estrutura de dados que permite armazenar e organizar dados. Exemplos:
- Array - coleção de elementos ordenados
- Map - coleção de pares de chave-valor, semelhante a um objeto, mas possui chaves únicas
- Set - coleção de elementos únicos
- Object - coleção de pares de chave-valor
___
## Array
- Estrutura indexada
- Armazena valores em um único objeto (arrays são objetos)
- Tamanho dinâmico
- Heterogênios (pode conter tipos diferentes de dados)
- Elementos podem ser:
	- Tipos primitivos de dados
	- Objetos
	- Arrays
 - Acesso aos dados:
	 - Index (0-based)
	 - Métodos:
		 - forEach
		 - map
		 - filter
		 - find
## Criação e manipulação - Exemplos
```js
const num = [1,2,3,4,5];
console.log(num[3]) // 4

// Percorre um array e executa um callback
num.forEach((numero, index)=>{
	console.log(`Elemento ${index}: ${numero}`);
	console.log(numero*2);
})

// Cria um novo array aplicando um callback para os elementos do array original
const dobrados = numeros.map((n)=> n * 2);
console.log(dobrados); // [2,4,6,8,10]

// Cria um novo array apenas com certos elementos filtrados do array original
const pares = numeros.filter((n)=>n % 2 === 0);
console.log(pares) // [2,4]

// Encontra o primeiro elemento do array que atende aos requisitos
const primeiroPar = numeros.find((n)=> n % 2 === 0);
console.log(primeiroPar) // 2
```
## Desestruturação de array
```js
const num = [10,20,30];
const [n1,n2,n3] = num;
console.log(n1) // 10
console.log(n2) // 20
console.log(n3) // 30
console.log(num) // [10,20,30]
```
## Operador spread
Permite copiar e combinar elementos de arrays, representado por `...` seguido de um array ou objeto.
```js
// Copiar arrays
const num = [1,2,3];
const copiaNum = [...num];
console.log(copiaNum); // [1,2,3]

// Concatenar arrays
const num2 = [4,5,6];
const catNum = [...num1, ...num2];
console.log(catNum); // [1,2,3,4,5,6]

// Adicionar elementos em uma nova copia do array
const numComNovoElemento = [...num, 4];
console.log(numComNovoElemento); // [1,2,3,4]
```
## Operador Rest
Pode ser usado como parâmetro de função. 
```js
function somar(...num){
	let result = 0;
	num.forEach((num)=>{
		result += num
	});
	return result;
}
console.log(somar(1,2,3)); // 6
console.log(somar(10,20)); // 30
```
No código acima, a função `somar` tem como parâmetro `...num`, isso significa que pode ser passado **qualquer número de elementos** para serem processados nessa função.

Podemos fazer a desestruturação de arrays:
```js
const num = [1,2,3,4,5];
const [primeiro,segundo, ...resto] = num;
console.log(primeiro); // 1
console.log(segundo); // 2 
console.log(resto); // [3,4,5]
```
___
## Map
____
## Set

Tanto map quanto set nao caem na n1 ent vo fazer isso dps 