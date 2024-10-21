Circuitos combinacionais: depende de todas as combinações de entradas para dar uma saída, então a saída não interfere diretamente na entrada (atemporais, independe do tempo ou do estado anterior). 
- Sinal de saída depende somente as combinações dos sinais de entrada, não possui memória, ou seja, as saídas naõ dependem de nenhum estado anterior do circuito.
- Circuitos temporais, que dependem do passo anterior são chamados de circuitos sequenciais. 
- Na forma combinacional, as saídas autuam ao mesmo tempo.
- Estado tri-state, representado por um x, significa que o valor de uma entrada, não importa para o saída em questão.
### Codificadores
Um codificador é um circuito combinacional que converte um sinal de entrada com várias linhas em um código de saída com menos linhas (saída em binário). Ele faz isso identificando qual linha de entrada está ativa (apenas uma pode estar ativa de cada vez) e gerando a representação binária dessa linha de entrada como a saída. Por exemplo, em uma calculadora, quando clicamos na tecla "8", o circuito interno transforma essa única entrada em um valor binário de "1010".

Exemplo de codificador comercial: 74147 - decimal para binário com prioridade (10x4). Esse codificador é utilizado para transformar uma entrada decimal de 0 a 9 e converter para uma saída em binário com 4 posições. As entradas são ativas em nível baixo (quando uma entrada está em 0 ela é considerada ativada) e caso mais de uma linha seja ativada, a linha com o maior prioridade (com o número mais alto) é a que será considerada.
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXe00G0Osyz9TpkdY72ud3iULLcCj3OIFeshoteCmhVNIoyfvpppV-ii9h321vteDVcXtEsP6bbcbosfpqg_xGQV59bIv-ONmp_80QmwwhzqCx9bVs8fNSwchtHa5B4r2wKKr-pLBY1ShNxU-MIXzgIqRrk?key=RaRTtGPfncA5jZf0Fabrsw)
No circuito lógico acima, retirado de um datasheet da empresa Texas Instruments, pode-se observar que não há uma entrada que representa o número decimal zero. Isso se deve ao fato de que todas as entradas são ativas em nível baixo (0), então se nenhuma entrada estiver ativada (todas estiverem em 1), a saída é interpretada como zero. Isso ajuda a simplificar o circuito.
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc9f7fe7czrw3cVIZQDDZsFeGxp5sDJPwsN4DWy-kHoW50X8DlX97cEzlU01IiaHzG4RUnhxemAJUr7aZzpPA5O5I-1Km5LQdIvHOpGSDbO_xBS1SZ2Fjyujmq2FYpwE4_waGHnuKB9QHAJvPS9rj17CYKG?key=RaRTtGPfncA5jZf0Fabrsw)
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfgqZl8lAcxQ4UFnh0pkPI3y9az7sGKhJ8lN2ZHOcK_qwHY0fgJF2MeZwVtZ-xtS1OpZ5jX1IED7aJn_X8K2_T6Qgj6gdozcZXFnHUqcRVk9HcTDv0qbCBxDiAo6iSqb-97zKe0ReQ6olvmPptrPWjqm--p?key=RaRTtGPfncA5jZf0Fabrsw)
### Decodificadores
Um decodificador faz o processo inverso do codificador, ele recebe um código binário como entrada e ativa uma única linha de saída correspondente ao valor binário recebido.

