# 1
- Utilizada na JVM
- **Multiparadigma** (OOP e funcional) - abstrações poderosas adicionais
- **Estaticamente tipada** (define se é int, string, double, etc), erros capturados em tempo de **compilação**
- Pode escrever código **assíncrono**
- Open source (Apache 2)
- Android desde 2017, recomendado desde 2019
- Precisa do JDK, seta o caminho do JDK como env JAVA_HOME
___
# 2

Declarações podem conter expressões, mas por si só, não são avaliadas para um valor;
Declarações são instruções que definem variáveis, funções, classes ou outros elementos do código;
Diferentemente de expressões, que sempre retornam um valor, as declarações servem para estruturar o programa e não produzem um valor diretamente.
```kotlin
val b: Boolean
b = (9 == 9)
println(b) // true
```

```kotlin
fun soma(a: Int, b: Int): Int{
	return a + b
}
```

- Atribuições em Kotlin não retornam valor:
```kotlin
while ((x = a % b) != 0){ // いけない！！！
	a = b
	b = x
}

while (true){
	x = a % b
	if(x != 0){ // これでいい
		a = b
		b = x
	}
}
```

- Operador de equalidade referencial `===` compara se duas referências de objeto apontam para o mesmo objeto:
```kotlin
val lista1 = mutableListOf(1, 2, 3)
val lista2 = mutableListOf(1, 2, 3)
val lista3 = lista1

println(lista1 == lista2)   // true - conteúdo das listas é igual
println(lista1 === lista2)  // false - referências são diferentes
println(lista1 === lista3)  // true - referências são iguais
```
___

- Todos os tipos em Kotlin são **objetos** (números, string, boolean, etc) 
	- Long `123L`
	- Short `123.toShort()`
	- Byte `123.toByte`
	- Float `123.4F`
	- Char sempre com `''`
	- String sempre com `" "`
___
#### Arrays
```kotlin
val numeros = arrayOf(1,2,3,4,5)
prinln("${numeros[0]}")
numeros[2] = 52
prinln("${numeros.size}")
val soma = numeros.sum() // soma de todos os elementos
```
___
### Strings
- São imutáveis
```kotlin
val fullName = fName + " " + lName
val hello = "Hola $fullName"
val char = fullName[1]

for(char in nome){
	println(char)
}
```
___
### If
```kotlin
val res = if(x > 0){
	"foo"
}
else{ // quando if usado como expression precisa sempre do else
	"bar"
}

val res2 = if (x > 0) "foo" else "bar"
```
___
### when (substitui o switch)
```kotlin
when (expression){
	value1 ->{
		// executa caso value1
	}
	value2 ->{
		// executa caso value2
	}
	else -> {
		// se nenhum caso acima corresponder
	}
}
```
![[Pasted image 20240416202759.png]]
![[Pasted image 20240408200049.png]]
![[Pasted image 20240416202827.png]]
![[Pasted image 20240416202842.png]]
![[Pasted image 20240408200111.png]]
___
### For
```kotlin
val numeros = arrayOf(1,2,3,4,5)
for (n in numeros){
	println(n)
}

for (i in 1..10 step 2){
	println(i)
}
```
___
### Exception handling
![[Pasted image 20240408200323.png]]
![[Pasted image 20240408200337.png]]
![[Pasted image 20240408200406.png]]
![[Pasted image 20240408200415.png]]
![[Pasted image 20240408200432.png]]
___ 
# 03
### Funções
- Funções em Kotlin são “first-class citizens”. Pode-se usar uma função onde quer que se possa usar uma variável
- Pode-se passá-las como parâmetros para outras funções e retornar funções de outras funções também, ele suporta “higher order functions”.
- Funções [membro, de nível superior, locais]
```kotlin
fun soma(n1: Int, n2: Double): Boolean{ // : Unit (igual o void, pode ser omitido)
	return true
}
```
**Funções Single Expression**
```kotlin
fun soma(a: Int, b: Int) = a + b
```
**Argumentos default**
```kotlin
fun connect(
	hostname: String = "localhost"
	username: String = "mysql"
	passwd: String = "irineu"
		println("hostname = $hostname")
		println("username = $username")
		println("passwd = $passwd")
)

fun main(){
	connect("moriya","root")
	// OUTPUT //
	// hostname = moriya
	// username = root
	// passwd = passwd
}
```
**Named parameters**
```kotlin
fun format(dia: Int, mes: Int, ano: Int){
//
}
format(dia = 12, mes = 3, ano = 1203)

```
**Numero variavel de argumentos** vararg
```kotlin
fun soma(vararg num: Int): Int{
	return num.sum()
}
fun main(){
	println(soma(2,3,4)) // 9
	println(soma()) // 0
	println(soma(1,2)) // 3
	println(soma(num=3)) // ERRADO NAO COMPILA NAO FACA ISSO 
}
```

