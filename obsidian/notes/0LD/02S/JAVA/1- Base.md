- Originalmente chamada Oak, presentemente propriedade da Oracle
- Ganhou popularidade por poder ser executada em qualquer ambiente que possua JVM
- Usado em apps mobile, sistemas embarcados, IOT e apps empresariais 
___
## Tipos de dados
- Primitivos:
	- byte
	- short
	- int
	- long
	- float
	- double
	- char
	- boolean
 - de Referência:
	Usados para criar objetos e lidar com tipos mais complexos de dados. São armazenados na memória como referências(**endereços**) para os objetos reais
	 - string
	 - classes
	 - array
Declaração de variáveis:
```java
int idade = 21;
double salario = 4000.50;
char genero = 'M'
String nome = "John";
```
___
## Operadores
- Atribuição:
```java
int a = 10;
int b = 20;
int c = 30;

int b += a; // 30
int c *=b; // 900
```
- Unário:
	Podem ser colocados antes ou depois da variável
	- ++
	- --
 - Comparação:
	 - ==
	 - !=
	 - > (>=)
	 - < (<=)
- Logico:
	- &&
	- ||
	- ! (not) ex: `!(a==b)`
	- ^ (xor)
 ___
## Funções / Métodos
Para fazer um método precisamos da Assinatura do método: tipo de retorno, nome e parâmetros, além do corpo do método.
```java
public static int somar(int a, int b){
	int resultado = a + b;
	return resultado;
}
```
### Entrada de dados
Importamos a classe Scanner, a qual nos fornece os seguintes métodos:
- nextInt (para ler int)
- nextDouble (double)
- next (string) 
```java
import java.util.Scanner;

public class EntradaDeDados{
	Scanner scanner = new Scanner(System.in);
	System.out.print("Digite um numero: ");
	int numero = scanner.nextInt();
	System.out.println("Numero digitado: " + numero);
}
```
___
## Condicionais
IF / ELSE:
```java
if(nota >= 90){
	System.out.println("Desconto na mensalidade");
}
else if(nota >=60){
	System.out.println("Passou")
}
else{
	System.out.println("Nao Passou")
}
```
SWITCH:
```java
int diaDaSemana = 1;
switch(diaDaSemana){
	case 1:
		System.out.println("Domingo");
		break;
	case 2:
		System.out.println("Segunda");
		break;
...
}
```
___
## Repetição
FOR:
```java
for (int i = 1; i < = 10; i++){
	soma += i;
}
```
WHILE:
```java
while (i <= 5){
	System.out.println(i);
	i++;
}
```
DO WHILE:
```java
do{
	System.out.println("Hello");
} while (i != 0);
```