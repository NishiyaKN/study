# 0902
- Memória ROM no PC serve apenas para inicializar o sistema, mas em sistemas menores (embedded) todo o porgrama está na ROM.
### Barramentos
![[Pasted image 20240919203957.png]]
 ![[Pasted image 20240919205443 1.png]]
- Largura de um barramento é a quantidade de linhas de um barramento, quanto mais linhas mais rápido o desempenho
- Clock é uma velocidade padrão, precisa disso para identificar as transações e otimizar, muito melhor trabalhar com ciclos contínuos
- Se a memória principal está enviando dados para a memória secundária, os demais componentes têm que esperar a liberação do barramento para não haver colisão dos sinais elétricos

- Transmissão paralela: UNIBUS, MCA, ISA, EISA, PCI, AGP
- Transmissão serial: USB, PCI-e, Hyper-Transport, Firewire

Tecnologia PCI Express
- opera no modo duplex completo (full-duplex)
- dados transmitidos em dois pares de fios (pistas)
- podem ser fabricados com slots de vários tipos conforme a quantidade de bits que vão sendo enviados (quantidade de pistas) de cada vez (PCI-e 1.0):
	- Conector PCI Express 1x – taxa de 250MB/s
	- Conector PCI Express 2x – taxa de 500MB/s
	- Conector PCI Express 4x – taxa de 1000MB/g
	- Conector PCI Express 8x – taxa de 2000MB/s
	- Conector PCI Express 16x – taxa de 4000MB/s
i
- Barramento de endereço armazena também a instrução


• SAS (Serial Attached SCSI)
Principais vantagens do barramento SAS são:
1. Velocidade de transferência de dados
O barramento SAS suporta taxas de transferência de dados muito mais altas do que o barramento SATA.
Enquanto o barramento SATA oferece taxas de transferência de até 6 Gbps, o barramento SAS pode atingir
taxas de até 12 Gbps, o que o torna ideal para aplicações que exigem alto desempenho.
2. Capacidade de armazenamento
O barramento SAS suporta uma maior capacidade de armazenamento do que o barramento SATA. Enquanto o
barramento SATA é limitado a discos rígidos de até 16 TB, o barramento SAS suporta discos rígidos de até 128
TB, o que o torna ideal para aplicações que exigem grande capacidade de armazenamento.
3. Confiabilidade
O barramento SAS é conhecido por sua alta confiabilidade. Ele utiliza um protocolo de comunicação robusto e
possui recursos avançados de detecção e correção de erros, o que garante a integridade dos dados
armazenados.
4. Escalabilidade
O barramento SAS oferece suporte à expansão de portas, o que permite a conexão de vários dispositivos em
uma única porta SAS. Isso torna o barramento SAS altamente escalável, permitindo que os usuários adicionem
mais dispositivos de armazenamento conforme suas necessidades crescem.

Algumas das principais aplicações do barramento SAS são:
1. Servidores de alto desempenho
O barramento SAS é amplamente utilizado em servidores de alto desempenho, que exigem uma
alta taxa de transferência de dados e grande capacidade de armazenamento. Ele permite que os
servidores acessem rapidamente os dados armazenados nos discos rígidos, o que melhora o
desempenho das aplicações.
2. Armazenamento em cloud computing
O barramento SAS é utilizado em soluções de armazenamento em cloud computing, que permitem
o armazenamento e o acesso remoto aos dados. Ele oferece a velocidade e a capacidade
necessárias para lidar com grandes volumes de dados, garantindo um acesso rápido e confiável aos
mesmos.
3. Armazenamento de dados corporativos
O barramento SAS é amplamente utilizado em soluções de armazenamento de dados corporativos,
que exigem alta confiabilidade e grande capacidade de armazenamento. Ele permite que as
empresas armazenem e acessem seus dados de forma segura e eficiente.
4. Uso combinado com a tecnologia RAID
Permite aumento de performance e segurança nos
dados corporativos com o uso conjunto das
tecnologias RAID 0, RAID 1, RAID 5, RAID 6 e RAID 10.
Teremos uma aula somente sobre a tecnologia RAID.