Exemplo de decodificador comercial: 7442 - binário para decimal (4x10). Esse decodificador usa 4 entradas para o código em binário para converter em apenas uma saída em decimal.
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf4Y9XiF6Haikljk_gQnb364NLzFN1iRPKGhAG7kkhNpLBHSEz6CsdDIr_qP091Fu3uGdNo_AVjmCClTCpn9-aey-CAx2FF-Vais5QXtzuiY5TrDENyP7PNYduqCFUs2P-BNXnLcLBtEmo04ZDrjfIDGuqN?key=RaRTtGPfncA5jZf0Fabrsw)
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXddCoaUokJ9GPlDs1JYmJVzflBW-4YZwg8_gPTxPO6cKVAr2FJlvdUGQkzL0TxyqDiE5lciiQXblxYDnqepje073Q96Hb90bBUEDshhoiuTLtrC9BFeY-TB1SM8Gcp8rF6idM4sKFbC-pBYqMQdeusqNBo?key=RaRTtGPfncA5jZf0Fabrsw)
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc6GufaXxqdHf6zbElmeFYy-9pIMmRlSTQ5C9ceeCR_yEMTxzjmtrd5aYCPARO0THxXdrWJkAswW34cxgW6bwGwAOId8PyN0D6oljGSHRedHgXm8Tb1teRQPlRg7UkRHV1gE5zmgJpArxJHa1Yqcu58p9dK?key=RaRTtGPfncA5jZf0Fabrsw)
### Multiplexadores
Um multiplexador permite selecionar uma entre várias entradas para transmitir o sinal para uma única saída, tendo como base um conjunto de sinais (entradas) de controle para escolher qual entrada será transmitida. Um número n de entradas de controle podem selecionar 2^n entradas no multiplexador. 
![[Pasted image 20240929125632.png]]
Um multiplexador pode ser usado para implementar funções lógicas diretamente da tabela verdade sem necessidade de simplificação (caso seja implementado em apenas um chip), onde as saídas da tabela verdade correspondem às entradas do multiplexador (se for 0 liga a entrada no GND, se for 1 liga a entrada no VCC).
![[Pasted image 20240929125743.png]]
Exemplo de multiplexador comercial: 74151 - 8 linhas para 1 linha. Esse multiplexador recebe 8 entradas diferentes, possui 3 entradas de controle e uma entrada de Enable ativa em nível baixo (se for ligada para nível alto, irá ter saída nível baixo independente das outras entradas). Para a saída são fornecidos os valores de asserção e negação.
![[Pasted image 20240929133654.png]]
![[Pasted image 20240929133756.png]]
![[Pasted image 20240929133701.png]]

### Demultiplexadores
Um demultiplexador funciona de maneira inversa ao multiplexador. Ele recebe um sinal de entrada e o direciona para uma de suas várias saídas, de acordo com as entradas de controle. A relação de saídas (n) e seletores (m) é de n=2^m.

Exemplo de demultiplexador comercial: 74138 - 3 linhas para 8 linhas. Ele possui também a entrada de enable separado por 3 inputs, sendo dois deles ativos em nível baixo (E1 e E2) e um ativo em nível alto (todas as saídas serão nível alto exceto se E1 e E2 forem baixos e E3 for alto). 
![[Pasted image 20240929140518.png]]
![[Pasted image 20240929140530.png]]
![[Pasted image 20240929140538.png]]


### Unidade Lógica e Aritmética (ULA)
Unidade Lógica e Aritmética é uma parte essencial de um processador que executa operações aritméticas (adição, subtração, multiplicação, divisão), determina se um número é positivo, negativo ou zero, e executa operações lógicas (AND, NOT, OR, XOR). Os blocos lógicos e aritméticos são interligados por um circuito Multiplex e as entradas de seleção desse multiplexador define qual a operação é realizada pela ULA.

Exemplo de ULA comercial: 74181 - ULA de 4 bits. Ela consegue realizar no total 16 operações aritméticas e 16 operações lógicas, tendo 4 linhas de entrada para o operando A, 4 linhas de entrada para o operando B e 1 bit de entrada de Carry In. Para os sinais de controle, possui 4 linhas para seleção de função (se é adição, subtração, OR, AND, etc), um para escolha de modo (aritmético ou lógico) e um para Carry Generate. Ele possui 4 linhas de saída que representam o resultado da operação, 1 bit de Carry Out, 1 para Overflow Enable (útil para verificar se o resultado ultrapassou a capacidade de 4 bits), 1 para Carry Propagate e 1 para Carry Generate.
![[Pasted image 20240929162710.png]]
![[Pasted image 20240929162608.png]]
![[Pasted image 20240929162815.png]]