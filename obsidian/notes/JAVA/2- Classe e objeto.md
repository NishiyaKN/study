## Classe
Encapsulamento de atributos e métodos que definem o comportamento de um Objeto.
- É uma estrutura que define um tipo de objeto, ela serve como um **modelo** para criar objetos que possuem características comums.
- Uma classe representa um conjunto de **atributos** (variáveis) e **métodos** (funções) que os objetos criados a partir dessa classe terão.
- Entidade estática que existe em tempo de **compilação**.

Exemplo:
![[Drawing 2023-10-10 08.31.33.excalidraw|300]]
**Classe Pessoa** (super classe)
	Classes Prof, Func e Alunos (subclasses)
		Classes de Grad, Pós Grad e Médio (subclasses de subclasses)
- As subclasses, além de possuírem os dados da classe Pessoa, possuem seus próprios dados, isto é **especialização** - acrescentar métodos, definir novos atributos.
___
## Objeto
Uma **instância** criada a partir de uma classe, entidade dinâmica que existe em tempo de **execução**.
Exemplo:
```java
Carro carro1 = new Carro();
Carro carro2 = new Carro();

carro1.marca = 'Toyota';
carro1.modelo = 'Corolla';

carro2.marca = 'Honda';
carro2.modelo = 'Civic';

carro1.ligar();
carro2.acelerar();
```
___
### Diferença entre classe e objeto
- A classe é apenas uma **descrição** ou **modelo** que não consome memória durante a execução do programa.
- Os objetos são as **instâncias** reais criadas a partir dessa descrição e ocupam espaço na memória para armazenar os dados específicos de cada objeto.