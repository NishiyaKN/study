# 0819
### Organização do processador
- Parece como uma caixa-preta
- Recebe os dados associados as entradas (input) e processa de forma padronizada, com resultados bem definidos na saída
- Desempenho depende não só da velocidade, mas também memória cache, overclock, núcleos, etc
- Trabalha com clocks, pulsos elétricos quadrados periódicos
![[Pasted image 20240819090301.png]]
Sobre o grafico acima
- em T1, um dado é recebido pela entrada da CPU;
- em T2, o dado é processado internamente pela CPU;
- em T3, o dado processado é apresentado na saída da CPU

- foi executado apenas um passo a cada pulso ou ciclo de relógio
- o próximo será somente quando o passo anterior já estiver finalizado (verifica pela unidade de controle)
- em muitos casos, para obter um dado processado (resultado) na saída da CPU, é preciso mais ciclos de relógio
- Quanto mais moderno a CPU, maior e mais complexo será o seu set de instruções.

Exemplo de somatório de dois números inteiros:
- em T1, entrada do primeiro número na CPU -> fica na memória de registrador R1
- em T2, entrada do segundo número -> fica em outra posição da memória R2
- em T3, entrada da instrução de soma -> fica na R3
- em T4, os dados são processados internamente na CPU -> coloca o resultado na R4
- em T5, o dado processado é apresentado na saída -> envia o resultado da memória R4 para a memória externa (HDD/SDD)
- CPU para processar dados necessita dos dados de entrada, as instruções de operação e clock com pulsos periódicos
![[Pasted image 20240819091520.png]]
Na figura acima, o software pode significar instruções enviadas para a CPU

### Exercício 1
Dissídio coletivo -> 5% de aumento para todos os funcionários

- T1 -> Salário atual func1 -> R1
- T2 -> Taxa de dissídio -> R2
- T3 -> T1 * T2 (entrada da instrução) -> R3
- T4 -> Resultado da R3 (R1 * R2) -> R4
- T5 -> Envia o R4 ao banco de dados folha de pagamento

T1 -> input de quantidade do estoque atual -> R1
T2 -> input de nova quantidade do estoque -> R2
T3 -> R1 = R2 (instrução para substituição da quantidade) -> R3
T4 -> resultado da T3 -> R4
T5 -> envia como output o R4 ao banco de dados do estoque
___
T1 -> input da taxa de conversão atual -> R1
T2 -> input da quantidade USD -> R2
T3 -> R1 * R2 (taxa * quantidade USD)-> R3
T4 -> resultado da T3 -> R4
T5 -> mostra como output o resultado da R4 em libras
___
T1 -> input do valor antigo -> R1
T2 -> input do valor atual -> R2
T3 -> R2 - R1 (valor do aumento) -> R3
T4 -> input da quantidade de ações -> R4
T5 -> input da porcentagem que recebe de cada dividendo -> R5
T6 -> R3 * R4 * R5 (aumento * ações * porcentagem) -> R6
T7 -> resultado da T6 -> R7
T8 -> mostra como output R7 o valor para ser pago
___
T1 - input do valor antigo -> R1
T2 - input do valor novo -> R2
T3 - R2 - R1 (valor do aumento) -> R3
T4 - R3 * 12 (aumento anual) -> R4
T5 - resultado da T4 -> R5
T6 - mostra como output a R5
___
T1 -> input do valor atual -> R1
T2 -> input da porcentagem depreciação -> R2
T3 -> R1 - R2 (valor pós depreciação) -> R3
T4 -> resultado da T3 -> R4
T5 -> mostra a R4
___
T1 -> input da nota N1 -> R1, 
T2 -> input da nota AI -> R2,
T3 -> input da nota AP -> R3,
T4 -> (R2 + R3)/2 (cálculo da média de N2) -> R4,
T5 -> resultado da T4 -> R5,
T6 -> (R1 + R5)/2 (média N1 ### Organização do processador
e N2)-> R6,
T7 -> resultado da T6 -> R7,
T8 -> mostra como output a media final R7 
