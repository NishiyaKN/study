### RAID
- uso de stripping de dados
- separação dos dados em diferentes setores e discos
- não existe espelhamento de discos
- permite recuperar partes dos dados caso ocorra danos em 1 disco
- se der problema no disco, irá perder parte da informação
- único disco lógico entre disco físico 1 e disco físico 0

- placa controladora da RAID, com memória

###### RAID 0
- mínimo de 2 discos
- autmento de performançe de gravação e leitura
- uso de técnica de stripping
- muito usado com hdd nas décadas de 80 e 90
- aumento de segurança 
- divisão dos dados em setores e discos diferentes

###### RAID 1 - espelhamento de discos
- mínimos de 2 discos, trabalha apenas em pares
- aumento de segurança em relação ao RAID 0
- espelhamento de discos
- discos com tecnologia hotswappable -> manutenção com servidor ligado
- retirar 1 disco danificado -> inserir o novo disco -> disco regerado
- mais usado do que o RAID 0 hoje em dia

###### RAID 2 - bits stripped
- mínimo de 2 discos, sendo um disco de dados e outro de ECC
- distribuição em bits (separação menor que setores)
- discos específicos para códigos de erro, duplicação desse discos
- checksum / checklist
- controle de leitura após a gravação
- problema de uso de grande quantidade de discos
- configurações válidas
    - 10 de dados, 4 de ECC
    - 4 de dados, 3 de ECC
    - checksum / checklist
    - controle de leitura após a gravação
    - problema de uso de grande quantidade de discos
- configurações válidas
    - 10 de dados (5 espelhados), 4 (2 espelhados) de ECC
    - 4 de dados (2 espelhados), 3 (ideal 4) de ECC 
- parou de ser usado por ser caro ter muitos discos, e muitos HDDs já possuem ECC

###### RAID 3 - bytes stripped
- semelhante ao RAID 2
- necessita de ao menos 3 discos, 2 dados 1 paridade
- configuração recomendada: 3 discos para dados e 1 disco de paridade
- gravação de discos devem ocorrer em sincronia, controladora faz isso
- leitura e gravação sequencial tem desempenho melhor
- leitura e gravação aleatória tem desempenho pior
- não é muito utilizado

###### RAID 4 - blocks stripped
- semelhante ao RAID 3
- dados divididos em vário discos, menos um que armazena elementos de paridade em blocos
- blocos são maiores que os bytes do RAID 3
- no mínimo 3 discos, 2 dados e 1 paridade
- configuração recomendada: 3 discos de dados e 1 disco de paridade
- melhor performance de leitura, por ter um volume maior de blocos de dados separados
    - uso para arquivos com grandes volumes de dados
- melhoria na integridade e confiabilidade de dados
- gravação com pior performance (grave e le paridade, se tiver erro faz de novo)
- não é muito utilizado