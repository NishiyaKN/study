# 0909
### Ciclo de instrução
- CPU tem um registrador especial chamado contador de programa (CP), que indica onde está a próxima instrução na memória
- Cada estágio é feito em etapas e tem o controle para que tudo seja executado com sucesso

- **CPU para executar uma instrução:**
	- Solicita a leitura da memória enviando o endereço da instrução (CP)
	- A memória envia o dado (instrução) para o CPU
	- O CPU decodifica o dado como instrução
	- O CPU executa a instrução
- **Cálculo de endereço de instrução (pela Unidade de Controle)**: Calcula o endereço da próxima instrução a ser
executada
- **Busca de instrução**: ler uma instrução da memória e armazena no registrador
- **Decodificação da operação da instrução**: decodifica e analisa o código da instrução para determinar qual é a operação a ser realizada e os operandos a serem utilizados
- **Cálculo de endereço de operando**:  se a operação envolver a referência a um operando na memória ou estiver disponível via E/S, o endereço do operando será determinado 
- **Busca do operando**: O operando é localizado na memória ou é lido no dispositivo de E/S
- **Operação sobre os dados**: a operação indicada na instrução é executada
- **Armazenamento de resultado**: resultado é escrito na memória ou no dispositivo de E/S

Na memória do registrador temos o dado processado, e precisa enviar para o armazenamento em disco, então faz o caminho inverso: registrador -> memória RAM -> caminhar até o disco. Ciclo da instrução vai concluir somente com o armazenamento do dado no dispositivo de disco.

![[notes/SDI/Media/Pasted image 20240909084035.png|650]]

Na maioria dos casos a próxima instrução é a que segue imediatamente instrução corrente. Quando necessário, a instrução deve fornecer um endereço de memória principal ou virtual
![[Pasted image 20240920085901.png|700]]

Os operandos fonte e destino podem estar localizados em uma das seguintes áreas:
- **Memória principal ou virtual;**
- **Registrador da CPU**, geralmente a CPU tem um ou mais registradores que podem ser referenciados pelas instruções de máquina;
- **Dispositivo de E/S**, a instrução deve especificar um módulo de E/S e um dispositivo para operação

### Representação de instruções 
![[Pasted image 20240920090106.png|700]]
- Instruções são dividadas em campos, e durante a execução é lida em um registrador de instruções (IR)
- Códigos de operação são representados por mnemônicos:
	- ADD Adição
	- SUB Subtração
	- MPY Multiplicação
	- DIV Divisão
	- LOAD Carregar dados da memória
	- STOR Armazenar dados na memória

### Tipos de instrução

**Linguagem de alto nível**:
- operações são expressas de uma maneira algébrica concisa  usando variáveis
**Linguagem de máquina**:
- operações são expressas de maneira mais básica  envolvendo a movimentação de dados de e para registradores

- um computador deve ter um conjunto de instruções  que permita ao usuário formular qualquer tarefa de processamento de dados.
- qualquer programa em uma linguagem de alto nível  deve ser traduzido para uma linguagem de máquina para que possa ser executado
- conjunto de instruções de máquina deve ser suficiente para expressar qualquer comando de uma linguagem de alto nível

- Processamento de dados, instruções aritméticas e lógicas
- Armazenamento de dados, instruções de memória
- Movimentação de dados, instruções de E/S
- Controle, instruções de teste e desvio

- Instruções aritméticas fornecem a capacidade computacional para processamento de dados numéricos
- Instruções lógicas (booleanas) operam sobre bits de uma palavra, como bits e não como números
- Instruções de memória move dados entre a memória e os registradores

![[Pasted image 20240920090603.png]]
___
