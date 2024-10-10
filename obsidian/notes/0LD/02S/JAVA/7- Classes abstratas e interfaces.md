## Classe abstrata
É uma classe que **não pode ser instanciada**. 
- Não é possível criar objetos diretamente a partir de uma classe abstrata
- Serve como classe base para outras, sua principal função é **fornecer estrutura comum** e funcionalidade para as subclasses
- Precisa ser **estendida por subclasses concretas** para ser utilizada
- Pode ter métodos abstratos (**possui apenas a assinatura (nome, parâmetros e tipo de retorno**)
- Pode ter métodos concretos
- Pode ter construtores e atributos
- Fornece herança e polimorfismo

- São úteis para modelar conceitos abstratos e compartilhar funcionalidades comuns entre classes relacionadas.
- Fornecem uma forma de organiza e estruturar o código, incentivando a reutilização e a extensibilidade

```java
public abstract class Animal{
	protected String nome;
	protected int idade;

	public Animal(String nome, int idade){
		this.nome = nome;
		this.idade = idade;
	}

	public abstract void emitirSom();

	public String getNome(){
		return nome;
	}
	public String getIdade(){
		return idade;
	}
}
public class Gato extends Animal{
	public Gato(String nome, int idade){
		super(nome, idade);	
	}
	@Override
	public void emitirSom(){
		System.out.println("O gato " + nome + " esta miando.");
	}
}
public class Main{
	public static void main(String[] args){
		Animal animal1 = new Gato("Whiskers", 5);
		animal1.emitirSom();
	}
}
```
___
## Interface
É uma coleção de métodos abstratos e constantes (variáveis) que definem um conjunto de comportamentos de uma classe.
- Utilizada para estabelecer um contrato entre a interface e a classe que a implementa
- Permite herança múltipla de interfaces
- Uma classe pode implementar múltiplas interfaces
- Semelhante a uma classe abstrata, mas **não pode conter implementações de métodos**(todos os métodos são implicitamente abstratos, não precisa usar a keywork `abstract`)
- Para utilizar uma interface uma classe de implementá-la com `implements` 
- Uma interface pode extender outra interface, criando uma hierarquia
- Permite o polimorfismo 
```java
public interface Imprimivel{
	void imprimir();
}
public class Documento implements Imprimivel{
	@Override
	public void imprimir(){
		System.out.println("Imprimindo documento...");
	}
}
public class Imagem implements Imprimivel{
	@Override
	public void imprimir(){
		System.out.println("Imprimindo a imagem...");
	}
}
public class Main{
	public static void main(String[] args){
		Imprimivel documento = new Documento();
		documento.imprimir();
	}
}
```
 