![[Pasted image 20240410161656.png]]
- Adiciona novas funções à classes existentes
- Útil para adicionar funcionalidades a classes sobre as quais não se tem controle (biblioteca padrão ou de terceiros)
___
# 4.1
- Kotlin é uma linguagem orientada a objetos e baseada em classes;
- Utiliza interfaces e classes para definir tipos personalizados;
- Tipos de dados básicos: Int, Char, Boolean, String, Byte, etc
- Tipo de dados personalizado (Classes): tipo de referência, suporta herança, pode ter métodos, coleta de lixo automática
### Classes
- Agrupam propriedades (dados) e funções (comportamentos)
```kotlin
class Aluno{
	var nome: String
	var nota1: Double
	var nota2: Double
	var nota3: Double

	constructor (nome: String, nota1: Double, nota2: Double, nota3: Double){ // inicializa as propriedades, construtor secundario
		this.nome = nome	
		this.nota1 = nota1	
		this.nota2 = nota2
		this.nota3 = nota3	
	}

	fun imprimirAluno(){
		println("Nome do Aluno: $nome)
		println("Nota 1: $nota1, Nota 2: $nota2, Nota 3: $nota3)
	}
	fun mediaAluno(): Double{
		return (nota1 + nota2 + nota3) / 3
	}
}

fun main(){
	val aluno = Aluno("John", 6.3, 8.0, 5.6)
	aluno.imprimirAluno()
	println("Media: ${aluno.mediaAluno()}")
}
```
- Pode possuir cabeçalho na função (o que fica entre parênteses após o identificador) que é o construtor primário
```kotlin
class Aluno(val nome: String, val cpf: String, val email: String){
	fun exibirInformacoes(){
		println("Nome: $nome, CPF: $cpf, Email: $email")
	}
}
```
- Construtor secundário fornece mais formas de inicialização de objetos
![[Pasted image 20240410175346.png]]
Basicamente para colocar valores padrão caso seja passado menos atributos na instanciação de um objeto
___
### Init
- Bloco de código que é executado quando um objeto de uma classe é criado;
- Pode ser usado para inicializar propriedades, executar tarefas de inicialização ou algum processamento antes que o objeto esteja totalmente inicializado;
- Opcional
- Escrito dentro do corpo da classe e é usado para complementar a lógica de inicialização do construtor primário.
```kotlin
class Pessoa(var nome: String?, var idade: Int){
	init{
		nome = "Ana" // Se pedir para printar o nome sem passar nenhum parametro, usa esse aqui
		println("Criando novo objeto")
	}
}
```
___
### Getters & setters
- Não é necessário os declarar, apenas se quiser fazer um getter & setter personalizado
```kotlin
class Pessoa(var nome: String)

fun main(){
	var pessoa = Pessoa("Aparecido")
	pessoa.nome = "Renato"
	println(pessoa.nome) // Renato
}
```
![[Pasted image 20240410195529.png]]
![[Pasted image 20240410195541.png]]
![[Pasted image 20240410195550.png]]
![[Pasted image 20240410195555.png]]
![[Pasted image 20240410195604.png]]
![[Pasted image 20240410195609.png]]
___
# 4.2
```kotlin
open data class Pessoa(val nome: String, val idade: Int){
	public var α
	private var β
	protected var γ

}
fun main(){
	val pessoa = Pessoa("John", 25)
	val (nome, idade) = pessoa
	var pessoa2 = pessoa.copy(nome = "Jonas")
}


```
- Visibilidade padrão é pública