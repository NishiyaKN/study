### Tipos de dados
- Simples (int, char, float, etc)
- Composto homogêneas (array)
- Composto heterogêneo (struct) 
### Definição
___
Estruturas são agrupamento de dados, parecido com **objetos**. Podem ser vistos como um novo tipo de dado.
Exemplo:
```c
struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};
int main(){
	struct cadastro c;
	c.idade = 18;
}
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
### TYPEDEF
Comando usado para definir um novo tipo de dado (basicamente apenas renomear um já existente):
```c
typedef int inteiro;
int main(){
	int x = 10;
	inteiro y = 20;
}
```
No código acima, tanto `int` quanto `inteiro` se referem ao mesmo tipo de dado.
Sua utilidade nesse contexto refere-se a possibilidade de **dar nome à structs** para que não tenha que ficar digitando `struct` toda vez:
```c
typedef struct
{
	float Peso;
	int Idade;
	float Altura;
} Pessoa;
int main(){
	Pessoa Joao; // struct Pessoa Joao;
	Joao.Idade = 15;
	Joao.Peso = 60.5;
	Joao.Altura = 1.89
}
```
___
### Array de estruturas
Usamos a seguinte sintaxe para criar e manipular um array de estruturas:
```c
struct cadastro c[4];
int i;
for(i=0;i<4;i++){
	gets(c[i].nome);
	scanf("%d",&c[i].idade);
}
```
___
### Atribuição de estruturas
Somente pode ser feita se ambas as estruturas forem as **mesmas**. Serve para **copiar** os dados de uma estrutura para outra.
```c
struct cadastro c1,c2;
c1 = c2;
// Or with arrays:
struct cadastro c[10];
c[1] = c[2];
```
___
### Estrutura de estruturas
Podemos declarar uma estrutura que use outra estrutura como um de seus atributos. Para acessar os atributos aninhados, utilizamos outro `.`
```c
struct endereco{
	char rua[50];
	int numero;
};
struct cadastro{
	char nome[50];
	int idade;
	struct endereco ender; // HERE
}

strcpy(c.ender.rua,"Rua Raul");
c.ender.numero = 123;
```
![[Pasted image 20231007073116.png|200]]
Para inicializar uma estrutura de estrutura:
```c
struct ponto {
	int x,y;
}
struct retangulo{
	struct ponto inicio,fim;
}
struct retangulo r = {{10,20},{30,40}};
```