O Mapa de Karnaugh é muito útil para encontrar a expressão booleana mais simplificada a partir de uma tabela verdade. 
Para utilizarmos o mapa com 3 variáveis, precisamos primeiramente verificar as linhas da tabela onde a saída possui valor "1". Utilizaremos a tabela abaixo como exemplo:

| A     | B     | C     | S     |
| ----- | ----- | ----- | ----- |
| **0** | **0** | **0** | **1** |
| 0     | 0     | 1     | 0     |
| 0     | 1     | 0     | 0     |
| 0     | 1     | 1     | 0     |
| **1** | **0** | **0** | **1** |
| 1     | 0     | 1     | 0     |
| **1** | **1** | **0** | **1** |
| **1** | **1** | **1** | **1** |

Com isso, podemos desenhar o mapa de Karnaugh para obter a expressão booleana simplificada de maneira direta. Para 3 variáveis podemos desenhar uma tabela, onde o A é isolado na coluna à esquerda enquanto B e C estão juntos na parte superior, e preenchemos com todas as combinações possíveis dos valores que essas variáveis podem assumir. Exemplo do template abaixo:

| A \\ BC | 00  | 01  | 11  | 10  |
| ------- | --- | --- | --- | --- |
| 0       |     |     |     |     |
| 1       |     |     |     |     |

Devido à distância de Hamming, colocamos a combinação "11" após a combinação "01" pois entre ambas as combinações houve apenas uma modificação de valor (o B de valor 0 foi para 1). Se colocarmos a combinação "10" logo após "01", há a modificação de dois valores (o B de valor 0 foi para 1, e o C de valor 1 foi para 0).

Continuando o processo de utilização do mapa de Karnaugh de 3 variáveis, preenchemos o template acima com o número "1" os campos onde os valores das entradas correspondem às linhas da tabela verdade que possuem saída "1".

| A \\ BC | 00  | 01  | 11  | 10  |
| ------- | --- | --- | --- | --- |
| 0       | 1   |     |     |     |
| 1       | 1   |     | 1   | 1   |
A partir disso, selecionamos os pares de "1" que estão um ao lado do outro ou um em cima do outro, e verificamos qual é a entrada útil (a que não se altera de valor) e a entrada inútil (a que altera de valor) de cada par.  No exemplo acima, podemos verificar um par nos campos 000 e 100:

| A \\ BC | 00    | 01  | 11  | 10  |
| ------- | ----- | --- | --- | --- |
| 0       | **1** |     |     |     |
| 1       | **1** |     | 1   | 1   |
Podemos ver que no par acima, o valor para A é alterado (no campo de cima ele possui valor 0, no de baixo ele possui valor 1) então ele é considerado uma entrada inútil, enquanto o B e C são entradas úteis pois ambos permanecem com o valor 0 em ambos os campos. Temos então de início a expressão **¬B.¬C**, ambas as entradas estão barradas (negadas) pois ambas possuem valor 0, caso uma entrada possua valor 1, devemos colocar sem o barramento.

Podemos observar outro par de "1" nos campos de 111 e 110

| A \\ BC | 00  | 01  | 11    | 10    |
| ------- | --- | --- | ----- | ----- |
| 0       | 1   |     |       |       |
| 1       | 1   |     | **1** | **1** |
Nesse par, vemos que o valor para A e para B permanece "1" em ambos os campos, enquanto o valor de C alterna de 1 para 0. Descartamos então a entrada C e ficamos com a expressão **A.B**.

Juntando ambas as expressões que obtivemos com os pares de "1", temos a expressão final:
**S = ¬B.¬C + A.B**

Podemos confirmar essa se expressão está correta ao realizar o procedimento tradicional de obter a expressão completa e utilizar os postulados e propriedades da álgebra booleana para a simplificar. Nesse caso, estamos obtendo a expressão a partir dos mintermos (soma dos produtos):

| A     | B     | C     | S     | Mintermo     |
| ----- | ----- | ----- | ----- | ------------ |
| **0** | **0** | **0** | **1** | **¬A.¬B.¬C** |
| 0     | 0     | 1     | 0     |              |
| 0     | 1     | 0     | 0     |              |
| 0     | 1     | 1     | 0     |              |
| **1** | **0** | **0** | **1** | **A.¬B.¬C**  |
| 1     | 0     | 1     | 0     |              |
| **1** | **1** | **0** | **1** | **A.B.¬C**   |
| **1** | **1** | **1** | **1** | **A.B.C**    |

S = (¬A.¬B.¬C)+(A.¬B.¬C)+(A.B.¬C)+(A.B.C)
S = ¬B.¬C(¬A+A) + A.B(¬C+C)
S = ¬B.¬C(1) + A.B(1)
**S = ¬B.¬C + A.B**

Observações:
- Podemos formar pares no mapa de karnaugh com campos que estão em extremidades opostas, como se a tabela fosse um cilidro e ambas as extremidades estivessem em contato.
- Caso após formar todos os pares ainda reste algum "1" sem par, podemos utilizar o "1" que estiver perto dele, mesmo que este esteja fazendo par com outro "1"
- Dependendo de quais campos você seleciona para fazer pares, é possível obter mais de uma expressão, que apesar de parecerem diferentes, todas são corretas. 


os mintermos (soma de produtos), que são as linhas da tabela caracterizadas pela saída de valor 1. 

Para cada variável de entrada das linhas de mintermos, fazemos a multiplicação das variáveis, barrando cada variável cujo valor seja 0, e escrevendo a variável sem barra onde o valor for 1. 

Como estamos fazendo a soma de produtos, cada variável deve ter o operador AND entre as outras (A.B.C), e cada conjunto de produtos formado em cada linha deve ter o operador OR entre eles (A.B.C) + (-A.B.-C). Segue abaixo um exemplo:
