### Listas Ligadas
- Conjunto de nós que são definidos de forma recursiva.
- Cada nó tem um item de dado e uma referência ao próximo nó.
- O primeiro e último nó são chamados HEAD e TAIL
![[Pasted image 20240411185552.png]]
**Vantagens**
- Inserção de item na lista leva **tempo constante** (a partir da referência ao prévio nó)
- Podem crescer até o limite de memória da máquina virtual
**Desvantagens**
- Busca do nth elemento de um **array** é de tempo constante (índice)
- A busca do nth elemento de uma lista ligada é proporcional a n, sendo n o tamanho da lista. (A pesquisa se inicia a partir do HEAD até se encontrar de forma exaustiva o item procurado).

![[Pasted image 20240411185827.png]]
![[Pasted image 20240411190023.png]]
![[Pasted image 20240411190033.png]]
![[Pasted image 20240411190050.png]]
![[Pasted image 20240411185929.png]]
Podemos usar `N3.next = null` ou omitir
![[Pasted image 20240411190255.png]]
___
### INSERT
![[Pasted image 20240411201233.png]]
![[Pasted image 20240411201242.png]]
![[Pasted image 20240411201253.png]]
![[Pasted image 20240411201300.png]]
![[Pasted image 20240411201307.png]]
![[Pasted image 20240411201334.png]]
___
### Imprimir
![[Pasted image 20240413070132.png]]
![[Pasted image 20240413070204.png]]
![[Pasted image 20240413070225.png]]
![[Pasted image 20240413070312.png]]
___
### Alterar
![[Pasted image 20240413070533.png]]
___
![[Pasted image 20240413070541.png]]
![[Pasted image 20240413070546.png]]
![[Pasted image 20240413070607.png]]
___
### Cautions
![[Pasted image 20240413071010.png]]
**Problema 2: Lista vazia**
![[Pasted image 20240413070920.png]]
Para resolver criamos uma classe separada para manter controle da lista (HEAD e SIZE)
![[Pasted image 20240413071058.png]]
![[Pasted image 20240413071104.png]]
![[Pasted image 20240413071123.png]]
![[Pasted image 20240413071158.png]]
![[Pasted image 20240413071206.png]]
![[Pasted image 20240413071231.png]]
![[Pasted image 20240413071237.png]]
![[Pasted image 20240413071246.png]]