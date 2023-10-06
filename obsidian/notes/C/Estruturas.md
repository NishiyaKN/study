### Tipos de dados
- Simples (int, char, float, etc)
- Composto homogêneas (array)
- Composto heterogêneo (struct) 
### Definição
___
Estruturas são agrupamento de dados, parecido com **objetos**.
Exemplo:
```c
struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};
```
Após definir uma struct, devemos declará-la:
```c
struct cadastro c;
```
___
### Uso de structs
Para inserir dados em cada instância de struct podemos utilizar as seguintes funções:
```c
strcpy(c.nome,"John");
fgets(c.nome,30,stdin);

c.idade = 20;
scanf("%d",&c.idade);
getchar();
```
- `strcpy()` - Copia uma string para um valor do struct, pode ser utilizado com variáveis
- `fgets()` - Usado para atribuir uma string(ele pega input do usuário, define a quantidade maxima de caracteres, e o stdin é padrão)
- `scanf()` - Usado para atribuir valores numéricos. 
- `getchar()` - Usado para não dar erro com o `fgets()`. Após um `scanf()`, é enviado `\n`, e o `fgets()` se for executado após, irá receber esse `\n`.

Uma struct pode ser previamente inicializada:
```c
struct ponto{
	int x;
	int y;
}
struct ponto p1 = {10, 20};
```
___
### Array de estruturas
___
### Estrutura de estruturas
___
### TYPEDEF