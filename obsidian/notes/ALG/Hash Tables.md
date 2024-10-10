Endereçamento direto, que seria colocar as chaves em ordem, não é viável para a maioria dos casos em que se deseja armazenar muitas informações. O acesso ao valor é fácil pois cada chave é armazenada na posição que a chave se define (chave 000 fica na posição 0, 001 na posição 1, etc.)

Tabela dispersão - usa função hash h(x;M)=p onde x é a chave e M é a quantidade de elementos e p é a posição. A imagem dela deve cobrir todos os elementos de 0 a n-1.

Função mais utilizada para fazer hash é a função módulo h(x;M)=x%M 

A ideia é ao invés de colocar os elementos direto nas posições do vetor, alocamos um vetor com menos posições (como 10 posições por ex) e usamos a função hash para mapear as chaves em nosso vetor. Usando a função do módulo, podemos fazer h(x;10) = x % 10, que sempre irá dar um número entre 0 a 9 e todos os números são prováveis, e extraímos o último dígito do número. Em cada posição da tabela há as chaves e os dados correspondentes.

[inserir imagem do https://www.youtube.com/watch?v=osy1xBefHsU]

Quando é mapeado duas ou mais chaves na mesma posição do vetor, há a colisão, que é algo inevitável. 

Uma boa função hash minimiza o número de colisões, deve ser projetada dessa forma. Outra característica preferível é que a função espalhe as chaves pelo vetor, ou seja, que todas as posições da tabela hash sejam igualmente prováveis de serem atribuir uma chave, assim a probabilidade de haver colisões é a mesma para todas as posições.

**Probabilidade de colisão é menor quando o número é primo, então o recomendado é colocar o número de posições igual a um número primAo**

**Busca sequêncial** - pra buscar um dado em um bd, busca em ordem de 0 até n, um dos piores meios de fazer uma busca em um bd
**Busca binária** - pressupõe que o vetor está ordenado, então devemos criar um vetor já ordenado ou ordenar um vetor pré-existente, que custa muito poder computacional.
### **Tabela hash** - buscas mais eficientes
###### Valor, Chave, Função
- **Valor** é o mesmo do **índice** do vetor, vai de 0 até n-1. Deve ser um **int**
- **Chave** é o que vamos colocar dentro do vetor, e o que iremos usar para fazer a **busca**, pode ser **int, string, boolean**, etc. Devemos pegar a chave e transformar em um valor (índice).
- Função hash/espalhamento/mapeamento faz isso de transformar uma chave em um valor (índice).
###### Função hash boa
- Produz pouca colisão
- Facilmente computável
- Uniforme para todos os casos

### Tratamento de colisões
###### Encadeamento exterior (separado)
 Listas Encadeadas, coloca as chaves de modo externo ao vetor
 - Ao invés de colocar a chave no índice do vetor, coloca um endereço apontando para a lista encadeada, e nesse lista encadeada coloca as chaves
 ![[Pasted image 20241004131443.png]]

###### Encadeamento interior (aberto)
- Heterogênio
	- Coloca algumas posições a mais no vetor para armazenar as colisões
	- Se for remover alguma chave, tem que especificar que está disponível e não vazio, pois se o sistema ver que está vazio, vai achar que não existe na chave e/ou não existe nos campos de colisão. Podemos colocar nos campos vazios por exemplo o valor "-1" e os campos disponíveis "-2" 
	![[Pasted image 20241004132008.png]]
- Homogêneo (teste linear)
	- Se houver colisão, coloca a chave na próxima posição que encontrar vazia ou disponível.
	- Se for buscar alguma chave, procura onde deveria estar e em todas as posições abaixo dela, até que encontre uma vazia (pois se a chave estivesse em algum lugar do vetor, não teria nenhum espaço vazio até ela, mas pode haver um espaço disponível).
	
	![[Pasted image 20241004133149.png]]

![[Pasted image 20241004133837.png]]G




### Pilha vs Fila