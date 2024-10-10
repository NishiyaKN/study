## Introdução
Um ponteiro é um espaço reservado da memória usado para guardar o **endereço de memória** (valores inteiros, sem sinal) de outra variável. Um ponteiro **também é uma variável**.

Se for utilizado antes de ter seu valor definido, apontará para um endereço indefinido.

Deve ser declarada o seu tipo, seguido de `*` e o nome do pointeiro:
``` c
int *x;
struct ponto *p;
```

Um ponteiro pode ter seu valor como NULL:
``` c
int *p = NULL;
```

**O ponteiro armazena o endereço da variável para onde ele aponta:**
![[Pasted image 20231005205111.png]]

Para acessar o **endereço de memória**, utilizamos o operador `&`
Para acessar o **conteúdo** do endereço de memória, utilizamos o operador `*`
``` c
int x = 10;
int *p;
p = &x;
*p = 12;
```
Após a execução do código acima:
- `p` = endereço de `x`
- `*p` = valor de `x`
- `x` = `12`
___
## Operação com ponteiros
### Atribuição
``` c
int *p1, *p2;
int x = 10;
p1 = &x;
p2 = p1; // p2 = &c
```
Neste código, ambos os ponteiros apontam para o **mesmo endereço**. Se o valor contido nele for alterado, seja a partir de ambos os ponteiros ou a partir da variável inicial, o valor apontado por eles será alterado e continuarão iguais entre si.

``` c
int *p1, *p2;
int x = 10, y = 20;
p1 = &x;
p2 = &y;
*p1 = *p2; // x = y
```
Neste código, o valor do endereço apontado por p1 recebe o valor do endereço apontado por p2, ou seja, o **valor de x recebe o valor de y**.
### Soma e subtração
Podemos somar e subtrair de ponteiros para acessar próximos valores e valores anteriores da memória:
``` c
p++;
p--;
p = p + 10;
```
A quantidade de espaços que essas operações movimentam são relativos ao tipo de dado. Inteiros ocupam 4 bytes enquanto chars apenas 1.
### Operações ilegais
- Divisão ou multiplicação de ponteiros;
- Soma do endereço de dois ponteiros;
- Soma ou subtração de valores float ou double de ponteiros;
### Operações com os conteúdos apontados
Não existem restrições, somente devemos utilizar `*p` para relizá-las:
``` c
(*p)++; // *p + 1
*p = (*p) * 10; // *p * 10
```

### Operações relacionais
- Podemos usar `==` e `!=` para verificar se os ponteiros apontam para o mesmo lugar
(nesse caso `p1 = p2` seria igual, equanto `*p1 = *p2` seria diferente)
- Podemos usar `>`, `<`, `>=`, `<=` para verificar qual ponteiro aponta para uma posição mais alta na memória.
___
## Ponteiros genéricos
Normalmente, um ponteiro aponta para um tipo específico de dado, mas podemos fazê-lo genérico. Para acessar o conteúdo de um ponteiro genérico, é necessário converter para o tipo desejado:
``` c
void *pp;
int x = 10;
pp = &x;
printf("Conteudo: %d", *pp); // ERRO
printf("Conteudo: %d", *(int*)pp); // Conteudo: 10
```
___
### Ponteiros e arrays
Quando declaramos uma array, o computador reserva uma certa quantidade de memória para armazenar os elementos do array de forma sequencial. Dessa forma, **o nome do array é um ponteiro que aponta para o primeiro elemento do array.**
Exemplo:
``` c
int vet[5] = {1,2,3,4,5};
int *p;
p = vet;
```
![[Pasted image 20231005221329.png|299]]
O valor entre os colchetes [] representa o deslocamento a partir da posição inicial do array. O valor de `p[2]` é igual a `*(p+2)`, ou seja, o valor apontado por `p` + 2 posições pra frente.
Desse modo, temos que:
- `*p` = `vet[0]`
- `vet[index]` = `*(p+index)`
- `vet` = `&vet[0]`
- `&vet[index]` = `(vet + index)`

Exemplo de comparação para imprimir todos os dados de um array:
![[Pasted image 20231005222053.png|600]]
### Array multimensional
Apesar de terem mais de uma dimensão, são armazendas linearmente. Exemplo:
`array[5][5]`
![[Pasted image 20231006074119.png|600]]
Exemplo de percorrer um array de duas dimensões:
![[Pasted image 20231006074255.png|600]]
### Ponteiro para struct
Temos duas maneiras de utilizar um ponteiro para uma struct:
1. Acessar o conteúdo do ponteiro para struct pra somente depois utilizá-lo
``` c
struct ponto{
	int x,y;
};
struct ponto q;
struct ponto *p;
p = &q;
(*p).x = 10; //x = 10
```
2. Usar o operador seta `->`
``` c
struct ponto{
	int x,y;
};
struct ponto *p;
p->y = 20; // y = 20
// ponteiro->nome_do_campo
```
### Ponteiro para ponteiro
Podemos fazer com que um ponteiro aponte para um ponteiro que aponta para algum endereço da memória. Definimos isso a partir da quantidade de `*` antes do nome do ponteiro.
```c
char letra = 'a';
int *p1;
int **p2;
int ***p3;
p1 = &letra;
p2 = &p1;
p3 = &p2;
```
![[Pasted image 20231006083848.png|300]]