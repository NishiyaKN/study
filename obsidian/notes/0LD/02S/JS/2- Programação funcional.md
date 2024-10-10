# Programação funcional

É um paradigma de programação que se baseia no conceito de funções matemáticas e evita mudanças de estados e dados mutáveis e as **funções são tratadas como cidadãos de primeria classe, podem ser utilizadas como se fossem variáveis**.
Ela incentiva a criação de funções puras (não tem efeitos colaterais e sempre retornam os mesmos resultados para os mesmos argumentos).
___
### Funções de primeira classe
Funções que são:
- atribuídas a variáveis
- passadas como argumento para outras funções
- retornadas como resultados de outras funções
``` js
const multiplicar = function(a,b) {
	return a * b;
}
```
___
### Funções de order superior
Funções que podem **receber outras funções como argumentos** ou retornar outras funções.
``` js
function aplicarOperacao(a,b,operacao){
	return operacao(a,b);
}
```
___
### Callback
É uma função passada como argumento para outra função.
```js
function calcularSoma(a,b,c){
	var resultado = a + b;
	c(resultado);
}
function mostrarResultado(resultado){
	console.log('O resultado e: ' + resultado);
}
calcularSoma(5,20,mostrarResultado);
```
___
### Função Anônima
Funções que não possem um nome
```js
const minhaFuncao = function() {
	console.log('Ola, mundo!');
}
minhaFuncao();
```
Normalmente usadas em callbacks ou quando são utilizadas apenas uma vez
```js
function saudar(nome,callback) {
	console.log('Ola, ' + nome + '!');
	callback();
}
saudar('Joao', function(){
	console.log('Espero que esteja tendo um otimo dia!');
});
```
___
### Função Seta
Normalmente usadas em conjunto com funções anônimas
```js
const saudacao = () =>{
	return 'Ola, mundo!';
}
console.log(saudacao());
```
- Não podem ser usadas para criar objetos com o operador `new`
- Não possuem seu próprio [[this]], herdam do contexto em que são definidas
- Se tiver apenas uma expressão como retorno, não precisa usar `return`
```js
const somar = (a,b) => a + b;
console.log(somar(2,3));
```
___
### Closure
Refere-se à capacidade de uma função lembrar do escopo em que foi criada, mesmo que ela seja executada fora desse escopo
- Permite que a função tenha acesso às variáveis e parâmetros do escopo onde foi definida, mesmo que esse escopo não exista mais.
- Ocorre quando uma função é definida dentro do escopo de outra função e, em seguida, a função interna (a função aninhada) é retornada ou passada como callback para outras partes do código.
![[Closure example.png]]