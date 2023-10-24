Técnica de modelagem que permite criar novas classes a partir de classes pré-existentes, estabelecendo uma relação de **especialização**.
- Permite que a classe derivada herde todos os elementos da classe base, evita duplicação de código
- Modulariza o código e facilita sua manutenção
- As subclasses herdam todos os elementos da superclasse, e pode acessá-los de acordo com as **regras de visibilidade** 
- Uma subclasse pode **sobrescrever** um método da superclasse, fornecendo sua própria implementação.
- O **polimorfismo** permite que um objeto da subclasse seja tratado como um objeto da superclasse
***A classe derivada herda todos os membros não privados da classe base, incluindo seus atributos e métodos.***
___
## Criação de uma herança
Utilizamos a keyword `extends`. (Note que a superclasse não pode ter seus atributos e métodos privados pois a herança não permite que os dados privados sejam acessados diretamente pelas subclasses)
```java
//superclasse
public class Animal{
	protected String nome;
	public void emitirSom(){
		System.out.println("Animal emitindo som")
	}
}
//subclasse
public class Cachorro extends Animal{
	// Tem acesso ao nome e ao emitirSom()
	// Método próprio
	public void latir(){
		System.out.println("Cachorro latindo");
	}
}
```