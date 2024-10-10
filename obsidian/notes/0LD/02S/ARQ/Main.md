- CPU 
	- Micro processador é para coisas mais complexas
	- Micro controlador é mais simples, mas a base é a mesma
- RAM - desliga apaga tudo
- I/O 
	- baixa velocidade: teclado, mouse
	- alta velocidade: placa de rede/vídeo
- STORAGE - HD, SSD
- Chipset - circuitos integrados responsáveis pela comunicação entre todos os componentes do PC.
**Comunicação entre esses elementos é o barramento**
___
## Barramento (Bus)
- de dados: troca de dados no computador
- de endereço: indica o local onde a CPU deve ler ou gravar dados (define o maximo de RAM)
- de controle: regula os outros barramentos, controlando as operações (ex: diz se é read ou write, quanto tempo )

Há também os barramentos de IO (USB, SATA, PCI, etc)
### Protocolos
- Serial - envia um bit por vez
	- Usa um par de fios, um para cada direção do dado enviado
	- Unidirecional
	- Troca de informação entre dispositivos
	- Melhor para longa distância
- Paralelo - envia vario bits por vez
	- Usa varios fios, mas não pode enviar para ambos os lados ao mesmo tempo
	- Bidirecional
	- Troca de dados entre processador, memória, etc (barramentos) 
PCIe usa diversas conexões seriais (x2,x4,x8,x16,x32) que funcionam independente entre si, se fosse paralela cada disparada de bits teria que esperar que todos cheguem no destino corretamente, mas como é serial, cada linha tem seu próprio clock.
___
## Swap - cnp
Exemplo
RAM - 16GB - **RW 100ns nanosgundos**
- OS ocupa 2GB
- ->_Programa 1 5GB_ ->
- Programa 2 7GB
- Programa 3 4GB
Pede mais do que RAM existente
Pega o programa em menor uso (mais tempo dormindo) e realiza o swap

DISCO - 1TB - RW mais de **100000x mais lento** que RAM, **HD 10ms**
- ->_Programa 1 5GB_->
- Windows chama pagefile sys
- Linux chama de swap
___
## Memorias - cnp
Existe uma hirarquia, onde os processos que ocupam mais espaço vao pra os discos maiores e mais lentos.
- Registradores - memorias internas da cpu (também é volátil)
- Cache - memoria auxiliar, normalmente 1 a 3MB
	- L1, L2, L3
	- Hoje em dia fica embutida no CPU
	- Muito mais rápida que a RAM
 
Memórias auxiliares 
- Placa de vídeo
- Placa de rede (bem pouco mas tem memoria)
___ 
## Desempenho
- CPU - nucleos, frequencia, memoria cache, 32/64/128 bits
- RAM - frequencia, quantidade
- Disco
	- SSD - Velocidade de transferência, quantidade
	- HDD - RPM, quantidade

CD decidiu ser 704mb - 70 minutos pra gravar a setima sinfonia de beethoven
___
## CPU
Chipset - controlador - northbridge e southbride, alta e baixa velocidade
___
## RAM
Cada geração de DDR é incompatível com as outras, usa voltagem cada vez menor.
Slot de memoria na motherboard - se tiver 4 espaçoes e 2 memória, coloca um espaçado do outro ou 
___
**1. O que são as tecnologias SIMM ou DIMM para memórias?**
SIMM: Single Inline Memory Module, é uma placa de circuito que conta com diversos chips de memória, e possui um conjunto de contatos em uma única linha de pinos. É uma tecnologia mais antiga, suportando apenas 32 bits de transferência de dados e fornecendo armazenamento de 4MB a 64MB

DIMM: Double Inline Memory Module, é um placa de circuito que suporta os chips de SDRAM e todas as versões de DDR SDRAM, e possui contatos em ambos os lados, dispostos em duas fileiras paralelas. É a mais utilizada para equipamentos modernos, possuindo suporte para 64 bits de transferência de dados e fornecendo armazenamento de 32MB a 1GB.

**2. O que a tecnologia DDR de memória oferece?**
DDR – Double Data Rate - oferece uma velocidade de transferência de dados duas vezes maior que a SDRAM comum por suportar duas gravações e duas leituras por ciclo de clock da CPU.

**3. Redundâncias de disco para melhorar a segurança no armazenamento de dados. Quais tecnologias existem para isso?**
Utilizamos RAID – Redundant Array of Independent Drives – para isso. Essa tecnologia fornece uma maneira de armazenar dados em vários dispositivos de armazenamento por meio de diversos métodos:
- Striping: os dados são **distribuidos por várias unidades**, melhorando o desempenho e otimizando o espaço de disco, mas se um disco falhar, todos os dados serão perdidos.
- Espelhamento: armazena dados **duplicados em uma ou mais unidades**, proporcionando redundância para que a falha de um disco não acarrete na perda dos dados, mas reduz o tamanho do disco pela metade.  
- Paridade: fornece verificação básica de erros e tolerância a falhas, armazenando **somas de verificação separadamente dos dados**, permitindo a reconstrução dos dados sem perda de velocidade e capacidade.
- Dupla paridade – fornece toleância a falhas de até duas unidades com falha.

**4. Por que a partir de um determinado momento da história dos microprocessadores, as empresas começaram a projetá-los com vários núcleos?**
Isso se deve ao fato de que, conforme a frequência do clock foi aumentando, começaram a ser notadas as limitações em sua progressão devido a capacidade de resfriação térmica dos componentes dos processadores não ser o suficiente, ou seja, uma alta frequência demanda alto uso de energia elétrica, onde grande parte dela é convertida em calor que pode danificar o processador caso seja excessiva. Desse modo, a divisão de poder de processamento entre diversos núcleos permite que cada núcleo possua uma frequência não excessiva ao mesmo tempo em que trabalham simultaneamente para fornecer altas velocidades de processamento.

Se a frequencia for mto alta, os pinos do CPU que conecta no socket viram antenas, transformando energia eletrica em ondas eletromagnéticas, perdendo a efetividade
___
![[Pasted image 20231017190324.png]]
___

![[atv4.jpeg|500]]
![[IMG_20231011_184748.jpg|500]]
![[IMG_20231011_184758.jpg|500]]