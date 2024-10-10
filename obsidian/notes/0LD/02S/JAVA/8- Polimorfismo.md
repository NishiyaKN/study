Polimorfismo é a capacidade de um objeto ser tratado de diferentes formas, dependendo do contexto em que é usado.
- Maior flexibilidade e reutilização de código.
## Polimorfismo de sobrecarga (overloading)
- Sobrecarga de métodos
- Ocorre quando uma classe possui vários métodos com o mesmo nome, mas com parâmetros diferentes
- O compilador seleciona o método adequado
 ```java
public class Calculadora{
	public int somar(int a, int b){
		return a + b;
	}
	public double somar(double a, double b){
		return a + b;
	}
}
```
___
## Polimorfismo de sobrescrita (overriding)
- Sobrescrita de métodos
- Ocorre quando uma classe derivada fornece uma implementação específica para um método que é definido em sua classe base
- Usa a mesma assinatura mas ignora a implementação do método na classe base
```java
class Animal{
	public void emitirSom(){
		System.out.println("Animal emitindo som");
	}
}
class Cachorro extends Animal{
	public void emitirSom(){
		System.out.println("Cachorro latindo.");
	}
}
```
Opcionalmente utiliza @Override acima do método para indicar melhor