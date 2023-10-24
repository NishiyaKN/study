## Instância
Atributos:
- **Não estáticos**
- Pertencem a cada instância (objeto) 
- Cada objeto tem sua cópia dos atributos da instância. Não são compartilhados entre si.

Métodos:
- Não usam o modificador de acesso `static`
- Podem acessar tanto os atributos de instância quanto os métodos de instância

Para acessar ambos é necessário primeiramente criar uma instância com o `new`
```java
public class Main{
	public static void main(String[] args){
		// Criando uma instancia chamada obj 
		ExInstancia obj = new ExInstancia();
		// Acesso ao atributo de instancia
		obj.valor = 10;
		// Chamada ao metodo de instancia
		obj.setValor(5);
		// Chamada ao metodo de instancia que usa atributo de instancia
		int valorDobro = obj.getValorDobro();
	}
}
```
___
## Classe
Atributos:
- **Estáticos** - definidos usando o modificador de acesso `static`
- Pertencem à classe como um todo
- São compartilhadas por todas as instâncias criadas a partir dessa classe

Métodos:
- Podem acessar apenas atributos de classe e outros métodos de classe
- Definidos usando o modificador de acesso `static`

Para acessar ambos **não** é necessário criar uma instância do objeto.
```java
public class ExStatic{
	// Atributo de classe
	static int contador = 0;
	static void incrementarContador(){
		contador++;
	}
}

public class Main{
	public static void main(String[] args){
		// Acesso ao atributo de classe
		System.out.println(ExStatic.contador); // saida: 0
		// Chamada ao metodo de classe
		ExStatic.incrementarContador();
		System.out.println(ExStatic.contador); // saida: 1
	}
}
```
Exemplos de métodos de classe padrão:
```java
int absoluteValue = Math.abs(num);
String numberString = String.valueOf(num);
Array.sort(num);
```