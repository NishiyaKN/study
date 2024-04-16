## Transação
É um conjunto de uma ou mais operações que constituem uma única tarefa ou unidade lógica de trabalho a ser processada. Possui como objetivo **preservar** a **integridade** e a **consistência** dos dados.
Em um banco de dados temos normalmente um ambiente de concorrência, onde temos várias conexões simultâneas que acessam os mesmos dados (concorrência intercalada). 

- Commit - Confirmação de uma transação;
- Rollback - Desfazer as alterações de uma transação

Exemplo:
Considere duas aplicações de software que fazem acesso
simultâneo ao banco de dados de uma agência bancária:
- SOMA100: Acrescenta R$100,00 à conta de um correntista da agência bancária.
- SOMA10P: Acrescenta 10% do valor corrente à conta de um correntista da agência bancária.
![[Drawing 2023-10-09 08.13.33.excalidraw]]
O critério de consistência seria os dois valores possíveis caso cada trasação fosse executada após a outra terminar. Mas caso o processador decida intercalar os processos, acabaremos com um resultado totalmente diferente.
## Estados de uma transação
![[Pasted image 20231016083251.png]]
___
## Propriedades ACID
- **Atomicidade** - cada transação é indivisível, importante para o exemplo mostrado acima, ou ele faz toda a transação ou ele não faz nada.
- **Consistência** - toda transação preserva o estado de consistência do banco, se era consistente, permanece consistente, se era inconsistente, permanece inconsistente.
- **Isolamento** - trasações nao devem sofrer influência de outras transações.
- **Durabilidade** - os efeitos de uma transação são permanentes, podendo ser desfeitos somente como resultado de uma transação posterior e bem-sucedida
### Escalonamento
Escalonamento válido ou serial é onde você executa integralmente uma transação e depois a outra, conserva a consistência do banco. 
![[Pasted image 20231009083805.png|300]]
![[Pasted image 20231009083754.png|400]]
**Escalonamentos seriáveis** -> gera resultado igual a um escalonamento serial
Neste caso A e B são seriais.
Plano D e X, mesmo intercalando, gera um resultado igual um serial.
*Plano C não gera o mesmo resultado.*
Entre um read e write, nesses exemplos, omite-se o processamento do x, o C está errado pois o T2 leu o x antes do T1 terminar de processar o x.
