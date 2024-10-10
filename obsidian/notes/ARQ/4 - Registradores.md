# 0826
### Registradores 
- São medidos pelo número de bits que conseguem conter (32-bit e 64-bit)

##### Categorias de registradores
- **Uso geral (genérico) - usado para quaisquer fins**
    - AX (acumulador) - recebe o cálculo, como uma somatória vai acumular nesse registrador, ou também para interrupção de memória
    - BX (base) - apontador, guarda endereço base para instruções 
    - CX (contador) - usado em loops, guarda o valor de quantas voltas irão ser executadas (i), ao fim de cada iteração diminui o valor em 1

- **Destino/Origem - pegar dados anteriores e atualizar os dados em blocos (mover ou copiar dados)**
    - SI (Índice Fonte) - aponta a origem de uma sequência de dados, para manuseio de blocos de dados (começa no registro x) 
    - DI (Índice Destino) - trabalha com o SI (termina no registro y)
    - Stack (pilha) - sequência de dados retirada na ordem LIFO, não são alteradas manualmente
    - BP (base pointer) - aponta o endereço base da pilha (início do local da memória onde os dados começarão a ser empilhados)
    - SP (stack pointer) - aponta para o endereço de onde foi colocado o último dado da pilha

- **Segmento - apontam segmentos da memória onde são colocadas instruções e dados que serão processados**
    - CS (code segment) - aponta o local de memória onde o código do programa começa (instruções)
    - DS (data segment) - aponta o local para localização dos dados (variáveis, etc.), manuseio de blocos normalmente
    - SS (stack segment) - processador coloca dados de retorno de uma função ou instrução (e.g. if else)
    - IP (instruction pointer) - aponta para a próxima instrução (local da memória da mesma), kaeru ha kinsi

- **Flags - registradores de estado do processador**
    - C = carry
        - setado quando houver "vai um" numa adição binária ou quando houver BORROW de uma subtração
        - usado para deslocamento de bit para fora do dado
    - P = parity
        - após uma instrução aritmética, verifica se o resultado tem um verdadeiro ou não (par de 1??)
    - A = auxiliar carry
        - indica um "vai um" no meio do dado
        - no caso de byte, se houve um "vai um" do bit 3 para o bit 4
    - Z = zero
        - indica se o resultado de uma operação é zero ou não
    - S = signal
        - cópia do bit de mais alta ordem do resultado, indicando o sinal (+/-)
    - T = trap
        - executa instruções passo-a-passo (de maneira controlada, e.g. loop)
    - I = Interrupt Enable Flag
        - habilita ou desabilita:
            - reconhecer interrupções mascaráveis pela CPU
                - não executar determinadas interrupções pela CPU
                - kernel as vezes previne interrupções durante atividades críticas para não resultar em dados corrompidos
                - instruções privilegiadas mascara certos valores de interrupções
    - D = Direction - Controla a direção para onde as instruções de string irão decorrer a memória.
    - O = Overflow
        - depois de uma instrução
            - indica se houve mudança no bit mais significativo ou no sinal (se excedeu os bits de instrução, saiu da faixa)
            - complementar ao carry

### Ciclo de instrução básico
Busca instrução na memória -> Interpreta a operação a ser realizada -> Busca operandos se houver -> Executa a operação -> Escreve o resultado
### Barramentos
![[Pasted image 20240919194450.png]]
![[Pasted image 20240919194647.png]]