Em JS, um objeto é uma coleção de pares chave-valor, onde cada chave é uma string que identifica um valor associado a ela.
### Criação de um objeto
```js
const pessoa = {
	nome: "Joao",
	idade: 30,
	profissao: "Engenheiro",
};
```
Para acessar os valores temos duas opções:
```js
console.log(pessoa.nome);
console.log(pessoa['idade']); // Note que a chave deve estar entre quotes
```
Adicionar novas propriedades para objetos pre-existentes:
```js
pessoa.cidade = 'Minas Gerais';
```
Remover:
```js
delete pessoa.profissao
```
As propriedades podem ser armazenados valores de numero, strings, booleanos, arrays, objetos e até funções.
___
### Métodos
Também segue o padrão de chave-valor.
```js
const pessoa = {
	nome: "Joao",
	idade: 30,
	saudacao: function(){
		console.log(`Ola, meu nome e ${this.nome} e tenho ${this.idade} anos.`);
	}
};

pessoa.saudacao();
```
___
**Os objetos são flexíveis e dinâmicos, o que significa que podemos adicionar, modificar ou remover propriedades e métodos em tempo de execução**
___
### Classes
Antigamente não existia constructor, e tinha que criar os métodos de classe a partir do `prototype`. Hoje em dia é criado desta maneira:
```js
class Pessoa{
	constructor(nome,idade){
		this.nome = nome;
		this.idade = idade;
	}

	saudacao(){
		console.log(`Ola, meu nome e ${this.nome} e tenho ${this.idade} anos.`);
	}
}

const pessoa1 = new Pessoa('Joao', 39);
const pessoa2 = new Pessoa('Maria', 26);

pessoa1.saudacao();
pessoa2.saudacao();
```
Os construtores são chamados quando se utiliza a keyword `new` para criar um novo objeto. 
- Uma classe pode possuir apenas um construtor.
- Se não existir um construtor, cria apenas um objeto vazio.
___
### Herança
A herança em JS é baseada em protótipos, cada objeto possui um protótipo associado a ele.
Uma classe ou função construtora pode herdar propriedades e métodos de outra classe através da cadeia de protótipos.
Para isso, antigamente era preciso que a subclasse chame a superclasse pela função `call()` ou `apply()`.
No ES6 usamos a keyword `extends`:
```js
// Superclasse
class Animal {
	constructor(nome){
		this.nome = nome;
	}

	som(){
		console.log('Fazendo barulho.');
	}
}

class Cachorro extends Animal{
	constructor(nome,raca){
		super(nome); // Chama o construtor da superclasse
		this.raca = raca;
	}
	latir(){
		console.log('Au au!');
	}
}

const rex = new Cachorro('Rex', 'Labrador');
console.log(rex.nome); // Rex
rex.som(); // Fazendo barulho.
rex.latir(); // Au au!
```
___
### Encapsulamento
Modificadores de acesso não estão presentes nativamente em JS.

Atributos privados:  coloca # na frente do nome
```js
class Pessoa{
	#nome; // Precisa declarar atributos privados antes de colocar no construtor
	idade;

	constructor(nome,idade){
		this.#nome = nome;
		this.idade = idade;
	}

	getNome(){
		return this.#nome;
	}
	setNome(nome){
		this.#nome = nome;
	}
}

const pessoa = new Pessoa('Joao', 30);
console.log(pessoa.getNome()); // Joao
console.log(pessoa.idade); // 30
pessoa.setNome('Maria');
pessoa.idade = 37;
console.log(pessoa.getNome()); // Maria
console.log(pessoa.idade); // 37
```