Para evitar/identificar os escalonamento não-seriáveis temos os protocolos de controle de concorrência
___
## Bloqueio bifásico
Sempre gera escalonamento correto, ele bloqueia o acesso até o processo atual ter terminado suas ações com o dado.
- Teremos dois estados:
	- lock(x) = 1 // bloqueado
	- lock(x) = 0 // desbloqueado
- Considerado um protocolo pessimista, assume que tudo vai dar errado, então se garante antes. 
- Fácil de implementar
- Pode gerar deadlock e starvation

Temos dois tipos de implementações do controle bifásico: 
- Classico - vai liberando aos poucos, se der rollback em algum, ele vai ter que refazer o processo, e pode ser que outro processo T2 ja tenha bloqueado um dos dados usados pelo T1.
![[Pasted image 20231009092510.png|300]]
- Estrito - libera tudo de uma vez somente após terminar todas as ações. Mais consistente.
![[Pasted image 20231009092531.png|300]]
### Granularidade
Se bloquear o tabela inteira, outros não terão acesso, então tenta bloquear pedaços pequenos dos dados.
### Deadlock
Uma transação espera um recurso que está bloqueado por outra e vice versa.
![[Pasted image 20231009091301.png|400]]
Pra resolver isso, precisa cancelar uma das transações. Normalmente a qual está em execução a menos tempo, ou a que realizou o menor número de operações, etc. 
### Starvation
Uma transação aguarda por tempo indetermindado até a outra terminar (fila de prioridade).
___
## Timestamp
Protocolo de marcas de tempo
- Protocolo otimista - não acha que haverá algum problema, não faz antecipações, trata o problema quando ele corre.
- Controle por ordem de chegada - tipo a fila da farmácia com senha
- Cada dado e cada transação recebe um timestamp

Exemplo:
TS(x) -  timestamp da ultima transação
TS(x) = 1 => TS(x) = 3
![[Drawing 2023-10-09 10.12.45.excalidraw]]
Se o timestamp da transação for menor que o do dado, ele perdeu a vez e vai ter que executar novamente para pegar um outro timestamp. **Gera stavation, mas não deadlock**.
Algoritmo:
![[Pasted image 20231009102214.png|300]]
Algoritmo do timestamp estrito (evita starvation):
![[Pasted image 20231009102241.png|300]]