# 0812
### Organização do processador - Integração Hardware e Software
- OS, BIOS, I/O (focando nos registradores), processamento em ciclos a partir do clock do processador, saída de dados (registrador -> cache -> RAM -> disco)
Na arquitetura 64-bits os registradores são nomeados de r0..r15
- r0 (rax) - "acumulador",  usado para instruções aritméticas
- r3 (rbx) - "base"
- r1 (rcx) - "ciclos", usado em loops
- r2 (rdx) - armazena dados durante operações I/O
- r4 (rsp) - armazena endereço do elemento do topo da pilha de hw
- r5 (rbp) - base do stack frame (estrutura que armazena info de uma única chamada de função)
- r6 (rsi) - indice de origem de um comando
- r7 (rdi) - indice de destino de um comando
- r9..r15 - armazena variáveis temporárias

#### Principais tipos de barramento 
- **dados** (processo de **entrada** e **saída** de **dados**)
- **endereços** (define **onde** o dado deve ser lido ou escrito)
- **controle** (controla cada **ciclo** da CPU)

#### Ciclo de máquina
- Sinal de relógio para **sincronizar** as **operações** da CPU, se houver uma parada, para não ficar travado faz um **timeout** e segue a vida. 
- Medido em Hz, determina quantas instruções a CPU pode executar por segundo

#### Pipeline de instruções
- Microarquitetura para **otimização** maior do processamento - **multiprocessamento**
- Lê uma **nova** **instrução** **antes** que a **atual** **termine**, fila de instrução
- **Estagios** do **pipelining** permite várias instruções serem manipuladas **simultaneamente**
- Microinstruções divididas entre os cores da CPU ou entre diversas CPUs

#### RISC e CISC
- **Reduced** Instruction Set Computer / **Complex** Instruction Set Computer
- RISC - servidores/mainframe, para executar instruções **rapidamente**, reduzia as instruções em menores
- CISC - dados diferentes, **cálculos** **complexos**, trabalha com instruções maiores que tem uma execução mais lenta mas é **multiprocessamento**, no mesmo ciclo de CPI consegue executar **mais** **de** **uma** **instrução**, como leitura na memória, operação aritmética, e escrita na memória em um **mesmo** **ciclo**

#### Discos
HDD - eletromecânico, magnético, um ou vários pratos rígidos. Pode existir "buracos" no disco, quando faz alteração em um arquivo 
SSD - memória flash

#### RAID
- Para **servers**, trabalha com ao menos 2 discos, informação fica parte em um disco e parte no outro
- Melhor segurança 
- RAID 0 - Divisão dos dados em diferentes setores do disco, demora para regerar os dados em caso de falha
- RAID 1 - Espelhamento de disco, consegue regerar muito mais rapidamente os dados se houver falha em um

#### Chipset
- Melhora a **integração** do **hardware**, divide arquitetura do PC em **North** **Bridge** e **South** **Bridge**
- **NB** - dispositivos de **maior** **performance** - CPU, registrador, memória cache e RAM, barramentos
- **SB** - **menor** **performance**, I/O - discos, mouse, teclado, monitor

#### Armazenamento otimizado de dados em servidores de redes
- DAS - Direct Attached Storage - armazenamento de **vários** **discos** em **um** **server** (**pequena** **empresa**)
- NAS - Network Attached Storage - otimiza armazenamento de arquivos em **servidores** de **rede** **distribuída** em **WAN** (redes remotas) (pequena e **média** **empresa**)
- SAN - Storage Area Network - otimiza armazenamento de dados em vários **servers** de **rede**, mais rápido que o DAS, importante em **grandes** **empresas** que usam cloud computing, backup 24 horas

### Estudo de caso
- Otimização de hardware, revisões de produtos
- Talvez terá um seminário em grupo com todas as informações do semestre


___

Hardware deve estar associado ao software para o funcionamento adequado
1) BIOS -> controlar e analisar a disponibilidade dos componentes do hardware:
- Energização: bateria ou corrente elétrica
- Memória RAM, memória cache (dificilmente tem problema no cache, mas é bom checar)
- Acesso aos dispositivos de entrada e saída (e.g. disco hdd 0 não está funcionando)

2) Sistema Operacional -> somente disponível após a liberação da BIOS
- Controle de acesso ao usuário local / de rede
	- Usuário local -> controle biométrico ou por senha
	- Usuário de rede -> validação do perfil do usuário
		- Perfil de rede -> direitos de acesso
- Acesso ao ambiente operacional para o usuário
	- Criação / deleção de estrutura de direito
	- Acesso a um sistema aplicadivo
	- Impressão
	- Acesso rede remota / Internet 
	- Backup / restore
___
1)
a. 01101101 -> 1 + 4 + 8 + 32 + 64 = 109
b. 10110010 -> 2 + 16 + 32 + 128 = 178
c. 01010110 -> 2 + 4 + 16 + 64 = 86

2)
a. 54 -> 32 + 16 + 4 + 2 = 00110110
b. 201 -> 128 + 64 + 8 + 1 = 11001001
c. 173 -> 128 + 32 + 8 + 4 + 1 = 10101101

3)
a. 87 -> 1000.0111 -> 10000111
b. 1A6D -> 0001.1010.0110.1101 -> 1101001101101
c. BD3F -> 1011.1101.0011.1111 -> 1011110100111111

4)**Analisar em detalhes a Arquitetura de von Neumann. Descrever como deve ser feita a otimização, entre as estruturas/principais componentes da Arquitetura de Von Neumann. Os principais componentes da Arquitetura de Von Neumann são:**

A arquitetura de Von Neumann é composta pela CPU, memória, dispositivos de I/O e barrametos
A CPU é composta pela ULA (responsável por realizar operações matemáticas), Unidade de controle (garante que todos os processos sejam executados corretamente) e registradores (memória de baixo nível). A memória é composta pela memória RAM e armazenamento interno (HDD e SDD). Os dispositivos de Input são por exemplo teclado, mouse e monitor, e os barramentos são os caminhos onde os dados passam pela placa-mãe, conectando todos os componentes da arquitetura.

Para haver a gravação do disco por exemplo, os dados são transferidos por meio dos barramentos, saindo a partir do dispositivo de disco, sendo enviado para a memória RAM, que por sua vez envia o dado para estrutura da CPU, passando pela memória cache e sendo processado nos registradores.

- Memória interna -> memória cache, memória RAM
- CPU -> registradores, UAL, Unidade de Controle, processador
- Memória externa -> dispositivos I/O, HDD, SSD
- Barramentos -> tradicionais e de alta performance (SATA, SAS)

5.1) BIOS: Serve para controlar e analisar a disponibilidade dos componentes do hardware, se estiver OK realiza a liberação para incialização do PC
- Energização: bateria ou corrente elétrica
- Memória RAM, memória cache (dificilmente tem problema no cache, mas é bom checar)
- Acesso aos dispositivos de entrada e saída (exemplo: disco hdd 0 não está funcionando)
- Associado ao firmware e ao Sistema Operacional

5.2) Sistema Operacional: Somente disponível após a liberação da BIOS
- Controle de acesso ao usuário local / de rede
	- Usuário local -> controle biométrico ou por senha
	- Usuário de rede -> validação do perfil do usuário
		- Perfil de rede -> direitos de acesso
- Acesso ao ambiente operacional para o usuário
	- Criação / deleção de estrutura de direitos
	- Acesso aos sistemas de aplicativos
	- Impressão
	- Acesso rede remota / Internet 
	- Backup / restore
