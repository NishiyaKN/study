EXERCÍCIOS DE REVISÃO (TRANSAÇÕES E CONTROLE DE CONCORRÊNCIA)


**1- Liste as propriedades ACID e explique cada uma delas.**
Atomicidade - Cada transação deve ser executada por inteira, sem executar apenas parte da transação
Consistência - Toda transição deve conservar o estado de consistência dos dados
Isolamento - Transações não devem ser influenciadas por outras.
Durabilidade - Os efeitos de uma transação são permanentes, podendo ser desfeitos somente como resultado de uma transação posterior e bem-sucedida.

**2- Durante sua execução, uma transação passa por vários estados, até que finalmente seja confirmada ou abortada. Liste todas as sequências de estados possíveis por meio das quais uma transação pode passar. Explique por que cada transação de estado pode ocorrer.**
Ativo - estado inicial de toda transação sendo executada, executa uma ou mais operações de read e write.
Parcialmente efetivada - após executar a última operação, verifica se está tudo certo para realizar o commit ou terá que abortar
Efetivada - caso esteja tudo certo, os resultados da transação são efetivados no banco
Falha - caso ocorra algum erro durante ou após a finalização das operações, os resultados da transação são descartados
Encerrada - após efetivar ou descartar os resultados, a transação é finalizada, podendo ser reiniciada caso necessário.

**3- Explique a distinção entre os termos escalonamento serial e escalonamento seriável.**
Um escalonamento serial é quando as operações de uma transação ocorrem sequencialmente sem intercalações com operações de outras transações. Um escalonamento seriável é quando as operações de diferentes transações ocorrem intercaladamente, mas o resultado final é o mesmo de um escalonamento serial.

**4- Por que os sistemas de banco de dados admitem a execução simultânea de transações, apesar do esforço de programação extra necessário para garantir que a execução simultânea não cause quaisquer problemas?**
Isso é necessário para garantir uma melhor otimização de performance do acesso ao banco de dados. 

**5- Que benefício o bloqueio rigoroso em duas fases oferece? Como ele se compara com outras formas de bloqueio em duas fases?**
(Rollback cascata)
O bloqueio bifásico rigoroso(estrito) não libera nenhum de seus bloqueios de write e read até que a transação seja concluída, desse modo uma transação diferente não poderá acessar e modificar um dado sendo utilizado pela primeira transação, evitando casos em que a transação dê rollback e uma outra transação havia pego um dado dessa primeira transação, que agora que deu rollback está com o dado errado. A estrita não libera apenas o de write e o conservador bloqueia todos os itens antes de iniciar as operações. 

**6- Mostre que o protocolo de bloqueio em duas fases assegura a serialização por conflito e que as transações podem ser serializadas de acordo com seus pontos de bloqueio.**

Serialização por conflito: duas transações estão em conflito se ambos precisam usar o mesmo dado. 
Pontos de bloqueio: 

Ele garante as propriedades ACID, pois se essas prop forem satisfeitas não haverá problema de serialização. Nesse caso é pelo isolamento das transações. Quando bloqueamos um dado ninguém consegue acessar, dessa forma ele é isolado para apenas a transação que está utilizando. 

O bloqueio bifásico garante que os dados estejam bloqueados antes que sejam realizadas operações sobre eles, dessa forma evitando que duas transações usem valores diferentes para o mesmo dado. Os pontos de bloqueio referem-se às duas fases de bloqueio e desbloqueio dos dados utilizados pela transação.

**7- Considere as duas transações a seguir: (protocolo de bloqueio bifásico e deadlock)**
**T1: 	lock(A)
	lock(B)
read(A);
       	read(B);
       	if A = 0 then B := B + 1;
       	write(B)
	unlock(A)
unlock(B).
T2: 	lock(B)
	lock(A)
read(B);
       	read(A);
       	if B = 0 then A := A + 1;
       	write(A)
unlock(B)
unlock(A).**

**Acrescente instruções de bloqueio e desbloqueio às transações T1 e T2, de modo que observem o protocolo de bloqueio em duas fases. A execução dessas transações poderá resultar em um impasse(deadlock)?**
SIm, pode gerar deadlock, pois se T1 bloqueia A e T2 bloqueia o B logo em seguida, o T1 irá esperar o T2 desbloquear o B para poder usá-lo, enquanto o T2 irá esperar o T1 desbloquear o A para poder usá-lo.
Podemos resolver isso ao fazer com que ambas as transações bloqueiam primeiramente o mesmo dado, assim se estiver já bloqueado ele não prossegue bloqueando o outro dado.

**8- A maioria das implementações de sistemas de banco de dados utiliza o bloqueio estrito em duas fases. Sugira três motivos para a popularidade desse protocolo.**
1- É de fácil implementação e é rápido
2- Garante escalonamentos seriáveis
3- Evita problemas de read e write, melhorando a consistência, (evita rollback cascata)

**9- Quando uma transação é revertida sob a ordenação por timestamp, ela recebe um novo timestamp. Por que ela não pode simplesmente manter seu timestamp antigo?**
Isso ocorre para garantir a consistência dos dados. Como o timestamp não utiliza o sistema de bloqueios, para evitar que um dado seja erroneamente lido ou escrito por ter sido modificado previamente, as operações devem seguir a ordem correta para poder manipular os dados.