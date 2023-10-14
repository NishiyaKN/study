## Classe abstrata
É uma classe que **não pode ser instanciada**.
- Não é possível criar objetos diretamente a partir de uma classe abstrata
- Serve como classe base para outras, **fornece estrutura comum** e funcionalidade para as subclasses
- Precisa ser **estendida por subclasses concretas** para ser utilizada
- Pode ter métodos abstratos (**possui apenas a assinatura (nome, parâmetros e tipo de retorno**)
- Pode ter métodos concretos
- Pode ter construtores e atributos
- Fornece herança e polimorfismo

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
- Semelhante a uma classe abstrata, mas **não pode conter implementações de métodos**(todos os métodos são implicitamente absatratos, não precisa usar a keywork `abstract`)
- Para utilizar uma interface uma classe de implementá-la com `implements` 
- Uma classe pode implementar múltiplas interfaces
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
public class Main{
	public static void main(String[] args){
		Imprimivel documento = new Documento();
		documento.imprimir();
	}
}
```
 