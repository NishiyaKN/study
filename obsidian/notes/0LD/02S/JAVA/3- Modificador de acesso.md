## Modificadores de acesso
São palavras-chave que definem o nível de **visibilidade** de classes, atributos, métodos e construtores. Eles controlam quais partes do código podem acessar ou modificar determinados elementos. 
- public - pode ser acessado por **qualquer classe**
- private - pode ser acessado apenas por outros elementos **dentro da mesma classe**
- protected - pode ser acessado por classes do **mesmo pacote ou por subclasses**
- default - caso não seja especificado nenhum modificador usa esse, e o elemento pode ser acessado **dentro do mesmo pacote**
```java
public class Carro{
	private String marca;
	private int ano;

	public void ligar(){
		System.out.println("Ligado")
	}
}
```
**Normalmente, os atributos são declarados como `private` enquanto os métodos são `public`**
