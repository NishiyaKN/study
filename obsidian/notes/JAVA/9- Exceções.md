## Exemplos
- NullPointerException - tenta acessar um objeto com valor nulo
- ArrayIndexOutOfBounsException - tenta acessar um índice inválido em uma array
- ArithmeticException - erro artimético como divisão por 0
- NumberFormatException - falha na conversão de um string em um número válido 
- IOException - erro de IO durante operações de leitura ou gravações de arquivos
___
## Bloco try-catch
Permite envolver um trecho de código que possa gerar uma exceção dentro do `try` e definir como lidar com elas dentro do block `catch`. Há também o bloco `finally` para opcionalmente executar um pedaço de código independentemente se o `try` for executado corretamente ou não. 
```java
public class ExemploTryCatch{
	public static void main(String[] args){
		try{
			int resultado = divide(10,0);
			System.out.println("Resultado: " + resultado);
		} catch (ArithmeticException e){
			System.out.println("Erro: divisao por zero");
		}
	}
}
public static int divide(int a, int b){
	return a / b;
}
```