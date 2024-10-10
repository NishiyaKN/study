# 1609
- Multiprocessamento - paralelismo - executa várias instruções por ciclo de clock
- CPI: ciclos por instruções, seu valor é a soma do CPI base e todas as contribuições de stalls, CPI de  pipeline ideal é uma medida do desempenho máximo que pode ser obtida pela implementação
- Pipelining é a principal técnica para otimização de CPU
- Em um CPU tradicional ele possui uma única unidade de controle, nas modernas tem um unidade de controle para cada microsinstrução
- Divide em estágio de pipe, cada etapa é processado um um core diferente.
- Todas as etapas ocorrem ao mesmo tempo, no mesmo clock
- Faz balanceamento de carga para que tenha uma velocidade padrão 

- Cada etapa padronizada em relação a outra em termo de tempo e com isso melhora o tempo de processamento, temos o processador fazer isso no clock do processador, ele também faz essa divisão dos estagio associado ao pipeline. Se houver um ciclo mais lento por haver uma quantidade de ciclo alta ele padroniza a velocidade do estágio. 
- O objetivo do projetista do pipeline é definir qual vai ser a carga ideal do estágio do pipeline, e o balanceamento que é o clock do cpu dividido pelo estágio de pipe, pega o mais lento para pegar o tempo de todos os estágio. Padroniza para garantir que todos os estágios terminem no mesmo tempo, e assim otimizar e controlar os estágios. 
- Tempo por instrução no processador com pipeline, considerandno condições ideais, será igual a:
![[Pasted image 20240921092621.png]]
**O ganho de velocidade do pipelining é, de modo ideal, igual ao número de estágios de pipe**
 - Piping tem um overhead: o tempo por instrução não terá seu valor mínimo possível
 - O ciclo do CPU vai ser reduzido pela pipeline, mas a vantegem que ao dividir em várias microestruções em estágios é a possibilidade de fazer o processamento de várias instruções simultaneamente. Ele reduz o CPI
 

- RISC - processador de instuções de tamanho reduzido, já tem uma velocidade mais rápida, se conseguir fazer com que ele trabalhe com pipeline vai ter um ganho de desempenho muito grande.  
- Para isso precisa criar registradores temporários para poder fazer controle do pipeline.
- Consiste em instrução de carga de dados, desvio de instruções (if else) e operações com números inteiros na ALU

- Números inteiros: em um número de 8 bits por exemplo, adiciona mais um bit na esquerda, podemos definir por exemplo que esse número será 0 se for negativo ou 1 se for positivo
- Número de ponto flutuante: uma conjunto de bits a direita do número binário para representar a mantissa
- Pipeline não trabalho com números de ponto flutuante no momento, somente para a parte mais complicada

- Processador RISC, feito para otimizar o processamento de mainframes. Cada instrução do RISC pode ser implementada em no máximo 5 ciclos de clock, que são:
- **ciclo de busca de instrução (IF)**
	- Envia o contador de programa (PC — Program Counter) à memória e busca a instrução atual a partir da memória. Atualiza o PC para a próxima instrução sequencial somando 4 (pois cada instrução utiliza 4 bytes) ao PC
- **ciclo de decodificação de instrução (ID)**
	- Decodifica a instrução e lê os registradores correspondentes aos especificadores de registradores, do banco de registradores (register file). Testa a igualdade nos registradores à medida que eles forem lidos, para um possível desvio. Estende o campo de offset da instrução com o valor do sinal, caso seja necessário. Calcula o possível endereço de destino do desvio somando o offset estendido com o valor do sinal ao PC incrementado
	- A decodificação é feita em paralelo com a leitura dos registradores - porque os especificadores de registradores ficam em um local fixo em uma arquitetura RISC - essa técnica é conhecida como decodificação de campo fixo
	- possibilidade da leitura de um registrador que não iremos usar
	- Para loads e operações imediatas com a ALU - campo imediato está sempre no mesmo lugar - podemos facilmente estendê-lo com o sinal - para ter uma implementação mais completa do RISC-V - calcular dois valores diferentes com sinal estendido - campo imediato para store está em um local diferente
