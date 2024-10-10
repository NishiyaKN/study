- Armazenam dados através da magnetização da superfície do disco por meio de uma cabeça magnética
- Cada unidade pode ter **vários discos,** e **cada disco tem duas superfícies**
- Gira normalmente em velocidades de 5400, 7000, 10000 rpm 
- **Cada disco possui dois braços**, cada um com uma cabeça magnética na ponta
- Disco desliza cerca de 0.5 micron
- O braço pode movimentar a cabeça para qualquer ponto da superfície do disco
- Caso as cabeças toquem nos discos eles se danificam, não suporta grandes choques ou vibrações
- Quando o disco é desligado os braços recolhem automaticamente para não ter perigo de ter contato com o disco
- Disco é lido em trilhas circulares que podem ser lidas ou escritas à medida que o disco roda
- **Conjunto das trilhas correspondentes nas duas superfícies dos discos é chamado cilindro** (como se fosse traçado uma linha vertical passando por todos os discos)
- Número de cilindros depende de:
	- diâmetro dos discos
	- largura de cada trilha
	- precisão de posicionamento do braço
	- limite de capacidade do disco, etc
- Nunca se acessa apenas um byte, cada trilha possui vários blocos de bytes denominados **setores**
	- trilhas exteriores têm mais setores que as interiores
	- diâmetro é maior e o fator limitante é a densidade de bits
Exemplo disco de 2tb
- Possui 2 discos (4 superfícies)
- Cada superfície possui 500GB
- O tamanho de cada setor era de 512 bytes, agora é 4 KBytes

###### Tempo de acesso a um setor
Soma de 3 valores:
1. Tempo de procura de trilha - 10ms ou menos
2. Atraso rotacional - tempo médio de meia rotação, 7200rpm = 4ms
3. Tempo de transferência - depende da velocidade de rpm, densidade de bits no disco, núemero de bytes por trilha. Multiplica o tempo de leitura ou escrita pelo tamanho do setor.
Exemplo disco de 1TB
- 512 KBytes em média por trilha (1000 setores de 512 bytes)
- 7200 rpm (leitura de 120 trilhas/segundo)
- Taxa de transferência de 60 MBytes/s
- Setor de 512 bytes será lido em cerca de 0,008ms.

###### Latência
- Maior parte do tempo de acesso a um disco é gasto em espera
- CPU pode executar outras tarefas enquanto o controlador do disco executo o pedido de acesso ao setor
- Controlador de disco tem uma área de memória interna para aarmazenar pelo menos um setor
	- um setor é primerio lido para essa área, depois enviado para a CPU
	- em escrita a mesma coisa
	- funciona como um **buffer** 
- Mecanismo acima é necessário por
1.  Velocidade de rotação do disco é constante 
	 - O setor deve ser acessado no exato momento em que a cabeça passar por cima
	 - Se o processador estiver ocupado nesse momento, teria que esperar por mais uma rotação do disco
	 - Controlador do disco garante que o acesso seja feito no momento certo
2. Taxa de transferência do disco não é a mesma que a velocidade do processador
	- A área de memória do controlador funciona à velocidade do disco ao acessar o disco e à velocidade do processador quando é acessada por ele


Barramento SATA para PC ou servidores
Barramento SAS para servidores
###### SAS
- Serial Attached SCSI
- Permite a conexão de vários dispositivos de armazenamento em um servidor de rede por meio de uma unica contoladora
- SCSI origianal usava interface paralela

 NAS
- Tecnologia para ambientes empresarias que precisam de armazenamento centralizado
- Acessível a partir de qualquer dispositivo conectado à rede corporativa (LAN)
- Servidor de arquivos
SAN
- Rede dedicada de alto desempenho
- Grandes ambientes corporativos
- Caro