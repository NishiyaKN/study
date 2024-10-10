![[Pasted image 20240922101036 1.png]]
![[Pasted image 20240922101220 1.png]]
![[Pasted image 20240922102353 1.png]]

- Cirucuitos digitais são construídos a prtir de um pequeno número de elementos primitivos: **portas lógicas**, que são implementações físicas da álgebra de Boole

1. Existem 2 tecnologias principais de construção de portas lógicas:

•a bipolar, que pode ser do tipo TTL (Transistor-Transistor Logic) ou
ECL (Emitted-Coupled Logic)
•a MOS (Metal Oxide Semiconcuctor) com seus derivados PMOS, NMOS e
CMOS
2. As portas TTL são mais rápidas que as ECL que, por sua vez, são mais rápidas que as
MOS
3. As portas MOS são mais lentas mas tem menor consumo (muito usadas em
memórias)
![[Pasted image 20240922144312 1.png]]

### Circuitos Combinacionais

Chamamos de circuitos combinacionais àqueles cujas saídas são determinadas exclusivamente
pelos valores de suas entradas.
Os circuitos combinacionais mais usados no projeto de processadores sâo: os multiplexadores, os
decodificadores, os comparadores e as matrizes lógicas programáveis

##### O circuito muliplexador
O MUX contém 2^n entradas de dados, n entradas de controle e1 saída. As entradas de controle selecionam a entrada de dados que será enviada para a saída

•Aplicações típicas do MUX: Implementação de qualquer função booleana.
•Conversão paralelo-série: Modificando sequencialmente as linhas de controle, os dados de entrada são colocados, em série, na linha de saída
![[Pasted image 20240922144459 1.png]]

### O circuito decodificador
O circuito decodificador recebe na entrada um número de n bits, utilizando-os para selecionar ( ou seja, colocar em 1) exatamente uma de suas 2^n entradas

Uma aplicação típica do decodificador é o endereçamento de partes de uma memória. Exemplo: Um decodificador 3x8, do tipo apresentado na figura 3.13, pode selecionar um dos 8 chips de memória que podem estar ligado na suas saídas (veja detalhes no livro) 
O circuito dual do decodificador é o codificador.
![[Pasted image 20240922144816 1.png]]

### O circuito comparador
Um circuito comparador, como o mostrado na figura 3.14, serve para comparação de 2 palavras colocadas nas suas entradas.
Quando as palavras são iguais sua saída é igual a 1
Quando as palavras são diferentes sua saída é igual a 0
Os circuitos comparadores são usados principalmente para execução de instruções condicionais, do tipo if, e instruções de loop, do tipo while e for.
![[Pasted image 20240922144847 1.png]]