- **ciclo de execução (EX)**
	-  ALU opera sobre os operandos preparados no ciclo anterior, realizando uma das quatro funções a seguir, dependendo do tipo de instrução:
	- Referência de memória: - ALU soma o registrador de base e o offset para formar o endereço efetivo
	- Instrução da ALU Registrador-Registrador: - ALU realiza a operação especificada pelo opcode da ALU - sobre os valores lidos do banco de registradores
	- Instrução da ALU Registrador-Imediato: - ALU realiza a operação especificada pelo opcode da ALU sobre - primeiro valor lido do banco de registradores - e o imediato com sinal estendido
	-  Desvio condicional: determina se a condição é verdadeira - Em uma arquitetura load-store - o endereço efetivo e os ciclos de execução - podem ser combinados em um único ciclo de clock
	- nenhuma instrução precisa: - calcular simultaneamente um endereço de dados - realizar uma operação sobre os dados
- **acesso a à memória (MEM)**
	- Se a instrução for um load - memória faz uma leitura usando o endereço efetivo calculado no ciclo anterior
	- Se for um store - memória escreve os dados do segundo registrador lido do banco de registradores - usando o endereço efetivo
- **ciclo de write-back (WB)**
	- Instrução da ALU Registrador-Registrador ou instrução load:
	- Escreve o resultado no banco de registradores, venha ele do sistema de memória (para um load) ou da ALU (para uma instrução da ALU).

Nessa implementação, as instruções de desvio exigem três ciclos, as instruções store exigem quatro ciclos e todas as outras instruções exigem cinco ciclos, não é ideal para conseguir o melhor desempenho.
### Pipeline para RISC
Podemos resolver isso usando o pipeline, onde cada um dos ciclos de clock acima se torna um estágio de pipe, cada instrução usa cinco cic.los de clock, e durante cada ciclo o hardware iniciará uma nova instrução
![[Pasted image 20240921093954.png]]
![[Pasted image 20240921094107.png]]
- pipeline pode ser imaginado como uma série de datapaths deslocados no tempo
- a figura mostra a sobreposição entre as partes do datapath, - com o ciclo de clock 5 (CC 5) mostrando a situação de estado fixo
- o banco de registradores é usado como uma fonte no estágio ID e como um destino no estágio WB - ele é lido em uma parte do estágio - escrito em outra usando uma linha sólida, à direita ou à esquerda, respectivamente - uma linha tracejada no outro lado

- IM: Instruction Memory
- DM: Data Memory
- CC: Clock Cicle

### Três observações:
##### Primeiro
- uso de memória separadas para instruções e dados
- normalmente implementação com caches de instruções e dados separadas
- uso de caches separadas elimina um conflito para uma única memória que surgiria entre a busca da instrução e o acesso à memória de dados

- caso o seu processador com pipeline tiver um ciclo de clock igual ao da versão sem pipeline
- sistema de memória precisará oferecer cinco vezes a largura de banda
- essa demanda aumentada é um custo do desempenho mais alto
##### Segundo
- banco de registradores é usado nos dois estágios:
	- um para leitura em ID
	- um para escrita em WB
- Realizar duas leituras e uma escirta a cada ciclo de clock. Para fazer isso no mesmo registradore, faza escrita na primeira metade do ciclo e a leitura na segunda.
##### Terceiro
- Figura C.2 não lida com o contador de programa PC para iniciar uma nova instrução a cada clock
- O incremento do PC a cada clock precisa ser feito durante o estágio de IF em preparação para a próxima instrução, e precisa de um somador para calcular o alvo do desvio emn potencial durante o ID (ALU faz a avaliação da condição de desvio, mas não precisa da ALU completa para avaliar a comparação entre dois registradores)
 - Fundamental garantir que as instruções no pipeline não tentem usar os mesmos recursos de hardware ao mesmo tempo, e que as instruções de diferentes estágios não interfiram umas nas outras. Essa separação é feita com a introdução de registradores de pipeline entre os estágios sucessivos do pipeline, o que garante que ao final de um ciclo de clock, todos os resultaods de determinado estágio sejam armazenados em um registradore que é usado como entrada para o estágio seguinte no próximo ciclo
 ![[Pasted image 20240921094954.png]]
 - Os registradores impedem a interferência entre duas instruções diferentes, além de transportar dados para determinada instrução.
 - Propriedade "sensível à borda" dos registradores (capturam dados somente em um instante espećifico) para sincronizar o fluxo de dados
Uso de registradores separados de dados e de instruções para cada